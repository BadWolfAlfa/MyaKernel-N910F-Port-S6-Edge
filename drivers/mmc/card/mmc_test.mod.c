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
	{ 0x42aa4b49, __VMLINUX_SYMBOL_STR(single_release) },
	{ 0x84b898af, __VMLINUX_SYMBOL_STR(seq_read) },
	{ 0x9d68fa08, __VMLINUX_SYMBOL_STR(seq_lseek) },
	{ 0x64c734d0, __VMLINUX_SYMBOL_STR(mmc_unregister_driver) },
	{ 0x58b654c7, __VMLINUX_SYMBOL_STR(mmc_register_driver) },
	{ 0x1424f59, __VMLINUX_SYMBOL_STR(sg_copy_to_buffer) },
	{ 0x8371daff, __VMLINUX_SYMBOL_STR(sg_copy_from_buffer) },
	{ 0xefdd2345, __VMLINUX_SYMBOL_STR(sg_init_one) },
	{ 0x12da5bb2, __VMLINUX_SYMBOL_STR(__kmalloc) },
	{ 0x27fa66e1, __VMLINUX_SYMBOL_STR(nr_free_buffer_pages) },
	{ 0x14673aa4, __VMLINUX_SYMBOL_STR(mmc_set_blocklen) },
	{ 0x4d9b1dd8, __VMLINUX_SYMBOL_STR(mem_map) },
	{ 0xd5152710, __VMLINUX_SYMBOL_STR(sg_next) },
	{ 0xccffcdc2, __VMLINUX_SYMBOL_STR(page_address) },
	{ 0xf88c3301, __VMLINUX_SYMBOL_STR(sg_init_table) },
	{ 0x2006973, __VMLINUX_SYMBOL_STR(mmc_wait_for_req) },
	{ 0x541008ca, __VMLINUX_SYMBOL_STR(mmc_wait_for_cmd) },
	{ 0x5f754e5a, __VMLINUX_SYMBOL_STR(memset) },
	{ 0x1e9f1de9, __VMLINUX_SYMBOL_STR(mmc_start_req) },
	{ 0x46608fa0, __VMLINUX_SYMBOL_STR(getnstimeofday) },
	{ 0x4924cbf8, __VMLINUX_SYMBOL_STR(mmc_can_trim) },
	{ 0xa7a7b060, __VMLINUX_SYMBOL_STR(mmc_set_data_timeout) },
	{ 0x850230af, __VMLINUX_SYMBOL_STR(mmc_erase) },
	{ 0x2b70d0d9, __VMLINUX_SYMBOL_STR(mmc_can_erase) },
	{ 0xe6da44a, __VMLINUX_SYMBOL_STR(set_normalized_timespec) },
	{ 0xd4a2b50a, __VMLINUX_SYMBOL_STR(_dev_info) },
	{ 0xae3ee697, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0xb71b78f0, __VMLINUX_SYMBOL_STR(debugfs_create_file) },
	{ 0x4f6969e4, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0xaba32ef4, __VMLINUX_SYMBOL_STR(contig_page_data) },
	{ 0x8f678b07, __VMLINUX_SYMBOL_STR(__stack_chk_guard) },
	{ 0xf0fdf6cb, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0x7a783f0a, __VMLINUX_SYMBOL_STR(__free_pages) },
	{ 0x22a4b07e, __VMLINUX_SYMBOL_STR(mmc_rpm_release) },
	{ 0x66d5962f, __VMLINUX_SYMBOL_STR(mmc_release_host) },
	{ 0x52b2b66a, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0xe31f3c85, __VMLINUX_SYMBOL_STR(__mmc_claim_host) },
	{ 0xe7834db8, __VMLINUX_SYMBOL_STR(mmc_rpm_hold) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x378b52c9, __VMLINUX_SYMBOL_STR(__alloc_pages_nodemask) },
	{ 0x86a4889a, __VMLINUX_SYMBOL_STR(kmalloc_order_trace) },
	{ 0x11a13e31, __VMLINUX_SYMBOL_STR(_kstrtol) },
	{ 0xfbc74f64, __VMLINUX_SYMBOL_STR(__copy_from_user) },
	{ 0x59e5070d, __VMLINUX_SYMBOL_STR(__do_div64) },
	{ 0xfa2a45e, __VMLINUX_SYMBOL_STR(__memzero) },
	{ 0x1aef070f, __VMLINUX_SYMBOL_STR(mmc_can_reset) },
	{ 0x9130cba4, __VMLINUX_SYMBOL_STR(mmc_hw_reset_check) },
	{ 0xdf31a038, __VMLINUX_SYMBOL_STR(seq_printf) },
	{ 0xf55d91be, __VMLINUX_SYMBOL_STR(single_open) },
	{ 0x81300c80, __VMLINUX_SYMBOL_STR(debugfs_remove) },
	{ 0xbdc9c788, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x919e6299, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0xefd6cf06, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr0) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

