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
	{ 0x5680a6fe, __VMLINUX_SYMBOL_STR(usbnet_disconnect) },
	{ 0x1aecf4e2, __VMLINUX_SYMBOL_STR(usbnet_probe) },
	{ 0xbbaea711, __VMLINUX_SYMBOL_STR(ethtool_op_get_link) },
	{ 0x7d486d84, __VMLINUX_SYMBOL_STR(usbnet_nway_reset) },
	{ 0x940b1b37, __VMLINUX_SYMBOL_STR(usbnet_set_msglevel) },
	{ 0x2b4643ee, __VMLINUX_SYMBOL_STR(usbnet_get_msglevel) },
	{ 0x45d43e5b, __VMLINUX_SYMBOL_STR(usbnet_get_stats64) },
	{ 0xe7d83e46, __VMLINUX_SYMBOL_STR(usbnet_tx_timeout) },
	{ 0xb00f7f4d, __VMLINUX_SYMBOL_STR(eth_validate_addr) },
	{ 0x71279afd, __VMLINUX_SYMBOL_STR(usbnet_start_xmit) },
	{ 0x8fa33819, __VMLINUX_SYMBOL_STR(usbnet_stop) },
	{ 0x11e8dd2a, __VMLINUX_SYMBOL_STR(usbnet_open) },
	{ 0xa96e619, __VMLINUX_SYMBOL_STR(usb_deregister) },
	{ 0x28b23b45, __VMLINUX_SYMBOL_STR(usb_register_driver) },
	{ 0x57292f72, __VMLINUX_SYMBOL_STR(usbnet_update_max_qlen) },
	{ 0x8f45ba8, __VMLINUX_SYMBOL_STR(usbnet_get_endpoints) },
	{ 0x9f4cc256, __VMLINUX_SYMBOL_STR(netif_carrier_on) },
	{ 0x526c3a6c, __VMLINUX_SYMBOL_STR(jiffies) },
	{ 0x7a5354e3, __VMLINUX_SYMBOL_STR(mii_nway_restart) },
	{ 0x8db39c6c, __VMLINUX_SYMBOL_STR(mii_ethtool_gset) },
	{ 0x6220b4a2, __VMLINUX_SYMBOL_STR(crc32_le) },
	{ 0xfa2a45e, __VMLINUX_SYMBOL_STR(__memzero) },
	{ 0x2993f74f, __VMLINUX_SYMBOL_STR(usbnet_write_cmd_async) },
	{ 0xb0d92dc0, __VMLINUX_SYMBOL_STR(netdev_info) },
	{ 0x4d91a69, __VMLINUX_SYMBOL_STR(usbnet_suspend) },
	{ 0x9b7fc3b2, __VMLINUX_SYMBOL_STR(usbnet_resume) },
	{ 0xf9a482f9, __VMLINUX_SYMBOL_STR(msleep) },
	{ 0x8e865d3c, __VMLINUX_SYMBOL_STR(arm_delay_ops) },
	{ 0xa3d5f084, __VMLINUX_SYMBOL_STR(usbnet_link_change) },
	{ 0x7f1bd6fd, __VMLINUX_SYMBOL_STR(usbnet_write_cmd) },
	{ 0x5a9e8069, __VMLINUX_SYMBOL_STR(usbnet_write_cmd_nopm) },
	{ 0x9d669763, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x12da5bb2, __VMLINUX_SYMBOL_STR(__kmalloc) },
	{ 0xc8fb8e71, __VMLINUX_SYMBOL_STR(netdev_warn) },
	{ 0xca90ebe0, __VMLINUX_SYMBOL_STR(usbnet_read_cmd) },
	{ 0xd19fe5ef, __VMLINUX_SYMBOL_STR(usbnet_read_cmd_nopm) },
	{ 0xaf095b6d, __VMLINUX_SYMBOL_STR(generic_mii_ioctl) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0x4a9ee170, __VMLINUX_SYMBOL_STR(mii_ethtool_get_link_ksettings) },
	{ 0x6f85ad46, __VMLINUX_SYMBOL_STR(mii_ethtool_set_link_ksettings) },
	{ 0xb3a078ee, __VMLINUX_SYMBOL_STR(skb_pull) },
	{ 0x134581bc, __VMLINUX_SYMBOL_STR(usbnet_skb_return) },
	{ 0xdc9b716f, __VMLINUX_SYMBOL_STR(skb_clone) },
	{ 0x2046519f, __VMLINUX_SYMBOL_STR(skb_trim) },
	{ 0x67e6b9b8, __VMLINUX_SYMBOL_STR(__dev_kfree_skb_any) },
	{ 0x1b1bcf02, __VMLINUX_SYMBOL_STR(skb_push) },
	{ 0xa8e9973, __VMLINUX_SYMBOL_STR(pskb_expand_head) },
	{ 0xf7802486, __VMLINUX_SYMBOL_STR(__aeabi_uidivmod) },
	{ 0xefd6cf06, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr0) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=usbnet";

MODULE_ALIAS("usb:v0B95p1790d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0B95p178Ad*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v04B4p3610d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2001p4A00d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0DF6p0072d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v04E8pA100d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v17EFp304Bd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v050Dp0128d*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "57686D0A2E07FBAC12B2A17");
