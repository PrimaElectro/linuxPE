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
	{ 0x937d844a, __VMLINUX_SYMBOL_STR(crypto_register_aead) },
	{ 0xeff79846, __VMLINUX_SYMBOL_STR(crypto_register_alg) },
	{ 0x87603b12, __VMLINUX_SYMBOL_STR(crypto_ablkcipher_type) },
	{ 0x548ff470, __VMLINUX_SYMBOL_STR(crypto_givcipher_type) },
	{ 0xb81960ca, __VMLINUX_SYMBOL_STR(snprintf) },
	{ 0xe162e43f, __VMLINUX_SYMBOL_STR(kmem_cache_alloc) },
	{ 0x9bb7af9a, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0x708b296d, __VMLINUX_SYMBOL_STR(of_find_device_by_node) },
	{ 0x8ae9cdc1, __VMLINUX_SYMBOL_STR(of_find_compatible_node) },
	{ 0xea7db933, __VMLINUX_SYMBOL_STR(crypto_unregister_alg) },
	{ 0xbc1f8485, __VMLINUX_SYMBOL_STR(crypto_unregister_aead) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x2308fd0b, __VMLINUX_SYMBOL_STR(caam_jr_alloc) },
	{ 0x86af7344, __VMLINUX_SYMBOL_STR(caam_jr_free) },
	{ 0xc3d35901, __VMLINUX_SYMBOL_STR(cnstr_shdsc_ablkcipher_givencap) },
	{ 0xd18444d6, __VMLINUX_SYMBOL_STR(cnstr_shdsc_ablkcipher_decap) },
	{ 0xb9f616db, __VMLINUX_SYMBOL_STR(cnstr_shdsc_ablkcipher_encap) },
	{ 0x1e6d26a8, __VMLINUX_SYMBOL_STR(strstr) },
	{ 0x91dda801, __VMLINUX_SYMBOL_STR(scatterwalk_map_and_copy) },
	{ 0xb5d10872, __VMLINUX_SYMBOL_STR(cnstr_shdsc_xts_ablkcipher_decap) },
	{ 0xa87d8088, __VMLINUX_SYMBOL_STR(cnstr_shdsc_xts_ablkcipher_encap) },
	{ 0x67a31e6f, __VMLINUX_SYMBOL_STR(cnstr_shdsc_rfc4106_decap) },
	{ 0xe34483b1, __VMLINUX_SYMBOL_STR(cnstr_shdsc_rfc4106_encap) },
	{ 0x67f035bb, __VMLINUX_SYMBOL_STR(cnstr_shdsc_rfc4543_decap) },
	{ 0xe317a865, __VMLINUX_SYMBOL_STR(cnstr_shdsc_rfc4543_encap) },
	{ 0xdff429ca, __VMLINUX_SYMBOL_STR(cnstr_shdsc_gcm_decap) },
	{ 0x5b13b414, __VMLINUX_SYMBOL_STR(cnstr_shdsc_gcm_encap) },
	{ 0x95fdd3b6, __VMLINUX_SYMBOL_STR(gen_split_key) },
	{ 0x587ef278, __VMLINUX_SYMBOL_STR(crypto_authenc_extractkeys) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0xd13c8d45, __VMLINUX_SYMBOL_STR(cnstr_shdsc_aead_null_decap) },
	{ 0x55db109b, __VMLINUX_SYMBOL_STR(cnstr_shdsc_aead_null_encap) },
	{ 0x1c20d226, __VMLINUX_SYMBOL_STR(cnstr_shdsc_aead_givencap) },
	{ 0x365ce96e, __VMLINUX_SYMBOL_STR(cnstr_shdsc_aead_decap) },
	{ 0x6969762b, __VMLINUX_SYMBOL_STR(cnstr_shdsc_aead_encap) },
	{ 0xacdef934, __VMLINUX_SYMBOL_STR(caam_jr_enqueue) },
	{ 0x9d669763, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0xba5b0987, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0x4c799001, __VMLINUX_SYMBOL_STR(mem_map) },
	{ 0xd5152710, __VMLINUX_SYMBOL_STR(sg_next) },
	{ 0xbd67c092, __VMLINUX_SYMBOL_STR(caam_imx) },
	{ 0x37734e06, __VMLINUX_SYMBOL_STR(caam_dpaa2) },
	{ 0x12da5bb2, __VMLINUX_SYMBOL_STR(__kmalloc) },
	{ 0xef813311, __VMLINUX_SYMBOL_STR(sg_nents_for_len) },
	{ 0xa51f16c7, __VMLINUX_SYMBOL_STR(caam_little_end) },
	{ 0x411c91ea, __VMLINUX_SYMBOL_STR(caam_dump_sg) },
	{ 0xe82a6996, __VMLINUX_SYMBOL_STR(caam_jr_strstatus) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0xefd6cf06, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr0) },
	{ 0xb8265240, __VMLINUX_SYMBOL_STR(arm_dma_ops) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=caam_jr,caamalg_desc,authenc,caam";


MODULE_INFO(srcversion, "CAAA019FF10D50B9F21079A");
