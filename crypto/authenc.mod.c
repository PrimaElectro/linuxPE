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
	{ 0x9bb7af9a, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0x607f18e2, __VMLINUX_SYMBOL_STR(scatterwalk_ffwd) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0x1499850e, __VMLINUX_SYMBOL_STR(crypto_init_ahash_spawn) },
	{ 0xef97e545, __VMLINUX_SYMBOL_STR(crypto_mod_put) },
	{ 0x3b43b261, __VMLINUX_SYMBOL_STR(ahash_attr_alg) },
	{ 0x9a11a0fc, __VMLINUX_SYMBOL_STR(crypto_attr_alg_name) },
	{ 0x41f99bea, __VMLINUX_SYMBOL_STR(crypto_grab_skcipher) },
	{ 0xe53be51a, __VMLINUX_SYMBOL_STR(crypto_unregister_template) },
	{ 0xe995f44f, __VMLINUX_SYMBOL_STR(crypto_get_default_null_skcipher) },
	{ 0x91dda801, __VMLINUX_SYMBOL_STR(scatterwalk_map_and_copy) },
	{ 0x21cd536a, __VMLINUX_SYMBOL_STR(crypto_put_default_null_skcipher) },
	{ 0xf40b2297, __VMLINUX_SYMBOL_STR(__crypto_memneq) },
	{ 0xf984f8af, __VMLINUX_SYMBOL_STR(crypto_ahash_digest) },
	{ 0x3db86c96, __VMLINUX_SYMBOL_STR(crypto_register_template) },
	{ 0xad1e6b3d, __VMLINUX_SYMBOL_STR(crypto_drop_spawn) },
	{ 0x124f2056, __VMLINUX_SYMBOL_STR(crypto_get_attr_type) },
	{ 0xe162e43f, __VMLINUX_SYMBOL_STR(kmem_cache_alloc) },
	{ 0x3888f19a, __VMLINUX_SYMBOL_STR(crypto_destroy_tfm) },
	{ 0xec1aa6ef, __VMLINUX_SYMBOL_STR(memzero_explicit) },
	{ 0xcaf87157, __VMLINUX_SYMBOL_STR(crypto_spawn_tfm2) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x55d10311, __VMLINUX_SYMBOL_STR(crypto_ahash_setkey) },
	{ 0xefd6cf06, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr0) },
	{ 0xb81960ca, __VMLINUX_SYMBOL_STR(snprintf) },
	{ 0x7e44928a, __VMLINUX_SYMBOL_STR(aead_register_instance) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "F0B257147C6C1888C39EE84");
