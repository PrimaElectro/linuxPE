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
	{ 0x8727199a, __VMLINUX_SYMBOL_STR(crypto_register_ahash) },
	{ 0x708b296d, __VMLINUX_SYMBOL_STR(of_find_device_by_node) },
	{ 0x8ae9cdc1, __VMLINUX_SYMBOL_STR(of_find_compatible_node) },
	{ 0xbd946970, __VMLINUX_SYMBOL_STR(crypto_unregister_ahash) },
	{ 0x2308fd0b, __VMLINUX_SYMBOL_STR(caam_jr_alloc) },
	{ 0x86af7344, __VMLINUX_SYMBOL_STR(caam_jr_free) },
	{ 0xa02ff4cb, __VMLINUX_SYMBOL_STR(crypto_ahash_type) },
	{ 0xb81960ca, __VMLINUX_SYMBOL_STR(snprintf) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0xe162e43f, __VMLINUX_SYMBOL_STR(kmem_cache_alloc) },
	{ 0x9bb7af9a, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0x91dda801, __VMLINUX_SYMBOL_STR(scatterwalk_map_and_copy) },
	{ 0xef813311, __VMLINUX_SYMBOL_STR(sg_nents_for_len) },
	{ 0xd5152710, __VMLINUX_SYMBOL_STR(sg_next) },
	{ 0xbd67c092, __VMLINUX_SYMBOL_STR(caam_imx) },
	{ 0x37734e06, __VMLINUX_SYMBOL_STR(caam_dpaa2) },
	{ 0xe82a6996, __VMLINUX_SYMBOL_STR(caam_jr_strstatus) },
	{ 0xfa2a45e, __VMLINUX_SYMBOL_STR(__memzero) },
	{ 0xa8344bad, __VMLINUX_SYMBOL_STR(wait_for_completion) },
	{ 0x95fdd3b6, __VMLINUX_SYMBOL_STR(gen_split_key) },
	{ 0x3cff7e41, __VMLINUX_SYMBOL_STR(split_key_done) },
	{ 0x93de854a, __VMLINUX_SYMBOL_STR(__init_waitqueue_head) },
	{ 0x9d669763, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0xacdef934, __VMLINUX_SYMBOL_STR(caam_jr_enqueue) },
	{ 0xb8265240, __VMLINUX_SYMBOL_STR(arm_dma_ops) },
	{ 0x4c799001, __VMLINUX_SYMBOL_STR(mem_map) },
	{ 0xba5b0987, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0xa51f16c7, __VMLINUX_SYMBOL_STR(caam_little_end) },
	{ 0x12da5bb2, __VMLINUX_SYMBOL_STR(__kmalloc) },
	{ 0xefd6cf06, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr0) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=caam_jr,caam";


MODULE_INFO(srcversion, "F7B8D342B0D5769DCDC8EDA");
