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
	{ 0x12da5bb2, __VMLINUX_SYMBOL_STR(__kmalloc) },
	{ 0x9a11a0fc, __VMLINUX_SYMBOL_STR(crypto_attr_alg_name) },
	{ 0x41f99bea, __VMLINUX_SYMBOL_STR(crypto_grab_skcipher) },
	{ 0x3755f990, __VMLINUX_SYMBOL_STR(gf128mul_init_64k_bbe) },
	{ 0xe53be51a, __VMLINUX_SYMBOL_STR(crypto_unregister_template) },
	{ 0xd5152710, __VMLINUX_SYMBOL_STR(sg_next) },
	{ 0x5e373fb4, __VMLINUX_SYMBOL_STR(gf128mul_64k_bbe) },
	{ 0xf3ab2701, __VMLINUX_SYMBOL_STR(skcipher_register_instance) },
	{ 0x9030a0d9, __VMLINUX_SYMBOL_STR(crypto_inst_setname) },
	{ 0x93e3751b, __VMLINUX_SYMBOL_STR(skcipher_walk_done) },
	{ 0xd60736ec, __VMLINUX_SYMBOL_STR(gf128mul_free_64k) },
	{ 0x3db86c96, __VMLINUX_SYMBOL_STR(crypto_register_template) },
	{ 0x84b183ae, __VMLINUX_SYMBOL_STR(strncmp) },
	{ 0x73e20c1c, __VMLINUX_SYMBOL_STR(strlcpy) },
	{ 0xad1e6b3d, __VMLINUX_SYMBOL_STR(crypto_drop_spawn) },
	{ 0x39dddefe, __VMLINUX_SYMBOL_STR(skcipher_walk_virt) },
	{ 0x124f2056, __VMLINUX_SYMBOL_STR(crypto_get_attr_type) },
	{ 0xe162e43f, __VMLINUX_SYMBOL_STR(kmem_cache_alloc) },
	{ 0x3888f19a, __VMLINUX_SYMBOL_STR(crypto_destroy_tfm) },
	{ 0xcaf87157, __VMLINUX_SYMBOL_STR(crypto_spawn_tfm2) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x7a4497db, __VMLINUX_SYMBOL_STR(kzfree) },
	{ 0x4fdd1f86, __VMLINUX_SYMBOL_STR(blkcipher_walk_virt) },
	{ 0xefd6cf06, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr0) },
	{ 0xb81960ca, __VMLINUX_SYMBOL_STR(snprintf) },
	{ 0x3e1619ad, __VMLINUX_SYMBOL_STR(blkcipher_walk_done) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "62A4E50C199A13D5731E626");
