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
	{ 0x3ce9a63d, __VMLINUX_SYMBOL_STR(usb_function_deactivate) },
	{ 0x9bb7af9a, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0xa4ca0e45, __VMLINUX_SYMBOL_STR(usb_gstrings_attach) },
	{ 0xc35149c2, __VMLINUX_SYMBOL_STR(usb_free_all_descriptors) },
	{ 0x3a4c3fd8, __VMLINUX_SYMBOL_STR(gserial_connect) },
	{ 0x91715312, __VMLINUX_SYMBOL_STR(sprintf) },
	{ 0x80479cc6, __VMLINUX_SYMBOL_STR(usb_function_unregister) },
	{ 0xb742044f, __VMLINUX_SYMBOL_STR(usb_function_activate) },
	{ 0x10e0b46b, __VMLINUX_SYMBOL_STR(usb_put_function_instance) },
	{ 0xba5b0987, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0x8ee04abd, __VMLINUX_SYMBOL_STR(usb_ep_autoconfig) },
	{ 0xe9423c00, __VMLINUX_SYMBOL_STR(gserial_disconnect) },
	{ 0x6f7e5fac, __VMLINUX_SYMBOL_STR(config_group_init_type_name) },
	{ 0x33bfdca2, __VMLINUX_SYMBOL_STR(gserial_alloc_line) },
	{ 0x5bc797be, __VMLINUX_SYMBOL_STR(usb_function_register) },
	{ 0xe162e43f, __VMLINUX_SYMBOL_STR(kmem_cache_alloc) },
	{ 0x3777435d, __VMLINUX_SYMBOL_STR(config_ep_by_speed) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0xb6652875, __VMLINUX_SYMBOL_STR(gserial_free_line) },
	{ 0x8857be69, __VMLINUX_SYMBOL_STR(usb_assign_descriptors) },
	{ 0xa9bbea7a, __VMLINUX_SYMBOL_STR(usb_interface_id) },
	{ 0xefd6cf06, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr0) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=libcomposite,u_serial,configfs";


MODULE_INFO(srcversion, "4BE677501AD70A4FF9B56AB");
