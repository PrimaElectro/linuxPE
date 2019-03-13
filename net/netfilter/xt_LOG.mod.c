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
	{ 0xc5620f19, __VMLINUX_SYMBOL_STR(xt_unregister_targets) },
	{ 0xa4a0cd7a, __VMLINUX_SYMBOL_STR(xt_register_targets) },
	{ 0xab594e90, __VMLINUX_SYMBOL_STR(nf_log_packet) },
	{ 0xd1f2eee2, __VMLINUX_SYMBOL_STR(nf_logger_find_get) },
	{ 0xefd6cf06, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr0) },
	{ 0xb8cd3a7f, __VMLINUX_SYMBOL_STR(nf_logger_put) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=x_tables";


MODULE_INFO(srcversion, "D63B2DA31F51B4EDCB7ADE8");
