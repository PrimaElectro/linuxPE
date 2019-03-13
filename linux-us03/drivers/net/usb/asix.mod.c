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
	{ 0x8db39c6c, __VMLINUX_SYMBOL_STR(mii_ethtool_gset) },
	{ 0x12da5bb2, __VMLINUX_SYMBOL_STR(__kmalloc) },
	{ 0xf9a482f9, __VMLINUX_SYMBOL_STR(msleep) },
	{ 0xfbb497a6, __VMLINUX_SYMBOL_STR(phy_disconnect) },
	{ 0x9b7fc3b2, __VMLINUX_SYMBOL_STR(usbnet_resume) },
	{ 0x7c811034, __VMLINUX_SYMBOL_STR(phy_stop) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0x1aecf4e2, __VMLINUX_SYMBOL_STR(usbnet_probe) },
	{ 0x79aa04a2, __VMLINUX_SYMBOL_STR(get_random_bytes) },
	{ 0xa3d5f084, __VMLINUX_SYMBOL_STR(usbnet_link_change) },
	{ 0x7a2fd9da, __VMLINUX_SYMBOL_STR(__mdiobus_register) },
	{ 0x3458d0db, __VMLINUX_SYMBOL_STR(phy_ethtool_nway_reset) },
	{ 0x5680a6fe, __VMLINUX_SYMBOL_STR(usbnet_disconnect) },
	{ 0xf7802486, __VMLINUX_SYMBOL_STR(__aeabi_uidivmod) },
	{ 0xaf095b6d, __VMLINUX_SYMBOL_STR(generic_mii_ioctl) },
	{ 0x67e6b9b8, __VMLINUX_SYMBOL_STR(__dev_kfree_skb_any) },
	{ 0x8fa33819, __VMLINUX_SYMBOL_STR(usbnet_stop) },
	{ 0x57292f72, __VMLINUX_SYMBOL_STR(usbnet_update_max_qlen) },
	{ 0xe4ca3b4f, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0x27d1b1a4, __VMLINUX_SYMBOL_STR(mdiobus_unregister) },
	{ 0xf9df5631, __VMLINUX_SYMBOL_STR(__netdev_alloc_skb) },
	{ 0xb530e62a, __VMLINUX_SYMBOL_STR(phy_print_status) },
	{ 0xfa2a45e, __VMLINUX_SYMBOL_STR(__memzero) },
	{ 0x7d486d84, __VMLINUX_SYMBOL_STR(usbnet_nway_reset) },
	{ 0x28af3523, __VMLINUX_SYMBOL_STR(usbnet_set_link_ksettings) },
	{ 0x5f9be40a, __VMLINUX_SYMBOL_STR(phy_start) },
	{ 0x7a5354e3, __VMLINUX_SYMBOL_STR(mii_nway_restart) },
	{ 0x45d43e5b, __VMLINUX_SYMBOL_STR(usbnet_get_stats64) },
	{ 0xa96e619, __VMLINUX_SYMBOL_STR(usb_deregister) },
	{ 0x477d625a, __VMLINUX_SYMBOL_STR(mdiobus_free) },
	{ 0x8f45ba8, __VMLINUX_SYMBOL_STR(usbnet_get_endpoints) },
	{ 0xac306d08, __VMLINUX_SYMBOL_STR(usbnet_get_link_ksettings) },
	{ 0x73e20c1c, __VMLINUX_SYMBOL_STR(strlcpy) },
	{ 0x5bd5d0df, __VMLINUX_SYMBOL_STR(usbnet_get_drvinfo) },
	{ 0x1b1bcf02, __VMLINUX_SYMBOL_STR(skb_push) },
	{ 0xd19fe5ef, __VMLINUX_SYMBOL_STR(usbnet_read_cmd_nopm) },
	{ 0xfd16e532, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0x6220b4a2, __VMLINUX_SYMBOL_STR(crc32_le) },
	{ 0x71279afd, __VMLINUX_SYMBOL_STR(usbnet_start_xmit) },
	{ 0x4d91a69, __VMLINUX_SYMBOL_STR(usbnet_suspend) },
	{ 0x8e865d3c, __VMLINUX_SYMBOL_STR(arm_delay_ops) },
	{ 0xfa68a0f7, __VMLINUX_SYMBOL_STR(usbnet_get_link) },
	{ 0x5a9e8069, __VMLINUX_SYMBOL_STR(usbnet_write_cmd_nopm) },
	{ 0x9ea9b18f, __VMLINUX_SYMBOL_STR(phy_ethtool_get_link_ksettings) },
	{ 0xbc3408f8, __VMLINUX_SYMBOL_STR(skb_copy_expand) },
	{ 0xca90ebe0, __VMLINUX_SYMBOL_STR(usbnet_read_cmd) },
	{ 0xe162e43f, __VMLINUX_SYMBOL_STR(kmem_cache_alloc) },
	{ 0x12a38747, __VMLINUX_SYMBOL_STR(usleep_range) },
	{ 0xe7d83e46, __VMLINUX_SYMBOL_STR(usbnet_tx_timeout) },
	{ 0xe21f5607, __VMLINUX_SYMBOL_STR(kfree_skb) },
	{ 0x45fefb9a, __VMLINUX_SYMBOL_STR(genphy_resume) },
	{ 0x134581bc, __VMLINUX_SYMBOL_STR(usbnet_skb_return) },
	{ 0x11e8dd2a, __VMLINUX_SYMBOL_STR(usbnet_open) },
	{ 0xe2e6aba4, __VMLINUX_SYMBOL_STR(mii_check_media) },
	{ 0x2b4643ee, __VMLINUX_SYMBOL_STR(usbnet_get_msglevel) },
	{ 0x38c27d25, __VMLINUX_SYMBOL_STR(netdev_err) },
	{ 0xc8fb8e71, __VMLINUX_SYMBOL_STR(netdev_warn) },
	{ 0xcc0253dc, __VMLINUX_SYMBOL_STR(usbnet_unlink_rx_urbs) },
	{ 0xb00f7f4d, __VMLINUX_SYMBOL_STR(eth_validate_addr) },
	{ 0xd45f8ae4, __VMLINUX_SYMBOL_STR(phy_ethtool_set_link_ksettings) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x9d669763, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0x2993f74f, __VMLINUX_SYMBOL_STR(usbnet_write_cmd_async) },
	{ 0xcaa67553, __VMLINUX_SYMBOL_STR(usbnet_change_mtu) },
	{ 0x614ea8c6, __VMLINUX_SYMBOL_STR(phy_connect) },
	{ 0x28b23b45, __VMLINUX_SYMBOL_STR(usb_register_driver) },
	{ 0xefd6cf06, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr0) },
	{ 0x71a8f444, __VMLINUX_SYMBOL_STR(phy_mii_ioctl) },
	{ 0xb81960ca, __VMLINUX_SYMBOL_STR(snprintf) },
	{ 0x47c9b4d1, __VMLINUX_SYMBOL_STR(mii_link_ok) },
	{ 0x99bb8806, __VMLINUX_SYMBOL_STR(memmove) },
	{ 0x3d107dd6, __VMLINUX_SYMBOL_STR(skb_put) },
	{ 0x9e5e0c75, __VMLINUX_SYMBOL_STR(eth_mac_addr) },
	{ 0x7f1bd6fd, __VMLINUX_SYMBOL_STR(usbnet_write_cmd) },
	{ 0x940b1b37, __VMLINUX_SYMBOL_STR(usbnet_set_msglevel) },
	{ 0x9beeb852, __VMLINUX_SYMBOL_STR(mdiobus_alloc_size) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=usbnet";

MODULE_ALIAS("usb:v077Bp2226d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0846p1040d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2001p1A00d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0B95p1720d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v07B8p420Ad*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v08DDp90FFd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v08DDp0114d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0557p2009d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0411p003Dd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0411p006Ed*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v6189p182Dd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0DF6p0056d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0DF6p061Cd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v07AAp0017d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1189p0893d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1631p6200d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v04F1p3008d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v17EFp7203d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0B95p772Bd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0B95p7720d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0B95p1780d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0789p0160d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v13B1p0018d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1557p7720d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v07D1p3C05d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2001p3C05d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2001p1A02d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1737p0039d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v04BBp0930d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v050Dp5055d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v05ACp1402d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0B95p772Ad*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v14EApAB11d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0DB0pA877d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0B95p7E2Bd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0B95p172Ad*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v066Bp20F9d*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "20322562FA859ECFA5D0ADA");
