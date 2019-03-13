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
	{ 0x73ce9aaa, __VMLINUX_SYMBOL_STR(hwrng_register) },
	{ 0xbd22ae2d, __VMLINUX_SYMBOL_STR(_dev_info) },
	{ 0x76f6c5ef, __VMLINUX_SYMBOL_STR(kmalloc_order) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x2308fd0b, __VMLINUX_SYMBOL_STR(caam_jr_alloc) },
	{ 0x708b296d, __VMLINUX_SYMBOL_STR(of_find_device_by_node) },
	{ 0x8ae9cdc1, __VMLINUX_SYMBOL_STR(of_find_compatible_node) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x5b88c3df, __VMLINUX_SYMBOL_STR(hwrng_unregister) },
	{ 0x86af7344, __VMLINUX_SYMBOL_STR(caam_jr_free) },
	{ 0xba5b0987, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0x4c799001, __VMLINUX_SYMBOL_STR(mem_map) },
	{ 0xa51f16c7, __VMLINUX_SYMBOL_STR(caam_little_end) },
	{ 0xa8344bad, __VMLINUX_SYMBOL_STR(wait_for_completion) },
	{ 0xacdef934, __VMLINUX_SYMBOL_STR(caam_jr_enqueue) },
	{ 0x93de854a, __VMLINUX_SYMBOL_STR(__init_waitqueue_head) },
	{ 0x9d669763, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0xefd6cf06, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr0) },
	{ 0xe82a6996, __VMLINUX_SYMBOL_STR(caam_jr_strstatus) },
	{ 0xb8265240, __VMLINUX_SYMBOL_STR(arm_dma_ops) },
	{ 0x689e06e, __VMLINUX_SYMBOL_STR(complete) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=caam_jr,caam";


MODULE_INFO(srcversion, "FEE87517384A96E2B8D40B4");
