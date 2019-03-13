#include <linux/module.h>
#include <linux/vermagic.h>
#include <linux/compiler.h>

MODULE_INFO(vermagic, VERMAGIC_STRING);
MODULE_INFO(name, KBUILD_MODNAME);

__visible struct module __this_module
__attribute__((section(".gnu.linkonce.this_module"))) = {
	.name = KBUILD_MODNAME,
	.init = init_module,
#ifdef CONFIG_MODULE_UNLOAD
	.exit = cleanup_module,
#endif
	.arch = MODULE_ARCH_INIT,
};

MODULE_INFO(intree, "Y");

#ifdef CONFIG_RETPOLINE
MODULE_INFO(retpoline, "Y");
#endif

static const struct modversion_info ____versions[]
__used
__attribute__((section("__versions"))) = {
	{ 0xa595df7e, __VMLINUX_SYMBOL_STR(module_layout) },
	{ 0xb0d92dc0, __VMLINUX_SYMBOL_STR(netdev_info) },
	{ 0x9bb7af9a, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0x12da5bb2, __VMLINUX_SYMBOL_STR(__kmalloc) },
	{ 0xf42ab45c, __VMLINUX_SYMBOL_STR(ethtool_op_get_ts_info) },
	{ 0x5fc56a46, __VMLINUX_SYMBOL_STR(_raw_spin_unlock) },
	{ 0x44a4760f, __VMLINUX_SYMBOL_STR(usb_altnum_to_altsetting) },
	{ 0x9b7fc3b2, __VMLINUX_SYMBOL_STR(usbnet_resume) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0x95ac56ad, __VMLINUX_SYMBOL_STR(hrtimer_active) },
	{ 0x1aecf4e2, __VMLINUX_SYMBOL_STR(usbnet_probe) },
	{ 0xa3d5f084, __VMLINUX_SYMBOL_STR(usbnet_link_change) },
	{ 0xe5785f57, __VMLINUX_SYMBOL_STR(hrtimer_cancel) },
	{ 0x5680a6fe, __VMLINUX_SYMBOL_STR(usbnet_disconnect) },
	{ 0xa1d55e90, __VMLINUX_SYMBOL_STR(_raw_spin_lock_bh) },
	{ 0xf7802486, __VMLINUX_SYMBOL_STR(__aeabi_uidivmod) },
	{ 0x2a3aa678, __VMLINUX_SYMBOL_STR(_test_and_clear_bit) },
	{ 0x67e6b9b8, __VMLINUX_SYMBOL_STR(__dev_kfree_skb_any) },
	{ 0x8fa33819, __VMLINUX_SYMBOL_STR(usbnet_stop) },
	{ 0x57292f72, __VMLINUX_SYMBOL_STR(usbnet_update_max_qlen) },
	{ 0xa4e4c8d3, __VMLINUX_SYMBOL_STR(param_ops_bool) },
	{ 0x91715312, __VMLINUX_SYMBOL_STR(sprintf) },
	{ 0xf9df5631, __VMLINUX_SYMBOL_STR(__netdev_alloc_skb) },
	{ 0xcf14cb22, __VMLINUX_SYMBOL_STR(netif_schedule_queue) },
	{ 0xfa2a45e, __VMLINUX_SYMBOL_STR(__memzero) },
	{ 0x7d486d84, __VMLINUX_SYMBOL_STR(usbnet_nway_reset) },
	{ 0xe6932195, __VMLINUX_SYMBOL_STR(hrtimer_start_range_ns) },
	{ 0x28af3523, __VMLINUX_SYMBOL_STR(usbnet_set_link_ksettings) },
	{ 0x752d5f5b, __VMLINUX_SYMBOL_STR(kstrtobool) },
	{ 0xba5b0987, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0x45d43e5b, __VMLINUX_SYMBOL_STR(usbnet_get_stats64) },
	{ 0xa96e619, __VMLINUX_SYMBOL_STR(usb_deregister) },
	{ 0x3c3fce39, __VMLINUX_SYMBOL_STR(__local_bh_enable_ip) },
	{ 0xc917e655, __VMLINUX_SYMBOL_STR(debug_smp_processor_id) },
	{ 0x2330a439, __VMLINUX_SYMBOL_STR(usb_set_interface) },
	{ 0xfaef0ed, __VMLINUX_SYMBOL_STR(__tasklet_schedule) },
	{ 0xac306d08, __VMLINUX_SYMBOL_STR(usbnet_get_link_ksettings) },
	{ 0x2e9b739b, __VMLINUX_SYMBOL_STR(usb_driver_claim_interface) },
	{ 0x5bd5d0df, __VMLINUX_SYMBOL_STR(usbnet_get_drvinfo) },
	{ 0x16305289, __VMLINUX_SYMBOL_STR(warn_slowpath_null) },
	{ 0x71279afd, __VMLINUX_SYMBOL_STR(usbnet_start_xmit) },
	{ 0x4d91a69, __VMLINUX_SYMBOL_STR(usbnet_suspend) },
	{ 0xfa68a0f7, __VMLINUX_SYMBOL_STR(usbnet_get_link) },
	{ 0x82072614, __VMLINUX_SYMBOL_STR(tasklet_kill) },
	{ 0xca90ebe0, __VMLINUX_SYMBOL_STR(usbnet_read_cmd) },
	{ 0xbd22ae2d, __VMLINUX_SYMBOL_STR(_dev_info) },
	{ 0xe162e43f, __VMLINUX_SYMBOL_STR(kmem_cache_alloc) },
	{ 0xc119d4c8, __VMLINUX_SYMBOL_STR(__alloc_skb) },
	{ 0x12a38747, __VMLINUX_SYMBOL_STR(usleep_range) },
	{ 0xdd3916ac, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_bh) },
	{ 0xe7d83e46, __VMLINUX_SYMBOL_STR(usbnet_tx_timeout) },
	{ 0x4419ea93, __VMLINUX_SYMBOL_STR(cdc_parse_cdc_header) },
	{ 0x3a6bd565, __VMLINUX_SYMBOL_STR(usbnet_get_ethernet_addr) },
	{ 0x134581bc, __VMLINUX_SYMBOL_STR(usbnet_skb_return) },
	{ 0xdb20a9af, __VMLINUX_SYMBOL_STR(usb_driver_release_interface) },
	{ 0x996bdb64, __VMLINUX_SYMBOL_STR(_kstrtoul) },
	{ 0x11e8dd2a, __VMLINUX_SYMBOL_STR(usbnet_open) },
	{ 0x2b4643ee, __VMLINUX_SYMBOL_STR(usbnet_get_msglevel) },
	{ 0x9c0bd51f, __VMLINUX_SYMBOL_STR(_raw_spin_lock) },
	{ 0xcc0253dc, __VMLINUX_SYMBOL_STR(usbnet_unlink_rx_urbs) },
	{ 0xb00f7f4d, __VMLINUX_SYMBOL_STR(eth_validate_addr) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x9d669763, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0xce58dc69, __VMLINUX_SYMBOL_STR(hrtimer_init) },
	{ 0x28b23b45, __VMLINUX_SYMBOL_STR(usb_register_driver) },
	{ 0xe0a9649c, __VMLINUX_SYMBOL_STR(dev_warn) },
	{ 0xefd6cf06, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr0) },
	{ 0x676bbc0f, __VMLINUX_SYMBOL_STR(_set_bit) },
	{ 0xac38ff3, __VMLINUX_SYMBOL_STR(usb_ifnum_to_if) },
	{ 0xca54fee, __VMLINUX_SYMBOL_STR(_test_and_set_bit) },
	{ 0xf229424a, __VMLINUX_SYMBOL_STR(preempt_count_add) },
	{ 0x49ebacbd, __VMLINUX_SYMBOL_STR(_clear_bit) },
	{ 0x3d107dd6, __VMLINUX_SYMBOL_STR(skb_put) },
	{ 0x9e5e0c75, __VMLINUX_SYMBOL_STR(eth_mac_addr) },
	{ 0x935d1f46, __VMLINUX_SYMBOL_STR(usbnet_manage_power) },
	{ 0x7f1bd6fd, __VMLINUX_SYMBOL_STR(usbnet_write_cmd) },
	{ 0x940b1b37, __VMLINUX_SYMBOL_STR(usbnet_set_msglevel) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=usbnet";

MODULE_ALIAS("usb:v0BDBp*d*dc*dsc*dp*ic02isc0Dip00in*");
MODULE_ALIAS("usb:v1BC7p0036d*dc*dsc*dp*ic02isc0Dip00in*");
MODULE_ALIAS("usb:v413Cp81BBd*dc*dsc*dp*ic02isc0Dip00in*");
MODULE_ALIAS("usb:v413Cp81BCd*dc*dsc*dp*ic02isc0Dip00in*");
MODULE_ALIAS("usb:v413Cp*d*dc*dsc*dp*ic02isc0Dip00in*");
MODULE_ALIAS("usb:v0930p*d*dc*dsc*dp*ic02isc0Dip00in*");
MODULE_ALIAS("usb:v12D1p*d*dc*dsc*dp*ic02isc0Dip00in*");
MODULE_ALIAS("usb:v1519p0443d*dc*dsc*dp*ic02isc0Dip00in*");
MODULE_ALIAS("usb:v1546p1010d*dc*dsc*dp*ic02isc0Dip00in*");
MODULE_ALIAS("usb:v*p*d*dc*dsc*dp*ic02isc0Dip00in*");

MODULE_INFO(srcversion, "495C69611B6538EA5F90C4E");
