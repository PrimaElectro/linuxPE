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
	{ 0xb0d92dc0, __VMLINUX_SYMBOL_STR(netdev_info) },
	{ 0x7f1bd6fd, __VMLINUX_SYMBOL_STR(usbnet_write_cmd) },
	{ 0xca90ebe0, __VMLINUX_SYMBOL_STR(usbnet_read_cmd) },
	{ 0x2046519f, __VMLINUX_SYMBOL_STR(skb_trim) },
	{ 0xb3a078ee, __VMLINUX_SYMBOL_STR(skb_pull) },
	{ 0x2993f74f, __VMLINUX_SYMBOL_STR(usbnet_write_cmd_async) },
	{ 0x8f45ba8, __VMLINUX_SYMBOL_STR(usbnet_get_endpoints) },
	{ 0xefd6cf06, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr0) },
	{ 0x99bb8806, __VMLINUX_SYMBOL_STR(memmove) },
	{ 0x3d107dd6, __VMLINUX_SYMBOL_STR(skb_put) },
	{ 0x1b1bcf02, __VMLINUX_SYMBOL_STR(skb_push) },
	{ 0x67e6b9b8, __VMLINUX_SYMBOL_STR(__dev_kfree_skb_any) },
	{ 0xbc3408f8, __VMLINUX_SYMBOL_STR(skb_copy_expand) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=usbnet";

MODULE_ALIAS("usb:v0525p1080d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v06D0p0622d*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "624E5C10BE26A3CA7A1FC3E");
