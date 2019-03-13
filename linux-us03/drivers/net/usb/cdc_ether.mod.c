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
	{ 0x9b7fc3b2, __VMLINUX_SYMBOL_STR(usbnet_resume) },
	{ 0x1aecf4e2, __VMLINUX_SYMBOL_STR(usbnet_probe) },
	{ 0x79aa04a2, __VMLINUX_SYMBOL_STR(get_random_bytes) },
	{ 0xa3d5f084, __VMLINUX_SYMBOL_STR(usbnet_link_change) },
	{ 0x5680a6fe, __VMLINUX_SYMBOL_STR(usbnet_disconnect) },
	{ 0x2a3aa678, __VMLINUX_SYMBOL_STR(_test_and_clear_bit) },
	{ 0xbb7729f1, __VMLINUX_SYMBOL_STR(netif_carrier_off) },
	{ 0xfa2a45e, __VMLINUX_SYMBOL_STR(__memzero) },
	{ 0xa96e619, __VMLINUX_SYMBOL_STR(usb_deregister) },
	{ 0x71c90087, __VMLINUX_SYMBOL_STR(memcmp) },
	{ 0x8f45ba8, __VMLINUX_SYMBOL_STR(usbnet_get_endpoints) },
	{ 0x68cdcae4, __VMLINUX_SYMBOL_STR(usb_control_msg) },
	{ 0x2e9b739b, __VMLINUX_SYMBOL_STR(usb_driver_claim_interface) },
	{ 0x4d91a69, __VMLINUX_SYMBOL_STR(usbnet_suspend) },
	{ 0xbd22ae2d, __VMLINUX_SYMBOL_STR(_dev_info) },
	{ 0x4419ea93, __VMLINUX_SYMBOL_STR(cdc_parse_cdc_header) },
	{ 0x3a6bd565, __VMLINUX_SYMBOL_STR(usbnet_get_ethernet_addr) },
	{ 0xdb20a9af, __VMLINUX_SYMBOL_STR(usb_driver_release_interface) },
	{ 0x38c27d25, __VMLINUX_SYMBOL_STR(netdev_err) },
	{ 0x28b23b45, __VMLINUX_SYMBOL_STR(usb_register_driver) },
	{ 0xefd6cf06, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr0) },
	{ 0xac38ff3, __VMLINUX_SYMBOL_STR(usb_ifnum_to_if) },
	{ 0x676bbc0f, __VMLINUX_SYMBOL_STR(_set_bit) },
	{ 0x935d1f46, __VMLINUX_SYMBOL_STR(usbnet_manage_power) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=usbnet";

MODULE_ALIAS("usb:v04DDp8004d*dc*dsc*dp*ic02isc06ip00in*");
MODULE_ALIAS("usb:v04DDp8005d*dc*dsc*dp*ic02isc06ip00in*");
MODULE_ALIAS("usb:v04DDp8006d*dc*dsc*dp*ic02isc06ip00in*");
MODULE_ALIAS("usb:v04DDp8007d*dc*dsc*dp*ic02isc06ip00in*");
MODULE_ALIAS("usb:v04DDp9031d*dc*dsc*dp*ic02isc06ip00in*");
MODULE_ALIAS("usb:v04DDp9032d*dc*dsc*dp*ic02isc06ip00in*");
MODULE_ALIAS("usb:v04DDp9050d*dc*dsc*dp*ic02isc06ip00in*");
MODULE_ALIAS("usb:v07B4p0F02d*dc*dsc*dp*ic02isc06ip00in*");
MODULE_ALIAS("usb:v1004p61AAd*dc*dsc*dp*ic02isc06ip00in*");
MODULE_ALIAS("usb:v046DpC11Fd*dc*dsc*dp*ic02isc0Aip00in*");
MODULE_ALIAS("usb:v1410pB001d*dc*dsc*dp*ic02isc06ip00in*");
MODULE_ALIAS("usb:v1410p9010d*dc*dsc*dp*ic02isc06ip00in*");
MODULE_ALIAS("usb:v413Cp8195d*dc*dsc*dp*ic02isc06ip00in*");
MODULE_ALIAS("usb:v413Cp8196d*dc*dsc*dp*ic02isc06ip00in*");
MODULE_ALIAS("usb:v413Cp819Bd*dc*dsc*dp*ic02isc06ip00in*");
MODULE_ALIAS("usb:v1410p9011d*dc*dsc*dp*ic02isc06ip00in*");
MODULE_ALIAS("usb:v03F0p421Dd*dc*dsc*dp*ic02isc06ip00in*");
MODULE_ALIAS("usb:v16D5p650Ad*dc*dsc*dp*ic02isc06ip00in*");
MODULE_ALIAS("usb:v12D1p14ACd*dc*dsc*dp*ic*isc*ip*in01*");
MODULE_ALIAS("usb:v0BDAp8152d*dc*dsc*dp*ic02isc06ip00in*");
MODULE_ALIAS("usb:v0BDAp8153d*dc*dsc*dp*ic02isc06ip00in*");
MODULE_ALIAS("usb:v04E8pA101d*dc*dsc*dp*ic02isc06ip00in*");
MODULE_ALIAS("usb:v13B1p0041d*dc*dsc*dp*ic02isc06ip00in*");
MODULE_ALIAS("usb:v17EFp3062d*dc*dsc*dp*ic02isc06ip00in*");
MODULE_ALIAS("usb:v17EFp3069d*dc*dsc*dp*ic02isc06ip00in*");
MODULE_ALIAS("usb:v17EFp7205d*dc*dsc*dp*ic02isc06ip00in*");
MODULE_ALIAS("usb:v17EFp720Cd*dc*dsc*dp*ic02isc06ip00in*");
MODULE_ALIAS("usb:v17EFp7214d*dc*dsc*dp*ic02isc06ip00in*");
MODULE_ALIAS("usb:v0955p09FFd*dc*dsc*dp*ic02isc06ip00in*");
MODULE_ALIAS("usb:v045Ep07ABd*dc*dsc*dp*ic02isc06ip00in*");
MODULE_ALIAS("usb:v045Ep07C6d*dc*dsc*dp*ic02isc06ip00in*");
MODULE_ALIAS("usb:v2357p0601d*dc*dsc*dp*ic02isc06ip00in*");
MODULE_ALIAS("usb:v19D2p1003d*dc*dsc*dp*ic02isc06ip00in*");
MODULE_ALIAS("usb:v19D2p1015d*dc*dsc*dp*ic02isc06ip00in*");
MODULE_ALIAS("usb:v19D2p1173d*dc*dsc*dp*ic02isc06ip00in*");
MODULE_ALIAS("usb:v19D2p1177d*dc*dsc*dp*ic02isc06ip00in*");
MODULE_ALIAS("usb:v19D2p1181d*dc*dsc*dp*ic02isc06ip00in*");
MODULE_ALIAS("usb:v1BC7p*d*dc*dsc*dp*ic02isc06ip00in*");
MODULE_ALIAS("usb:v413Cp81BAd*dc*dsc*dp*ic02isc06ip00in*");
MODULE_ALIAS("usb:v12D1p15C1d*dc*dsc*dp*ic02isc06ip00in*");
MODULE_ALIAS("usb:v19D2p*d*dc*dsc*dp*ic02isc06ip00in*");
MODULE_ALIAS("usb:v1546p1143d*dc*dsc*dp*ic02isc06ip00in*");
MODULE_ALIAS("usb:v1546p1104d*dc*dsc*dp*ic02isc06ip00in*");
MODULE_ALIAS("usb:v1E2Dp0055d*dc*dsc*dp*ic02isc06ip00in*");
MODULE_ALIAS("usb:v*p*d*dc*dsc*dp*ic02isc06ip00in*");
MODULE_ALIAS("usb:v*p*d*dc*dsc*dp*ic02isc0Aip00in*");
MODULE_ALIAS("usb:v12D1p*d*dc*dsc*dp*ic02isc06ipFFin*");

MODULE_INFO(srcversion, "FA5BDDA00B758A94D13EC62");
