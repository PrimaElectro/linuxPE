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
	{ 0x146a134d, __VMLINUX_SYMBOL_STR(pskb_trim_rcsum_slow) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0xcdfe35a3, __VMLINUX_SYMBOL_STR(unregister_net_sysctl_table) },
	{ 0x41ad48bf, __VMLINUX_SYMBOL_STR(ip_do_fragment) },
	{ 0xa1ef4e73, __VMLINUX_SYMBOL_STR(proc_dointvec) },
	{ 0xaaa21787, __VMLINUX_SYMBOL_STR(dst_release) },
	{ 0x17c50032, __VMLINUX_SYMBOL_STR(__vlan_find_dev_deep_rcu) },
	{ 0xd2da1048, __VMLINUX_SYMBOL_STR(register_netdevice_notifier) },
	{ 0xa66de058, __VMLINUX_SYMBOL_STR(neigh_destroy) },
	{ 0x9d0d6206, __VMLINUX_SYMBOL_STR(unregister_netdevice_notifier) },
	{ 0x66f05892, __VMLINUX_SYMBOL_STR(nf_hook_slow) },
	{ 0x497e285, __VMLINUX_SYMBOL_STR(__pskb_pull_tail) },
	{ 0xfa2a45e, __VMLINUX_SYMBOL_STR(__memzero) },
	{ 0xbef171bf, __VMLINUX_SYMBOL_STR(unregister_pernet_subsys) },
	{ 0xaecc1e56, __VMLINUX_SYMBOL_STR(br_dev_queue_push_xmit) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x3c3fce39, __VMLINUX_SYMBOL_STR(__local_bh_enable_ip) },
	{ 0xf7475001, __VMLINUX_SYMBOL_STR(nf_unregister_net_hooks) },
	{ 0xc917e655, __VMLINUX_SYMBOL_STR(debug_smp_processor_id) },
	{ 0x1b1bcf02, __VMLINUX_SYMBOL_STR(skb_push) },
	{ 0x2469810f, __VMLINUX_SYMBOL_STR(__rcu_read_unlock) },
	{ 0xb3a078ee, __VMLINUX_SYMBOL_STR(skb_pull) },
	{ 0x72d9aa06, __VMLINUX_SYMBOL_STR(init_net) },
	{ 0xa12a6d3c, __VMLINUX_SYMBOL_STR(br_forward_finish) },
	{ 0x40dc7e7d, __VMLINUX_SYMBOL_STR(ip_route_input_noref) },
	{ 0xe162e43f, __VMLINUX_SYMBOL_STR(kmem_cache_alloc) },
	{ 0x1859458, __VMLINUX_SYMBOL_STR(nf_register_net_hooks) },
	{ 0xe21f5607, __VMLINUX_SYMBOL_STR(kfree_skb) },
	{ 0x6b2dc060, __VMLINUX_SYMBOL_STR(dump_stack) },
	{ 0xa9fc32f8, __VMLINUX_SYMBOL_STR(register_pernet_subsys) },
	{ 0xa8e9973, __VMLINUX_SYMBOL_STR(pskb_expand_head) },
	{ 0x341dbfa3, __VMLINUX_SYMBOL_STR(__per_cpu_offset) },
	{ 0x7fe779fd, __VMLINUX_SYMBOL_STR(skb_pull_rcsum) },
	{ 0xb5079d15, __VMLINUX_SYMBOL_STR(ip_route_output_flow) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x9d669763, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0x629bb07f, __VMLINUX_SYMBOL_STR(nf_br_ops) },
	{ 0xefd6cf06, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr0) },
	{ 0x85670f1d, __VMLINUX_SYMBOL_STR(rtnl_is_locked) },
	{ 0xc4f55441, __VMLINUX_SYMBOL_STR(br_handle_frame_finish) },
	{ 0x8d522714, __VMLINUX_SYMBOL_STR(__rcu_read_lock) },
	{ 0xf229424a, __VMLINUX_SYMBOL_STR(preempt_count_add) },
	{ 0xc593ec18, __VMLINUX_SYMBOL_STR(register_net_sysctl) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=bridge";


MODULE_INFO(srcversion, "30E6E16FE64D8C60B8D56F4");
