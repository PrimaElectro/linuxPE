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
	{ 0xfec67710, __VMLINUX_SYMBOL_STR(crypto_alloc_skcipher) },
	{ 0x9bb7af9a, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0x12da5bb2, __VMLINUX_SYMBOL_STR(__kmalloc) },
	{ 0x405c1144, __VMLINUX_SYMBOL_STR(get_seconds) },
	{ 0xf88c3301, __VMLINUX_SYMBOL_STR(sg_init_table) },
	{ 0xc52ef5, __VMLINUX_SYMBOL_STR(g_make_token_header) },
	{ 0xff178f6, __VMLINUX_SYMBOL_STR(__aeabi_idivmod) },
	{ 0x5fc56a46, __VMLINUX_SYMBOL_STR(_raw_spin_unlock) },
	{ 0xd39a1ad2, __VMLINUX_SYMBOL_STR(crypto_alloc_shash) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0x4f7ce296, __VMLINUX_SYMBOL_STR(write_bytes_to_xdr_buf) },
	{ 0xf7802486, __VMLINUX_SYMBOL_STR(__aeabi_uidivmod) },
	{ 0xe2fae716, __VMLINUX_SYMBOL_STR(kmemdup) },
	{ 0xf54bd49b, __VMLINUX_SYMBOL_STR(lcm) },
	{ 0x361c219, __VMLINUX_SYMBOL_STR(gss_mech_register) },
	{ 0xf40b2297, __VMLINUX_SYMBOL_STR(__crypto_memneq) },
	{ 0xe03881f8, __VMLINUX_SYMBOL_STR(crypto_ahash_final) },
	{ 0xf984f8af, __VMLINUX_SYMBOL_STR(crypto_ahash_digest) },
	{ 0xf8b2ff6e, __VMLINUX_SYMBOL_STR(g_verify_token_header) },
	{ 0x63f90d9b, __VMLINUX_SYMBOL_STR(xdr_buf_subsegment) },
	{ 0xe707d823, __VMLINUX_SYMBOL_STR(__aeabi_uidiv) },
	{ 0x239cd7e9, __VMLINUX_SYMBOL_STR(kmap_atomic) },
	{ 0xfa2a45e, __VMLINUX_SYMBOL_STR(__memzero) },
	{ 0x5f754e5a, __VMLINUX_SYMBOL_STR(memset) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x71c90087, __VMLINUX_SYMBOL_STR(memcmp) },
	{ 0xf0768c03, __VMLINUX_SYMBOL_STR(crypto_shash_digest) },
	{ 0xed93f29e, __VMLINUX_SYMBOL_STR(__kunmap_atomic) },
	{ 0xa735db59, __VMLINUX_SYMBOL_STR(prandom_u32) },
	{ 0x648389d8, __VMLINUX_SYMBOL_STR(crypto_shash_setkey) },
	{ 0x2196324, __VMLINUX_SYMBOL_STR(__aeabi_idiv) },
	{ 0xe162e43f, __VMLINUX_SYMBOL_STR(kmem_cache_alloc) },
	{ 0x3888f19a, __VMLINUX_SYMBOL_STR(crypto_destroy_tfm) },
	{ 0x69417d89, __VMLINUX_SYMBOL_STR(gss_mech_unregister) },
	{ 0xec1aa6ef, __VMLINUX_SYMBOL_STR(memzero_explicit) },
	{ 0x9c0bd51f, __VMLINUX_SYMBOL_STR(_raw_spin_lock) },
	{ 0xefdd2345, __VMLINUX_SYMBOL_STR(sg_init_one) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x9d669763, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0x55d10311, __VMLINUX_SYMBOL_STR(crypto_ahash_setkey) },
	{ 0x7a4497db, __VMLINUX_SYMBOL_STR(kzfree) },
	{ 0xfde4ba33, __VMLINUX_SYMBOL_STR(read_bytes_from_xdr_buf) },
	{ 0x4a9a8473, __VMLINUX_SYMBOL_STR(xdr_process_buf) },
	{ 0xefd6cf06, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr0) },
	{ 0x99bb8806, __VMLINUX_SYMBOL_STR(memmove) },
	{ 0xb5dea7ef, __VMLINUX_SYMBOL_STR(g_token_size) },
	{ 0x8b79b1, __VMLINUX_SYMBOL_STR(xdr_buf_trim) },
	{ 0x1085fd4d, __VMLINUX_SYMBOL_STR(crypto_alloc_ahash) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "2BD0D63C2A44899A2060140");
