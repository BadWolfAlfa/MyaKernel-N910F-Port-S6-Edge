#include <linux/module.h>
#include <linux/vermagic.h>
#include <linux/compiler.h>

MODULE_INFO(vermagic, VERMAGIC_STRING);

struct module __this_module
__attribute__((section(".gnu.linkonce.this_module"))) = {
	.name = KBUILD_MODNAME,
	.init = init_module,
#ifdef CONFIG_MODULE_UNLOAD
	.exit = cleanup_module,
#endif
	.arch = MODULE_ARCH_INIT,
};

MODULE_INFO(intree, "Y");

static const struct modversion_info ____versions[]
__used
__attribute__((section("__versions"))) = {
	{ 0x42c71a9, __VMLINUX_SYMBOL_STR(module_layout) },
	{ 0x4f6969e4, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0xa2aaeefd, __VMLINUX_SYMBOL_STR(v4l2_event_unsubscribe) },
	{ 0x12da5bb2, __VMLINUX_SYMBOL_STR(__kmalloc) },
	{ 0xf9a482f9, __VMLINUX_SYMBOL_STR(msleep) },
	{ 0xc36a636d, __VMLINUX_SYMBOL_STR(video_device_release_empty) },
	{ 0x15692c87, __VMLINUX_SYMBOL_STR(param_ops_int) },
	{ 0x67c2fa54, __VMLINUX_SYMBOL_STR(__copy_to_user) },
	{ 0x287bfb57, __VMLINUX_SYMBOL_STR(dev_set_drvdata) },
	{ 0xc8b57c27, __VMLINUX_SYMBOL_STR(autoremove_wake_function) },
	{ 0xb976f74, __VMLINUX_SYMBOL_STR(v4l2_device_unregister) },
	{ 0xe523e826, __VMLINUX_SYMBOL_STR(v4l2_ctrl_handler_free) },
	{ 0x46b22a8e, __VMLINUX_SYMBOL_STR(v4l2_ctrl_g_ctrl) },
	{ 0xc87c1f84, __VMLINUX_SYMBOL_STR(ktime_get) },
	{ 0xa189ad87, __VMLINUX_SYMBOL_STR(usb_kill_urb) },
	{ 0x67811954, __VMLINUX_SYMBOL_STR(__video_register_device) },
	{ 0xbdc9c788, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0x999e8297, __VMLINUX_SYMBOL_STR(vfree) },
	{ 0x33635871, __VMLINUX_SYMBOL_STR(v4l2_device_register) },
	{ 0x275ef902, __VMLINUX_SYMBOL_STR(__init_waitqueue_head) },
	{ 0xdd0a2ba2, __VMLINUX_SYMBOL_STR(strlcat) },
	{ 0xfa2a45e, __VMLINUX_SYMBOL_STR(__memzero) },
	{ 0x1c1e13fd, __VMLINUX_SYMBOL_STR(v4l2_device_disconnect) },
	{ 0x5f754e5a, __VMLINUX_SYMBOL_STR(memset) },
	{ 0x6e992026, __VMLINUX_SYMBOL_STR(v4l2_ctrl_s_ctrl) },
	{ 0x318d56ff, __VMLINUX_SYMBOL_STR(mutex_lock_interruptible) },
	{ 0xce5ddc1c, __VMLINUX_SYMBOL_STR(__mutex_init) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0xf3ccaf1e, __VMLINUX_SYMBOL_STR(video_unregister_device) },
	{ 0x5773f630, __VMLINUX_SYMBOL_STR(usb_set_interface) },
	{ 0xf62400ce, __VMLINUX_SYMBOL_STR(v4l2_ctrl_subscribe_event) },
	{ 0x73e20c1c, __VMLINUX_SYMBOL_STR(strlcpy) },
	{ 0x919e6299, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0x64be00e0, __VMLINUX_SYMBOL_STR(v4l2_fh_release) },
	{ 0x8cfa8a77, __VMLINUX_SYMBOL_STR(usb_free_coherent) },
	{ 0xfe2fce36, __VMLINUX_SYMBOL_STR(vm_insert_page) },
	{ 0x6beed008, __VMLINUX_SYMBOL_STR(module_put) },
	{ 0x63c68a27, __VMLINUX_SYMBOL_STR(usb_submit_urb) },
	{ 0x8ace8e89, __VMLINUX_SYMBOL_STR(video_devdata) },
	{ 0xf0fdf6cb, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0x3bd1b1f6, __VMLINUX_SYMBOL_STR(msecs_to_jiffies) },
	{ 0x6f1553b7, __VMLINUX_SYMBOL_STR(input_register_device) },
	{ 0xd62c833f, __VMLINUX_SYMBOL_STR(schedule_timeout) },
	{ 0xe5575247, __VMLINUX_SYMBOL_STR(v4l2_ctrl_handler_setup) },
	{ 0xde015a2d, __VMLINUX_SYMBOL_STR(usb_clear_halt) },
	{ 0x93de6732, __VMLINUX_SYMBOL_STR(input_free_device) },
	{ 0xa0b04675, __VMLINUX_SYMBOL_STR(vmalloc_32) },
	{ 0x52b2b66a, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0x2e58552c, __VMLINUX_SYMBOL_STR(v4l2_fh_open) },
	{ 0xd85cd67e, __VMLINUX_SYMBOL_STR(__wake_up) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x9d669763, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0x34371ffd, __VMLINUX_SYMBOL_STR(input_unregister_device) },
	{ 0x499cb58c, __VMLINUX_SYMBOL_STR(prepare_to_wait) },
	{ 0x1cfb04fa, __VMLINUX_SYMBOL_STR(finish_wait) },
	{ 0xefd6cf06, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr0) },
	{ 0x8f678b07, __VMLINUX_SYMBOL_STR(__stack_chk_guard) },
	{ 0x676bbc0f, __VMLINUX_SYMBOL_STR(_set_bit) },
	{ 0xadaf2147, __VMLINUX_SYMBOL_STR(usb_ifnum_to_if) },
	{ 0xb81960ca, __VMLINUX_SYMBOL_STR(snprintf) },
	{ 0x195b601, __VMLINUX_SYMBOL_STR(vmalloc_to_page) },
	{ 0x51d11915, __VMLINUX_SYMBOL_STR(usb_alloc_coherent) },
	{ 0xee254e5f, __VMLINUX_SYMBOL_STR(v4l2_device_put) },
	{ 0x42b58835, __VMLINUX_SYMBOL_STR(dev_get_drvdata) },
	{ 0x78866be9, __VMLINUX_SYMBOL_STR(usb_free_urb) },
	{ 0x34ce357a, __VMLINUX_SYMBOL_STR(video_ioctl2) },
	{ 0xc8b7b548, __VMLINUX_SYMBOL_STR(v4l2_ctrl_poll) },
	{ 0xe8cb428c, __VMLINUX_SYMBOL_STR(try_module_get) },
	{ 0x34f1f6ba, __VMLINUX_SYMBOL_STR(usb_alloc_urb) },
	{ 0x4cdb3178, __VMLINUX_SYMBOL_STR(ns_to_timeval) },
	{ 0x1bc084f5, __VMLINUX_SYMBOL_STR(input_allocate_device) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "4DFDEDC74050A350E879D49");
