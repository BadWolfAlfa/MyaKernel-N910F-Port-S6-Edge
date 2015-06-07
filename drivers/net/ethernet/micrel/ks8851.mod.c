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
	{ 0x15692c87, __VMLINUX_SYMBOL_STR(param_ops_int) },
	{ 0x3f6a92b3, __VMLINUX_SYMBOL_STR(eth_change_mtu) },
	{ 0xefb57ad5, __VMLINUX_SYMBOL_STR(eth_validate_addr) },
	{ 0x3a655e77, __VMLINUX_SYMBOL_STR(driver_unregister) },
	{ 0x1af45ca4, __VMLINUX_SYMBOL_STR(spi_register_driver) },
	{ 0xf411714e, __VMLINUX_SYMBOL_STR(register_netdev) },
	{ 0xd6b8e852, __VMLINUX_SYMBOL_STR(request_threaded_irq) },
	{ 0x79aa04a2, __VMLINUX_SYMBOL_STR(get_random_bytes) },
	{ 0x62fb5ff3, __VMLINUX_SYMBOL_STR(netdev_warn) },
	{ 0x287bfb57, __VMLINUX_SYMBOL_STR(dev_set_drvdata) },
	{ 0xce5ddc1c, __VMLINUX_SYMBOL_STR(__mutex_init) },
	{ 0x12a38747, __VMLINUX_SYMBOL_STR(usleep_range) },
	{ 0xca16dbe7, __VMLINUX_SYMBOL_STR(regulator_enable) },
	{ 0x99ec3b28, __VMLINUX_SYMBOL_STR(devm_regulator_get) },
	{ 0xa8f59416, __VMLINUX_SYMBOL_STR(gpio_direction_output) },
	{ 0x47229b5c, __VMLINUX_SYMBOL_STR(gpio_request) },
	{ 0x3757c9b, __VMLINUX_SYMBOL_STR(of_get_named_gpio_flags) },
	{ 0x140391ae, __VMLINUX_SYMBOL_STR(alloc_etherdev_mqs) },
	{ 0xd301535f, __VMLINUX_SYMBOL_STR(__netif_schedule) },
	{ 0x2a3aa678, __VMLINUX_SYMBOL_STR(_test_and_clear_bit) },
	{ 0x45512cda, __VMLINUX_SYMBOL_STR(mii_check_link) },
	{ 0xd3634947, __VMLINUX_SYMBOL_STR(netif_rx_ni) },
	{ 0x7307b93a, __VMLINUX_SYMBOL_STR(eth_type_trans) },
	{ 0xc68b01b8, __VMLINUX_SYMBOL_STR(skb_put) },
	{ 0x70f441ed, __VMLINUX_SYMBOL_STR(__netdev_alloc_skb) },
	{ 0xae3ee697, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0x27cb133b, __VMLINUX_SYMBOL_STR(eeprom_93cx6_multiread) },
	{ 0x822222db, __VMLINUX_SYMBOL_STR(eeprom_93cx6_write) },
	{ 0x98bb5a22, __VMLINUX_SYMBOL_STR(eeprom_93cx6_read) },
	{ 0x63d2ff63, __VMLINUX_SYMBOL_STR(eeprom_93cx6_wren) },
	{ 0xd41daa85, __VMLINUX_SYMBOL_STR(netif_device_detach) },
	{ 0x131cb2e0, __VMLINUX_SYMBOL_STR(consume_skb) },
	{ 0xf60373ba, __VMLINUX_SYMBOL_STR(skb_dequeue) },
	{ 0x92b57248, __VMLINUX_SYMBOL_STR(flush_work) },
	{ 0x9c7a42b6, __VMLINUX_SYMBOL_STR(netdev_info) },
	{ 0x6f337725, __VMLINUX_SYMBOL_STR(netif_device_attach) },
	{ 0x49ebacbd, __VMLINUX_SYMBOL_STR(_clear_bit) },
	{ 0x9d669763, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0xbdc9c788, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0x919e6299, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0x8e865d3c, __VMLINUX_SYMBOL_STR(arm_delay_ops) },
	{ 0xf07f9d6f, __VMLINUX_SYMBOL_STR(netdev_err) },
	{ 0x5fa57fd4, __VMLINUX_SYMBOL_STR(spi_sync) },
	{ 0x9f2296ea, __VMLINUX_SYMBOL_STR(mii_ethtool_gset) },
	{ 0x723961ba, __VMLINUX_SYMBOL_STR(mii_ethtool_sset) },
	{ 0x73e20c1c, __VMLINUX_SYMBOL_STR(strlcpy) },
	{ 0x83b2b3bb, __VMLINUX_SYMBOL_STR(mii_nway_restart) },
	{ 0xe0724156, __VMLINUX_SYMBOL_STR(mii_link_ok) },
	{ 0x676bbc0f, __VMLINUX_SYMBOL_STR(_set_bit) },
	{ 0xb64ff226, __VMLINUX_SYMBOL_STR(skb_queue_tail) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x16305289, __VMLINUX_SYMBOL_STR(warn_slowpath_null) },
	{ 0x630dca81, __VMLINUX_SYMBOL_STR(__dynamic_netdev_dbg) },
	{ 0x2d3385d3, __VMLINUX_SYMBOL_STR(system_wq) },
	{ 0x5fc56a46, __VMLINUX_SYMBOL_STR(_raw_spin_unlock) },
	{ 0xb2d48a2e, __VMLINUX_SYMBOL_STR(queue_work_on) },
	{ 0x71c90087, __VMLINUX_SYMBOL_STR(memcmp) },
	{ 0x9c0bd51f, __VMLINUX_SYMBOL_STR(_raw_spin_lock) },
	{ 0xfaf98462, __VMLINUX_SYMBOL_STR(bitrev32) },
	{ 0xa34f1ef5, __VMLINUX_SYMBOL_STR(crc32_le) },
	{ 0xfa2a45e, __VMLINUX_SYMBOL_STR(__memzero) },
	{ 0x4573c527, __VMLINUX_SYMBOL_STR(generic_mii_ioctl) },
	{ 0xa8b72e79, __VMLINUX_SYMBOL_STR(free_netdev) },
	{ 0xf20dabd8, __VMLINUX_SYMBOL_STR(free_irq) },
	{ 0xc45e1917, __VMLINUX_SYMBOL_STR(unregister_netdev) },
	{ 0xd85ac634, __VMLINUX_SYMBOL_STR(regulator_put) },
	{ 0x1258d9d9, __VMLINUX_SYMBOL_STR(regulator_disable) },
	{ 0xfe990052, __VMLINUX_SYMBOL_STR(gpio_free) },
	{ 0xd4a2b50a, __VMLINUX_SYMBOL_STR(_dev_info) },
	{ 0x42b58835, __VMLINUX_SYMBOL_STR(dev_get_drvdata) },
	{ 0xefd6cf06, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr0) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=eeprom_93cx6";

