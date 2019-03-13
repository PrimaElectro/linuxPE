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
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0xbef171bf, __VMLINUX_SYMBOL_STR(unregister_pernet_subsys) },
	{ 0x72d9aa06, __VMLINUX_SYMBOL_STR(init_net) },
	{ 0xa9fc32f8, __VMLINUX_SYMBOL_STR(register_pernet_subsys) },
	{ 0x224d6651, __VMLINUX_SYMBOL_STR(xt_hook_ops_alloc) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0xd96fe330, __VMLINUX_SYMBOL_STR(ipt_register_table) },
	{ 0x723292aa, __VMLINUX_SYMBOL_STR(ipt_alloc_initial_table) },
	{ 0x46f60eec, __VMLINUX_SYMBOL_STR(ip_route_me_harder) },
	{ 0xc3affb3b, __VMLINUX_SYMBOL_STR(ipt_do_table) },
	{ 0xefd6cf06, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr0) },
	{ 0x135f84dc, __VMLINUX_SYMBOL_STR(ipt_unregister_table) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=x_tables,ip_tables";


MODULE_INFO(srcversion, "D17E940FCB4AF4B312BB160");
