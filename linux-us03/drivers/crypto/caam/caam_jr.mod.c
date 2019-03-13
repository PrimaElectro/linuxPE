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
	{ 0x6cf6ef94, __VMLINUX_SYMBOL_STR(dma_release_from_dev_coherent) },
	{ 0x5fc56a46, __VMLINUX_SYMBOL_STR(_raw_spin_unlock) },
	{ 0x4c799001, __VMLINUX_SYMBOL_STR(mem_map) },
	{ 0x6bdb4638, __VMLINUX_SYMBOL_STR(irq_of_parse_and_map) },
	{ 0xb8265240, __VMLINUX_SYMBOL_STR(arm_dma_ops) },
	{ 0xa51f16c7, __VMLINUX_SYMBOL_STR(caam_little_end) },
	{ 0xa1d55e90, __VMLINUX_SYMBOL_STR(_raw_spin_lock_bh) },
	{ 0xc931aba0, __VMLINUX_SYMBOL_STR(__platform_driver_register) },
	{ 0xc1046f8b, __VMLINUX_SYMBOL_STR(dma_alloc_from_dev_coherent) },
	{ 0x93de854a, __VMLINUX_SYMBOL_STR(__init_waitqueue_head) },
	{ 0xa8344bad, __VMLINUX_SYMBOL_STR(wait_for_completion) },
	{ 0x706c5a65, __VMLINUX_SYMBOL_STR(preempt_count_sub) },
	{ 0xba5b0987, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0x76f6c5ef, __VMLINUX_SYMBOL_STR(kmalloc_order) },
	{ 0xeacb1669, __VMLINUX_SYMBOL_STR(of_iomap) },
	{ 0xfaef0ed, __VMLINUX_SYMBOL_STR(__tasklet_schedule) },
	{ 0x16305289, __VMLINUX_SYMBOL_STR(warn_slowpath_null) },
	{ 0x9545af6d, __VMLINUX_SYMBOL_STR(tasklet_init) },
	{ 0xd6b8e852, __VMLINUX_SYMBOL_STR(request_threaded_irq) },
	{ 0x43b0c9c3, __VMLINUX_SYMBOL_STR(preempt_schedule) },
	{ 0x82072614, __VMLINUX_SYMBOL_STR(tasklet_kill) },
	{ 0xdd3916ac, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_bh) },
	{ 0x9c0bd51f, __VMLINUX_SYMBOL_STR(_raw_spin_lock) },
	{ 0x822137e2, __VMLINUX_SYMBOL_STR(arm_heavy_mb) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0xedc03953, __VMLINUX_SYMBOL_STR(iounmap) },
	{ 0x2c7db649, __VMLINUX_SYMBOL_STR(irq_dispose_mapping) },
	{ 0xefd6cf06, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr0) },
	{ 0x689e06e, __VMLINUX_SYMBOL_STR(complete) },
	{ 0xb81960ca, __VMLINUX_SYMBOL_STR(snprintf) },
	{ 0xca54fee, __VMLINUX_SYMBOL_STR(_test_and_set_bit) },
	{ 0xcc9c4391, __VMLINUX_SYMBOL_STR(platform_driver_unregister) },
	{ 0xf229424a, __VMLINUX_SYMBOL_STR(preempt_count_add) },
	{ 0xd3bc50d7, __VMLINUX_SYMBOL_STR(devm_kmalloc) },
	{ 0xbd67c092, __VMLINUX_SYMBOL_STR(caam_imx) },
	{ 0xc1514a3b, __VMLINUX_SYMBOL_STR(free_irq) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=caam";

MODULE_ALIAS("of:N*T*Cfsl,sec-v4.0-job-ring");
MODULE_ALIAS("of:N*T*Cfsl,sec-v4.0-job-ringC*");
MODULE_ALIAS("of:N*T*Cfsl,sec4.0-job-ring");
MODULE_ALIAS("of:N*T*Cfsl,sec4.0-job-ringC*");

MODULE_INFO(srcversion, "964BA17A21B8455F2BE20AC");
