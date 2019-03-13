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
	{ 0x402b8281, __VMLINUX_SYMBOL_STR(__request_module) },
	{ 0x12da5bb2, __VMLINUX_SYMBOL_STR(__kmalloc) },
	{ 0xea619ede, __VMLINUX_SYMBOL_STR(xt_unregister_table) },
	{ 0x24c8e482, __VMLINUX_SYMBOL_STR(xt_copy_counters_from_user) },
	{ 0x40728a63, __VMLINUX_SYMBOL_STR(xt_find_revision) },
	{ 0x7aa1756e, __VMLINUX_SYMBOL_STR(kvfree) },
	{ 0xaca1bef8, __VMLINUX_SYMBOL_STR(xt_check_target) },
	{ 0xe39df849, __VMLINUX_SYMBOL_STR(xt_register_matches) },
	{ 0x9c995c69, __VMLINUX_SYMBOL_STR(xt_percpu_counter_alloc) },
	{ 0xd87ae60d, __VMLINUX_SYMBOL_STR(xt_check_entry_offsets) },
	{ 0xd8c6b578, __VMLINUX_SYMBOL_STR(xt_proto_fini) },
	{ 0xc828f90, __VMLINUX_SYMBOL_STR(xt_table_unlock) },
	{ 0x28cc25db, __VMLINUX_SYMBOL_STR(arm_copy_from_user) },
	{ 0xcb3e91cc, __VMLINUX_SYMBOL_STR(xt_counters_alloc) },
	{ 0x999e8297, __VMLINUX_SYMBOL_STR(vfree) },
	{ 0xc38259af, __VMLINUX_SYMBOL_STR(__this_cpu_preempt_check) },
	{ 0x9bb7836f, __VMLINUX_SYMBOL_STR(xt_find_table_lock) },
	{ 0x1fb2c852, __VMLINUX_SYMBOL_STR(xt_replace_table) },
	{ 0xf4fa543b, __VMLINUX_SYMBOL_STR(arm_copy_to_user) },
	{ 0xe2d5255a, __VMLINUX_SYMBOL_STR(strcmp) },
	{ 0x4e810d22, __VMLINUX_SYMBOL_STR(cpumask_next) },
	{ 0x7e9a3311, __VMLINUX_SYMBOL_STR(xt_proto_init) },
	{ 0x95e4804d, __VMLINUX_SYMBOL_STR(xt_register_table) },
	{ 0x17de3d5, __VMLINUX_SYMBOL_STR(nr_cpu_ids) },
	{ 0xe1e1a526, __VMLINUX_SYMBOL_STR(xt_target_to_user) },
	{ 0xd7f5fcd, __VMLINUX_SYMBOL_STR(xt_alloc_entry_offsets) },
	{ 0xfa2a45e, __VMLINUX_SYMBOL_STR(__memzero) },
	{ 0x5f754e5a, __VMLINUX_SYMBOL_STR(memset) },
	{ 0xb45f2d4, __VMLINUX_SYMBOL_STR(__cpu_possible_mask) },
	{ 0xbef171bf, __VMLINUX_SYMBOL_STR(unregister_pernet_subsys) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x3c3fce39, __VMLINUX_SYMBOL_STR(__local_bh_enable_ip) },
	{ 0x71c90087, __VMLINUX_SYMBOL_STR(memcmp) },
	{ 0xf7475001, __VMLINUX_SYMBOL_STR(nf_unregister_net_hooks) },
	{ 0x32b890e3, __VMLINUX_SYMBOL_STR(ns_capable) },
	{ 0xa4a0cd7a, __VMLINUX_SYMBOL_STR(xt_register_targets) },
	{ 0xc917e655, __VMLINUX_SYMBOL_STR(debug_smp_processor_id) },
	{ 0x328a05f1, __VMLINUX_SYMBOL_STR(strncpy) },
	{ 0x16305289, __VMLINUX_SYMBOL_STR(warn_slowpath_null) },
	{ 0x72d9aa06, __VMLINUX_SYMBOL_STR(init_net) },
	{ 0x807d2b2c, __VMLINUX_SYMBOL_STR(xt_recseq) },
	{ 0xc5620f19, __VMLINUX_SYMBOL_STR(xt_unregister_targets) },
	{ 0xccfd3c8c, __VMLINUX_SYMBOL_STR(module_put) },
	{ 0x40a9b349, __VMLINUX_SYMBOL_STR(vzalloc) },
	{ 0x1859458, __VMLINUX_SYMBOL_STR(nf_register_net_hooks) },
	{ 0x1171f6e1, __VMLINUX_SYMBOL_STR(nf_unregister_sockopt) },
	{ 0x3f1ef70a, __VMLINUX_SYMBOL_STR(xt_tee_enabled) },
	{ 0xf46af12d, __VMLINUX_SYMBOL_STR(xt_request_find_match) },
	{ 0xa9fc32f8, __VMLINUX_SYMBOL_STR(register_pernet_subsys) },
	{ 0x4aa04897, __VMLINUX_SYMBOL_STR(xt_unregister_matches) },
	{ 0x341dbfa3, __VMLINUX_SYMBOL_STR(__per_cpu_offset) },
	{ 0x163f3a8, __VMLINUX_SYMBOL_STR(xt_request_find_target) },
	{ 0xf6ebc03b, __VMLINUX_SYMBOL_STR(net_ratelimit) },
	{ 0x1e047854, __VMLINUX_SYMBOL_STR(warn_slowpath_fmt) },
	{ 0x70c52dc5, __VMLINUX_SYMBOL_STR(nf_skb_duplicated) },
	{ 0x9d669763, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0x84b9b90c, __VMLINUX_SYMBOL_STR(xt_check_match) },
	{ 0xfef779fa, __VMLINUX_SYMBOL_STR(xt_find_jump_offset) },
	{ 0xbfacb837, __VMLINUX_SYMBOL_STR(xt_percpu_counter_free) },
	{ 0x74c134b9, __VMLINUX_SYMBOL_STR(__sw_hweight32) },
	{ 0xefd6cf06, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr0) },
	{ 0xe0e51823, __VMLINUX_SYMBOL_STR(nf_register_sockopt) },
	{ 0x555c3243, __VMLINUX_SYMBOL_STR(xt_alloc_table_info) },
	{ 0xf229424a, __VMLINUX_SYMBOL_STR(preempt_count_add) },
	{ 0x92c0b056, __VMLINUX_SYMBOL_STR(xt_match_to_user) },
	{ 0xc3a76bf0, __VMLINUX_SYMBOL_STR(skb_copy_bits) },
	{ 0xa48b3a97, __VMLINUX_SYMBOL_STR(xt_free_table_info) },
	{ 0xe914e41e, __VMLINUX_SYMBOL_STR(strcpy) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=x_tables";


MODULE_INFO(srcversion, "86958F8784F67ECC53B8F64");
