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
	{ 0xf88c3301, __VMLINUX_SYMBOL_STR(sg_init_table) },
	{ 0x1424f59, __VMLINUX_SYMBOL_STR(sg_copy_to_buffer) },
	{ 0x4c799001, __VMLINUX_SYMBOL_STR(mem_map) },
	{ 0xb9176155, __VMLINUX_SYMBOL_STR(asn1_ber_decoder) },
	{ 0xbef33d1d, __VMLINUX_SYMBOL_STR(crypto_register_akcipher) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0xa8fdb89e, __VMLINUX_SYMBOL_STR(crypto_grab_akcipher) },
	{ 0x1530f058, __VMLINUX_SYMBOL_STR(sg_copy_from_buffer) },
	{ 0x9a11a0fc, __VMLINUX_SYMBOL_STR(crypto_attr_alg_name) },
	{ 0xe53be51a, __VMLINUX_SYMBOL_STR(crypto_unregister_template) },
	{ 0x80d5e57a, __VMLINUX_SYMBOL_STR(mpi_free) },
	{ 0xae7c231d, __VMLINUX_SYMBOL_STR(mpi_cmp) },
	{ 0x9bece81b, __VMLINUX_SYMBOL_STR(mpi_cmp_ui) },
	{ 0xe2d5255a, __VMLINUX_SYMBOL_STR(strcmp) },
	{ 0xf40b2297, __VMLINUX_SYMBOL_STR(__crypto_memneq) },
	{ 0x5f754e5a, __VMLINUX_SYMBOL_STR(memset) },
	{ 0x55949555, __VMLINUX_SYMBOL_STR(mpi_write_to_sgl) },
	{ 0x3db86c96, __VMLINUX_SYMBOL_STR(crypto_register_template) },
	{ 0xef813311, __VMLINUX_SYMBOL_STR(sg_nents_for_len) },
	{ 0x8cebf530, __VMLINUX_SYMBOL_STR(crypto_unregister_akcipher) },
	{ 0xa735db59, __VMLINUX_SYMBOL_STR(prandom_u32) },
	{ 0xeed16ef9, __VMLINUX_SYMBOL_STR(mpi_read_raw_from_sgl) },
	{ 0xad1e6b3d, __VMLINUX_SYMBOL_STR(crypto_drop_spawn) },
	{ 0x98503a63, __VMLINUX_SYMBOL_STR(mpi_alloc) },
	{ 0x124f2056, __VMLINUX_SYMBOL_STR(crypto_get_attr_type) },
	{ 0xe162e43f, __VMLINUX_SYMBOL_STR(kmem_cache_alloc) },
	{ 0x3888f19a, __VMLINUX_SYMBOL_STR(crypto_destroy_tfm) },
	{ 0x9fe939e1, __VMLINUX_SYMBOL_STR(mpi_powm) },
	{ 0xcaf87157, __VMLINUX_SYMBOL_STR(crypto_spawn_tfm2) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x9d669763, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0x7a4497db, __VMLINUX_SYMBOL_STR(kzfree) },
	{ 0x6945725e, __VMLINUX_SYMBOL_STR(mpi_read_raw_data) },
	{ 0xefd6cf06, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr0) },
	{ 0xb81960ca, __VMLINUX_SYMBOL_STR(snprintf) },
	{ 0x5be9df04, __VMLINUX_SYMBOL_STR(akcipher_register_instance) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=asn1_decoder,mpi";


MODULE_INFO(srcversion, "E432FCCFA4693730AE9E264");
