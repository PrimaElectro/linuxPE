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
	{ 0xc3b2034b, __VMLINUX_SYMBOL_STR(param_ops_charp) },
	{ 0x3af9e577, __VMLINUX_SYMBOL_STR(param_ops_int) },
	{ 0xd0962ef3, __VMLINUX_SYMBOL_STR(param_ops_uint) },
	{ 0x90a1004a, __VMLINUX_SYMBOL_STR(crypto_has_alg) },
	{ 0x5086ac3a, __VMLINUX_SYMBOL_STR(alg_test) },
	{ 0x40100300, __VMLINUX_SYMBOL_STR(wait_for_completion_interruptible) },
	{ 0x445c467b, __VMLINUX_SYMBOL_STR(crypto_aead_setauthsize) },
	{ 0x9ad34098, __VMLINUX_SYMBOL_STR(crypto_aead_setkey) },
	{ 0x4f16018d, __VMLINUX_SYMBOL_STR(crypto_alloc_aead) },
	{ 0xf984f8af, __VMLINUX_SYMBOL_STR(crypto_ahash_digest) },
	{ 0xe03881f8, __VMLINUX_SYMBOL_STR(crypto_ahash_final) },
	{ 0x55d10311, __VMLINUX_SYMBOL_STR(crypto_ahash_setkey) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0xe162e43f, __VMLINUX_SYMBOL_STR(kmem_cache_alloc) },
	{ 0x9bb7af9a, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0x1085fd4d, __VMLINUX_SYMBOL_STR(crypto_alloc_ahash) },
	{ 0x2196324, __VMLINUX_SYMBOL_STR(__aeabi_idiv) },
	{ 0xe707d823, __VMLINUX_SYMBOL_STR(__aeabi_uidiv) },
	{ 0x7a4497db, __VMLINUX_SYMBOL_STR(kzfree) },
	{ 0x3888f19a, __VMLINUX_SYMBOL_STR(crypto_destroy_tfm) },
	{ 0xf76b0a59, __VMLINUX_SYMBOL_STR(read_current_timer) },
	{ 0xa8344bad, __VMLINUX_SYMBOL_STR(wait_for_completion) },
	{ 0x526c3a6c, __VMLINUX_SYMBOL_STR(jiffies) },
	{ 0x5f754e5a, __VMLINUX_SYMBOL_STR(memset) },
	{ 0x12da5bb2, __VMLINUX_SYMBOL_STR(__kmalloc) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0xfec67710, __VMLINUX_SYMBOL_STR(crypto_alloc_skcipher) },
	{ 0x93de854a, __VMLINUX_SYMBOL_STR(__init_waitqueue_head) },
	{ 0x4c799001, __VMLINUX_SYMBOL_STR(mem_map) },
	{ 0xf88c3301, __VMLINUX_SYMBOL_STR(sg_init_table) },
	{ 0x689e06e, __VMLINUX_SYMBOL_STR(complete) },
	{ 0xefd6cf06, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr0) },
	{ 0x4302d0eb, __VMLINUX_SYMBOL_STR(free_pages) },
	{ 0x93fca811, __VMLINUX_SYMBOL_STR(__get_free_pages) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "4C56C0497FF8D753A670AB1");
