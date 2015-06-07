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
	{ 0x2d3385d3, __VMLINUX_SYMBOL_STR(system_wq) },
	{ 0x9c7a42b6, __VMLINUX_SYMBOL_STR(netdev_info) },
	{ 0x12da5bb2, __VMLINUX_SYMBOL_STR(__kmalloc) },
	{ 0xf9a482f9, __VMLINUX_SYMBOL_STR(msleep) },
	{ 0x5fc56a46, __VMLINUX_SYMBOL_STR(_raw_spin_unlock) },
	{ 0x4d9b1dd8, __VMLINUX_SYMBOL_STR(mem_map) },
	{ 0xccffcdc2, __VMLINUX_SYMBOL_STR(page_address) },
	{ 0x287bfb57, __VMLINUX_SYMBOL_STR(dev_set_drvdata) },
	{ 0xecf85252, __VMLINUX_SYMBOL_STR(arm_dma_ops) },
	{ 0x79aa04a2, __VMLINUX_SYMBOL_STR(get_random_bytes) },
	{ 0x659d537d, __VMLINUX_SYMBOL_STR(pcie_set_readrq) },
	{ 0xc786693b, __VMLINUX_SYMBOL_STR(napi_complete) },
	{ 0x64021802, __VMLINUX_SYMBOL_STR(uncached_logk) },
	{ 0x95054479, __VMLINUX_SYMBOL_STR(pci_disable_device) },
	{ 0xb1ce6e4f, __VMLINUX_SYMBOL_STR(netif_carrier_on) },
	{ 0x2a3aa678, __VMLINUX_SYMBOL_STR(_test_and_clear_bit) },
	{ 0x58c55198, __VMLINUX_SYMBOL_STR(netif_carrier_off) },
	{ 0x4205ad24, __VMLINUX_SYMBOL_STR(cancel_work_sync) },
	{ 0xf55e9f7f, __VMLINUX_SYMBOL_STR(pci_release_regions) },
	{ 0x593a99b, __VMLINUX_SYMBOL_STR(init_timer_key) },
	{ 0x1826fc25, __VMLINUX_SYMBOL_STR(pcie_get_readrq) },
	{ 0x378b52c9, __VMLINUX_SYMBOL_STR(__alloc_pages_nodemask) },
	{ 0x70f441ed, __VMLINUX_SYMBOL_STR(__netdev_alloc_skb) },
	{ 0xa4c032dd, __VMLINUX_SYMBOL_STR(pci_set_master) },
	{ 0xfa2a45e, __VMLINUX_SYMBOL_STR(__memzero) },
	{ 0xd5f2172f, __VMLINUX_SYMBOL_STR(del_timer_sync) },
	{ 0xae3ee697, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0x51d559d1, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_irqrestore) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x5e24a4e4, __VMLINUX_SYMBOL_STR(ethtool_op_get_link) },
	{ 0x18bd76a4, __VMLINUX_SYMBOL_STR(_raw_spin_trylock) },
	{ 0xa8b72e79, __VMLINUX_SYMBOL_STR(free_netdev) },
	{ 0xf411714e, __VMLINUX_SYMBOL_STR(register_netdev) },
	{ 0xfde52e7a, __VMLINUX_SYMBOL_STR(netif_receive_skb) },
	{ 0x73e20c1c, __VMLINUX_SYMBOL_STR(strlcpy) },
	{ 0x16305289, __VMLINUX_SYMBOL_STR(warn_slowpath_null) },
	{ 0xe486d4de, __VMLINUX_SYMBOL_STR(pci_bus_write_config_dword) },
	{ 0xa6107cf0, __VMLINUX_SYMBOL_STR(__pci_enable_wake) },
	{ 0xa34f1ef5, __VMLINUX_SYMBOL_STR(crc32_le) },
	{ 0x7b8e9cea, __VMLINUX_SYMBOL_STR(netif_napi_add) },
	{ 0xd6b8e852, __VMLINUX_SYMBOL_STR(request_threaded_irq) },
	{ 0x8e865d3c, __VMLINUX_SYMBOL_STR(arm_delay_ops) },
	{ 0x97be7e3c, __VMLINUX_SYMBOL_STR(__get_page_tail) },
	{ 0x8e742225, __VMLINUX_SYMBOL_STR(dev_kfree_skb_any) },
	{ 0xaba32ef4, __VMLINUX_SYMBOL_STR(contig_page_data) },
	{ 0xe523ad75, __VMLINUX_SYMBOL_STR(synchronize_irq) },
	{ 0x8c22a309, __VMLINUX_SYMBOL_STR(build_skb) },
	{ 0xafdd3192, __VMLINUX_SYMBOL_STR(dev_kfree_skb_irq) },
	{ 0x6f337725, __VMLINUX_SYMBOL_STR(netif_device_attach) },
	{ 0xd4a2b50a, __VMLINUX_SYMBOL_STR(_dev_info) },
	{ 0xd41daa85, __VMLINUX_SYMBOL_STR(netif_device_detach) },
	{ 0xe2abbfd5, __VMLINUX_SYMBOL_STR(__napi_schedule) },
	{ 0xf9e7e5d0, __VMLINUX_SYMBOL_STR(pci_bus_read_config_dword) },
	{ 0xc2165d85, __VMLINUX_SYMBOL_STR(__arm_iounmap) },
	{ 0x7307b93a, __VMLINUX_SYMBOL_STR(eth_type_trans) },
	{ 0xa6b4a40d, __VMLINUX_SYMBOL_STR(pskb_expand_head) },
	{ 0xf089318b, __VMLINUX_SYMBOL_STR(pci_unregister_driver) },
	{ 0x9c0bd51f, __VMLINUX_SYMBOL_STR(_raw_spin_lock) },
	{ 0x4fe6e09, __VMLINUX_SYMBOL_STR(__dynamic_dev_dbg) },
	{ 0x598542b2, __VMLINUX_SYMBOL_STR(_raw_spin_lock_irqsave) },
	{ 0x23257535, __VMLINUX_SYMBOL_STR(pci_set_power_state) },
	{ 0x62fb5ff3, __VMLINUX_SYMBOL_STR(netdev_warn) },
	{ 0xefb57ad5, __VMLINUX_SYMBOL_STR(eth_validate_addr) },
	{ 0x44da5d0f, __VMLINUX_SYMBOL_STR(__csum_ipv6_magic) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x9d669763, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0xab500d85, __VMLINUX_SYMBOL_STR(___pskb_trim) },
	{ 0x10977bd5, __VMLINUX_SYMBOL_STR(pci_request_regions) },
	{ 0x5e06cd68, __VMLINUX_SYMBOL_STR(pci_disable_msi) },
	{ 0x89c460e4, __VMLINUX_SYMBOL_STR(dma_supported) },
	{ 0x784d6167, __VMLINUX_SYMBOL_STR(__pci_register_driver) },
	{ 0x8d6bd75f, __VMLINUX_SYMBOL_STR(put_page) },
	{ 0x110b5a15, __VMLINUX_SYMBOL_STR(dev_warn) },
	{ 0xc45e1917, __VMLINUX_SYMBOL_STR(unregister_netdev) },
	{ 0xfb961d14, __VMLINUX_SYMBOL_STR(__arm_ioremap) },
	{ 0xefd6cf06, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr0) },
	{ 0x676bbc0f, __VMLINUX_SYMBOL_STR(_set_bit) },
	{ 0xb2d48a2e, __VMLINUX_SYMBOL_STR(queue_work_on) },
	{ 0x29469d95, __VMLINUX_SYMBOL_STR(pci_enable_msi_block) },
	{ 0xd301535f, __VMLINUX_SYMBOL_STR(__netif_schedule) },
	{ 0xca54fee, __VMLINUX_SYMBOL_STR(_test_and_set_bit) },
	{ 0x131cb2e0, __VMLINUX_SYMBOL_STR(consume_skb) },
	{ 0x9ddcd69f, __VMLINUX_SYMBOL_STR(netdev_update_features) },
	{ 0x766faddd, __VMLINUX_SYMBOL_STR(pci_enable_device_mem) },
	{ 0x49ebacbd, __VMLINUX_SYMBOL_STR(_clear_bit) },
	{ 0xc68b01b8, __VMLINUX_SYMBOL_STR(skb_put) },
	{ 0xdd800d1d, __VMLINUX_SYMBOL_STR(pci_enable_device) },
	{ 0xe47b9a4f, __VMLINUX_SYMBOL_STR(pci_wake_from_d3) },
	{ 0x42b58835, __VMLINUX_SYMBOL_STR(dev_get_drvdata) },
	{ 0xe4e6d9f0, __VMLINUX_SYMBOL_STR(pci_find_ext_capability) },
	{ 0x966cf1e1, __VMLINUX_SYMBOL_STR(pcie_capability_write_word) },
	{ 0x34f8a114, __VMLINUX_SYMBOL_STR(device_set_wakeup_enable) },
	{ 0xf20dabd8, __VMLINUX_SYMBOL_STR(free_irq) },
	{ 0x140391ae, __VMLINUX_SYMBOL_STR(alloc_etherdev_mqs) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

MODULE_ALIAS("pci:v00001969d00001063sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001969d00001062sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001969d00002060sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001969d00002062sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001969d00001073sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001969d00001083sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "D7C51AE9EAEA06DE7F10568");
