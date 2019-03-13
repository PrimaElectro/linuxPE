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
	{ 0x12da5bb2, __VMLINUX_SYMBOL_STR(__kmalloc) },
	{ 0x607f18e2, __VMLINUX_SYMBOL_STR(scatterwalk_ffwd) },
	{ 0x8092de37, __VMLINUX_SYMBOL_STR(rsa_parse_pub_key) },
	{ 0x4c799001, __VMLINUX_SYMBOL_STR(mem_map) },
	{ 0xbef33d1d, __VMLINUX_SYMBOL_STR(crypto_register_akcipher) },
	{ 0xb8265240, __VMLINUX_SYMBOL_STR(arm_dma_ops) },
	{ 0xe82a6996, __VMLINUX_SYMBOL_STR(caam_jr_strstatus) },
	{ 0x2308fd0b, __VMLINUX_SYMBOL_STR(caam_jr_alloc) },
	{ 0xa51f16c7, __VMLINUX_SYMBOL_STR(caam_little_end) },
	{ 0xd5152710, __VMLINUX_SYMBOL_STR(sg_next) },
	{ 0xfa2a45e, __VMLINUX_SYMBOL_STR(__memzero) },
	{ 0x5f754e5a, __VMLINUX_SYMBOL_STR(memset) },
	{ 0xba5b0987, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0xccdea26d, __VMLINUX_SYMBOL_STR(sg_miter_start) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0xfc8d4947, __VMLINUX_SYMBOL_STR(sg_miter_stop) },
	{ 0xef813311, __VMLINUX_SYMBOL_STR(sg_nents_for_len) },
	{ 0xbe1b529d, __VMLINUX_SYMBOL_STR(rsa_parse_priv_key) },
	{ 0x8cebf530, __VMLINUX_SYMBOL_STR(crypto_unregister_akcipher) },
	{ 0x50bdba35, __VMLINUX_SYMBOL_STR(sg_miter_next) },
	{ 0xbd22ae2d, __VMLINUX_SYMBOL_STR(_dev_info) },
	{ 0xacdef934, __VMLINUX_SYMBOL_STR(caam_jr_enqueue) },
	{ 0x37734e06, __VMLINUX_SYMBOL_STR(caam_dpaa2) },
	{ 0x8ae9cdc1, __VMLINUX_SYMBOL_STR(of_find_compatible_node) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x9d669763, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0x86af7344, __VMLINUX_SYMBOL_STR(caam_jr_free) },
	{ 0x7a4497db, __VMLINUX_SYMBOL_STR(kzfree) },
	{ 0xe0a9649c, __VMLINUX_SYMBOL_STR(dev_warn) },
	{ 0xefd6cf06, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr0) },
	{ 0x708b296d, __VMLINUX_SYMBOL_STR(of_find_device_by_node) },
	{ 0xbd67c092, __VMLINUX_SYMBOL_STR(caam_imx) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=rsa_generic,caam_jr,caam";


MODULE_INFO(srcversion, "CD3852D6403DC2D550F97C6");
