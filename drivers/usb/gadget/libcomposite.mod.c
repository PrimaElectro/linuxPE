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
	{ 0x402b8281, __VMLINUX_SYMBOL_STR(__request_module) },
	{ 0x6f10a265, __VMLINUX_SYMBOL_STR(device_remove_file) },
	{ 0x9bb7af9a, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0x12da5bb2, __VMLINUX_SYMBOL_STR(__kmalloc) },
	{ 0xa675804c, __VMLINUX_SYMBOL_STR(utf8s_to_utf16s) },
	{ 0x5fc56a46, __VMLINUX_SYMBOL_STR(_raw_spin_unlock) },
	{ 0x349cba85, __VMLINUX_SYMBOL_STR(strchr) },
	{ 0x381deea3, __VMLINUX_SYMBOL_STR(usb_gadget_deactivate) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0x97255bdf, __VMLINUX_SYMBOL_STR(strlen) },
	{ 0x92215052, __VMLINUX_SYMBOL_STR(usb_ep_queue) },
	{ 0xcae232b, __VMLINUX_SYMBOL_STR(utf16s_to_utf8s) },
	{ 0x20000329, __VMLINUX_SYMBOL_STR(simple_strtoul) },
	{ 0xe2fae716, __VMLINUX_SYMBOL_STR(kmemdup) },
	{ 0x20e67e31, __VMLINUX_SYMBOL_STR(config_item_put) },
	{ 0xe546f68, __VMLINUX_SYMBOL_STR(config_item_init_type_name) },
	{ 0xe4ca3b4f, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0xaa11e144, __VMLINUX_SYMBOL_STR(usb_gadget_unregister_driver) },
	{ 0x5063ff0f, __VMLINUX_SYMBOL_STR(usb_ep_alloc_request) },
	{ 0x91715312, __VMLINUX_SYMBOL_STR(sprintf) },
	{ 0xc499ae1e, __VMLINUX_SYMBOL_STR(kstrdup) },
	{ 0xe4f57cc5, __VMLINUX_SYMBOL_STR(usb_gadget_set_state) },
	{ 0xe2d5255a, __VMLINUX_SYMBOL_STR(strcmp) },
	{ 0x44b5ee9a, __VMLINUX_SYMBOL_STR(kasprintf) },
	{ 0xfa2a45e, __VMLINUX_SYMBOL_STR(__memzero) },
	{ 0x5f754e5a, __VMLINUX_SYMBOL_STR(memset) },
	{ 0x77ae495d, __VMLINUX_SYMBOL_STR(usb_speed_string) },
	{ 0x752d5f5b, __VMLINUX_SYMBOL_STR(kstrtobool) },
	{ 0x5a5a94a6, __VMLINUX_SYMBOL_STR(kstrtou8) },
	{ 0xba5b0987, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0x51d559d1, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_irqrestore) },
	{ 0x2aee63f4, __VMLINUX_SYMBOL_STR(__mutex_init) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x16305289, __VMLINUX_SYMBOL_STR(warn_slowpath_null) },
	{ 0xfd16e532, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0x46c5136f, __VMLINUX_SYMBOL_STR(usb_gadget_activate) },
	{ 0x6f7e5fac, __VMLINUX_SYMBOL_STR(config_group_init_type_name) },
	{ 0x3fbf4072, __VMLINUX_SYMBOL_STR(init_uts_ns) },
	{ 0xd7cec8f7, __VMLINUX_SYMBOL_STR(configfs_register_subsystem) },
	{ 0x8c4d520f, __VMLINUX_SYMBOL_STR(device_create_file) },
	{ 0x41df1ae6, __VMLINUX_SYMBOL_STR(usb_ep_dequeue) },
	{ 0xccfd3c8c, __VMLINUX_SYMBOL_STR(module_put) },
	{ 0x5a37c6af, __VMLINUX_SYMBOL_STR(config_item_set_name) },
	{ 0xbd22ae2d, __VMLINUX_SYMBOL_STR(_dev_info) },
	{ 0xe162e43f, __VMLINUX_SYMBOL_STR(kmem_cache_alloc) },
	{ 0x3e9cb38c, __VMLINUX_SYMBOL_STR(usb_gadget_vbus_draw) },
	{ 0x5ac15bae, __VMLINUX_SYMBOL_STR(kstrtou16) },
	{ 0xc08da5eb, __VMLINUX_SYMBOL_STR(usb_gadget_set_selfpowered) },
	{ 0xf6cbded4, __VMLINUX_SYMBOL_STR(configfs_unregister_subsystem) },
	{ 0xe4709b37, __VMLINUX_SYMBOL_STR(usb_ep_free_request) },
	{ 0x9c0bd51f, __VMLINUX_SYMBOL_STR(_raw_spin_lock) },
	{ 0x598542b2, __VMLINUX_SYMBOL_STR(_raw_spin_lock_irqsave) },
	{ 0xce0c879d, __VMLINUX_SYMBOL_STR(usb_gadget_ep_match_desc) },
	{ 0x1e047854, __VMLINUX_SYMBOL_STR(warn_slowpath_fmt) },
	{ 0x56e3743, __VMLINUX_SYMBOL_STR(usb_gadget_probe_driver) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x9d669763, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0xe0a9649c, __VMLINUX_SYMBOL_STR(dev_warn) },
	{ 0xefd6cf06, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr0) },
	{ 0x676bbc0f, __VMLINUX_SYMBOL_STR(_set_bit) },
	{ 0xb81960ca, __VMLINUX_SYMBOL_STR(snprintf) },
	{ 0x591aad44, __VMLINUX_SYMBOL_STR(config_group_init) },
	{ 0x7148530e, __VMLINUX_SYMBOL_STR(try_module_get) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=configfs";


MODULE_INFO(srcversion, "E9A4AE9781D9791D4A5781B");
