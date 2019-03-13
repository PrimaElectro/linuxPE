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
	{ 0x9b7fc3b2, __VMLINUX_SYMBOL_STR(usbnet_resume) },
	{ 0x4d91a69, __VMLINUX_SYMBOL_STR(usbnet_suspend) },
	{ 0x5680a6fe, __VMLINUX_SYMBOL_STR(usbnet_disconnect) },
	{ 0x1aecf4e2, __VMLINUX_SYMBOL_STR(usbnet_probe) },
	{ 0xa96e619, __VMLINUX_SYMBOL_STR(usb_deregister) },
	{ 0x28b23b45, __VMLINUX_SYMBOL_STR(usb_register_driver) },
	{ 0xefd6cf06, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr0) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=usbnet";

MODULE_ALIAS("usb:v050Dp0004d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v056Cp8100d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0525p9901d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v049Fp505Ad*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0E7Ep1001d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v8086p07D3d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1286p8001d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0525pA4A2d*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "2F553B52E4C92E18D27EEA9");
