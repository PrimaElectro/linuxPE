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
	{ 0xe53be51a, __VMLINUX_SYMBOL_STR(crypto_unregister_template) },
	{ 0x3db86c96, __VMLINUX_SYMBOL_STR(crypto_register_template) },
	{ 0x7e44928a, __VMLINUX_SYMBOL_STR(aead_register_instance) },
	{ 0x5f3c2273, __VMLINUX_SYMBOL_STR(aead_exit_geniv) },
	{ 0x448e83b4, __VMLINUX_SYMBOL_STR(aead_init_geniv) },
	{ 0x2cb4f7d0, __VMLINUX_SYMBOL_STR(aead_geniv_alloc) },
	{ 0xfa2a45e, __VMLINUX_SYMBOL_STR(__memzero) },
	{ 0x91dda801, __VMLINUX_SYMBOL_STR(scatterwalk_map_and_copy) },
	{ 0xefd6cf06, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr0) },
	{ 0x79e92760, __VMLINUX_SYMBOL_STR(aead_geniv_free) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "FAADBAF6871FA37E9D9664B");
