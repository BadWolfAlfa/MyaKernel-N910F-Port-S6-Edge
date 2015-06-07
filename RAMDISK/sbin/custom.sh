#!/sbin/busybox sh

BB=/sbin/busybox

# replace (u)random with erandom
$BB rm -f /dev/urandom
$BB ln -s /dev/erandom /dev/urandom
$BB rm -f /dev/random
$BB ln -s /dev/erandom /dev/random

# Mount root as RW to apply tweaks and settings
$BB mount -t rootfs -o remount,rw rootfs;
$BB mount -o remount,rw /;

# Make tmp folder
$BB mkdir /tmp;
$BB chmod -R 777 /tmp/;

iptables -t mangle -A POSTROUTING -o rmnet+ -j TTL --ttl-set 64

# Init.d
$BB run-parts /system/etc/init.d
