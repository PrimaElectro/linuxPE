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
	{ 0xb077e70a, __VMLINUX_SYMBOL_STR(clk_unprepare) },
	{ 0xd31ccb06, __VMLINUX_SYMBOL_STR(of_machine_is_compatible) },
	{ 0x9bb7af9a, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0x815588a6, __VMLINUX_SYMBOL_STR(clk_enable) },
	{ 0x85ba2109, __VMLINUX_SYMBOL_STR(of_platform_populate) },
	{ 0xf46411d2, __VMLINUX_SYMBOL_STR(generic_file_llseek) },
	{ 0x424578fd, __VMLINUX_SYMBOL_STR(debugfs_create_dir) },
	{ 0x6bdb4638, __VMLINUX_SYMBOL_STR(irq_of_parse_and_map) },
	{ 0xb8265240, __VMLINUX_SYMBOL_STR(arm_dma_ops) },
	{ 0xb6e6d99d, __VMLINUX_SYMBOL_STR(clk_disable) },
	{ 0xeed3f1c8, __VMLINUX_SYMBOL_STR(of_device_is_compatible) },
	{ 0x6fd07c11, __VMLINUX_SYMBOL_STR(debugfs_create_file) },
	{ 0x304dde82, __VMLINUX_SYMBOL_STR(debugfs_remove_recursive) },
	{ 0xc931aba0, __VMLINUX_SYMBOL_STR(__platform_driver_register) },
	{ 0x336b140d, __VMLINUX_SYMBOL_STR(simple_attr_read) },
	{ 0x7d395a7f, __VMLINUX_SYMBOL_STR(soc_device_match) },
	{ 0xfa2a45e, __VMLINUX_SYMBOL_STR(__memzero) },
	{ 0xba5b0987, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0xeacb1669, __VMLINUX_SYMBOL_STR(of_iomap) },
	{ 0xb638efcb, __VMLINUX_SYMBOL_STR(simple_attr_release) },
	{ 0xbd22ae2d, __VMLINUX_SYMBOL_STR(_dev_info) },
	{ 0xe162e43f, __VMLINUX_SYMBOL_STR(kmem_cache_alloc) },
	{ 0x7c9a7371, __VMLINUX_SYMBOL_STR(clk_prepare) },
	{ 0x8ae9cdc1, __VMLINUX_SYMBOL_STR(of_find_compatible_node) },
	{ 0x940963a0, __VMLINUX_SYMBOL_STR(devm_clk_get) },
	{ 0x61d00a36, __VMLINUX_SYMBOL_STR(of_platform_depopulate) },
	{ 0xdea1728a, __VMLINUX_SYMBOL_STR(of_get_next_available_child) },
	{ 0x822137e2, __VMLINUX_SYMBOL_STR(arm_heavy_mb) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0xe9f3e7f, __VMLINUX_SYMBOL_STR(debugfs_create_blob) },
	{ 0xedc03953, __VMLINUX_SYMBOL_STR(iounmap) },
	{ 0xefd6cf06, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr0) },
	{ 0xcc9c4391, __VMLINUX_SYMBOL_STR(platform_driver_unregister) },
	{ 0x85458dba, __VMLINUX_SYMBOL_STR(of_property_read_variable_u32_array) },
	{ 0xd3bc50d7, __VMLINUX_SYMBOL_STR(devm_kmalloc) },
	{ 0x365169f2, __VMLINUX_SYMBOL_STR(simple_attr_open) },
	{ 0xcd91ce81, __VMLINUX_SYMBOL_STR(simple_attr_write) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

MODULE_ALIAS("of:N*T*Cfsl,sec-v4.0");
MODULE_ALIAS("of:N*T*Cfsl,sec-v4.0C*");
MODULE_ALIAS("of:N*T*Cfsl,sec4.0");
MODULE_ALIAS("of:N*T*Cfsl,sec4.0C*");

MODULE_INFO(srcversion, "2D0C77CFDA5C98021679364");
