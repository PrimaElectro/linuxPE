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
	{ 0x5f88990f, __VMLINUX_SYMBOL_STR(usb_add_config) },
	{ 0x2e16d507, __VMLINUX_SYMBOL_STR(usb_otg_descriptor_init) },
	{ 0xfb443547, __VMLINUX_SYMBOL_STR(gether_set_host_addr) },
	{ 0xc3b2034b, __VMLINUX_SYMBOL_STR(param_ops_charp) },
	{ 0x10e0b46b, __VMLINUX_SYMBOL_STR(usb_put_function_instance) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x9f6ee87a, __VMLINUX_SYMBOL_STR(usb_otg_descriptor_alloc) },
	{ 0x74b8260c, __VMLINUX_SYMBOL_STR(gether_set_qmult) },
	{ 0x1be050dd, __VMLINUX_SYMBOL_STR(usb_composite_overwrite_options) },
	{ 0xbd22ae2d, __VMLINUX_SYMBOL_STR(_dev_info) },
	{ 0xff8f747d, __VMLINUX_SYMBOL_STR(usb_composite_probe) },
	{ 0x1d197fc9, __VMLINUX_SYMBOL_STR(usb_add_function) },
	{ 0x493123ea, __VMLINUX_SYMBOL_STR(usb_put_function) },
	{ 0x29ef28c, __VMLINUX_SYMBOL_STR(gether_set_dev_addr) },
	{ 0x4e5392a0, __VMLINUX_SYMBOL_STR(usb_composite_unregister) },
	{ 0x6d53e96, __VMLINUX_SYMBOL_STR(usb_get_function) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x60a55bfc, __VMLINUX_SYMBOL_STR(usb_string_ids_tab) },
	{ 0xb5400355, __VMLINUX_SYMBOL_STR(usb_get_function_instance) },
	{ 0xefd6cf06, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr0) },
	{ 0x178e1fff, __VMLINUX_SYMBOL_STR(param_ops_ushort) },
	{ 0xd0962ef3, __VMLINUX_SYMBOL_STR(param_ops_uint) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=libcomposite,u_ether";


MODULE_INFO(srcversion, "F4764508E492C600D65F3BB");
