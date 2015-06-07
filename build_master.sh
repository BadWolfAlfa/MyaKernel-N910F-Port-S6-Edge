#!/bin/sh
export PLATFORM="TW"
export MREV="LL-Beta_3-Spanish-"
export CURDATE=`date "+%d-%m-%Y"`
export MUXEDNAMELONG="MyaKernel-PortS6Edge-$MREV-$PLATFORM-$CARRIER"
export MUXEDNAMESHRT="MyaKernel-PortS6Edge-$MREV-$PLATFORM-$CARRIER*"
export KTVER="--$MUXEDNAMELONG--"
export KERNELDIR=`readlink -f .`
export PARENT_DIR=`readlink -f ..`
export INITRAMFS_DEST=$KERNELDIR/kernel/usr/initramfs
export INITRAMFS_SOURCE=$KERNELDIR/RAMDISK
export CONFIG_$PLATFORM_BUILD=y
export PACKAGEDIR=$KERNELDIR/Packages/$PLATFORM
#Enable FIPS mode
#export USE_SEC_FIPS_MODE=true
export ARCH=arm

export CROSS_COMPILE=$KERNELDIR/ToolChain/bin/arm-cortex_a15-linux-gnueabihf-
export ENABLE_GRAPHITE=true

time_start=$(date +%s.%N)

echo "Remove old Package Files"
rm -rf $PACKAGEDIR/system/*

echo "Setup Package Directory"
mkdir -p $PACKAGEDIR/system/app
mkdir -p $PACKAGEDIR/system/lib/modules
mkdir -p $PACKAGEDIR/system/etc/init.d

echo "Create initramfs dir"
mkdir -p $INITRAMFS_DEST

echo "Remove old initramfs dir"
rm -rf $INITRAMFS_DEST/*

echo "Copy new initramfs dir"
cp -R $INITRAMFS_SOURCE/* $INITRAMFS_DEST

echo "chmod initramfs dir"
chmod -R g-w $INITRAMFS_DEST/*
rm $(find $INITRAMFS_DEST -name EMPTY_DIRECTORY -print)
rm -rf $(find $INITRAMFS_DEST -name .git -print)

echo "Remove old zImage"
rm $PACKAGEDIR/zImage
rm arch/arm/boot/zImage
rm arch/arm/boot/zImage-dtb
rm arch/arm/boot/dt.img
rm arch/arm/boot/dts/*.dtb
rm arch/arm/boot/dts/*.reverse.dts

echo "Make the kernel"
make VARIANT_DEFCONFIG=apq8084_sec_trlte_eur_defconfig apq8084_sec_defconfig SELINUX_DEFCONFIG=selinux_defconfig SELINUX_LOG_DEFCONFIG=selinux_log_defconfig TIMA_DEFCONFIG=tima_defconfig DMVERITY_DEFCONFIG=dmverity_defconfig

echo "Modding .config file - "$KTVER
sed -i 's,CONFIG_LOCALVERSION="-MyaKernel-v3-Spanish",CONFIG_LOCALVERSION="'$KTVER'",' .config

HOST_CHECK=`uname -n`
if [ $HOST_CHECK = 'ktoonsez-VirtualBox' ] || [ $HOST_CHECK = 'task650-Underwear' ]; then
	echo "Ktoonsez/task650 24!"
	make -j24
else
	echo "Others! - " + $HOST_CHECK
	make -j`grep 'processor' /proc/cpuinfo | wc -l`
fi;

echo "Copy modules to Package"
cp -a $(find . -name *.ko -print |grep -v initramfs) $PACKAGEDIR/system/lib/modules/
if [ $ADD_KTWEAKER = 'Y' ]; then
	cp /home/ktoonsez/workspace/com.ktoonsez.KTweaker.apk $PACKAGEDIR/system/app/com.ktoonsez.KTweaker.apk
	cp /home/ktoonsez/workspace/com.ktoonsez.KTmonitor.apk $PACKAGEDIR/system/app/com.ktoonsez.KTmonitor.apk
fi;

if [ -e $KERNELDIR/arch/arm/boot/zImage ]; then
	echo "Copy zImage to Package"
	cp arch/arm/boot/zImage $PACKAGEDIR/zImage

	echo "Make boot.img"
	./mkbootfs $INITRAMFS_DEST | gzip > $PACKAGEDIR/ramdisk.gz
	tools/dtbTool -o arch/arm/boot/dt.img -s 4096 -p scripts/dtc/ arch/arm/boot/dts/
	chmod a+r arch/arm/boot/dt.img
	tools/mkbootimg --cmdline 'console=null androidboot.hardware=qcom user_debug=23 msm_rtb.filter=0x3b7 dwc3_msm.cpu_to_affin=1' --kernel $PACKAGEDIR/zImage --ramdisk $PACKAGEDIR/ramdisk.gz --base 0x00000000 --pagesize 4096 --ramdisk_offset 0x02600000 --tags_offset 0x02400000 --dt arch/arm/boot/dt.img --output $PACKAGEDIR/boot.img 
	cd $PACKAGEDIR
	cp -R ../META-INF .

	rm ramdisk.gz
	rm zImage
	rm ../$MUXEDNAMESHRT-$CURDATE.zip
	zip -r ../$MUXEDNAMELONG-$CURDATE.zip .

	time_end=$(date +%s.%N)
	echo -e "${BLDYLW}Total time elapsed: ${TCTCLR}${TXTGRN}$(echo "($time_end - $time_start) / 60"|bc ) ${TXTYLW}minutes${TXTGRN} ($(echo "$time_end - $time_start"|bc ) ${TXTYLW}seconds) ${TXTCLR}"


	cd $KERNELDIR
else
	echo "KERNEL DID NOT BUILD! no zImage-dtb exist"
fi;

echo "Modding file Final .Config for future changes "$KTVER
sed -i 's,CONFIG_LOCALVERSION="'$KTVER'",CONFIG_LOCALVERSION="-MyaKernel-v3-Spanish",' .config
