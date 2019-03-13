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
	{ 0x609f1c7e, __VMLINUX_SYMBOL_STR(synchronize_net) },
	{ 0xb953108c, __VMLINUX_SYMBOL_STR(release_sock) },
	{ 0x45ac4d5, __VMLINUX_SYMBOL_STR(nf_conntrack_in) },
	{ 0x5eac7fe7, __VMLINUX_SYMBOL_STR(__nf_ct_refresh_acct) },
	{ 0xa7ed0aa6, __VMLINUX_SYMBOL_STR(nf_ct_l4proto_pernet_register) },
	{ 0x99bab161, __VMLINUX_SYMBOL_STR(nf_ct_zone_dflt) },
	{ 0x9fb43a90, __VMLINUX_SYMBOL_STR(nf_ct_get_tuplepr) },
	{ 0xe2fae716, __VMLINUX_SYMBOL_STR(kmemdup) },
	{ 0xe4ca3b4f, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0xfc79c343, __VMLINUX_SYMBOL_STR(nf_conntrack_set_hashsize) },
	{ 0x7cd23cd, __VMLINUX_SYMBOL_STR(nf_conntrack_l4proto_tcp4) },
	{ 0xf4fa543b, __VMLINUX_SYMBOL_STR(arm_copy_to_user) },
	{ 0x954dd44b, __VMLINUX_SYMBOL_STR(nf_ip_checksum) },
	{ 0xab594e90, __VMLINUX_SYMBOL_STR(nf_log_packet) },
	{ 0xfa2a45e, __VMLINUX_SYMBOL_STR(__memzero) },
	{ 0x5e8271d4, __VMLINUX_SYMBOL_STR(nf_ct_l4proto_unregister) },
	{ 0xbef171bf, __VMLINUX_SYMBOL_STR(unregister_pernet_subsys) },
	{ 0x1761c524, __VMLINUX_SYMBOL_STR(nf_ct_invert_tuple) },
	{ 0xccfb9b96, __VMLINUX_SYMBOL_STR(__nf_conntrack_confirm) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x24ff273, __VMLINUX_SYMBOL_STR(lock_sock_nested) },
	{ 0x5ff76bc8, __VMLINUX_SYMBOL_STR(nf_ct_l4proto_pernet_unregister) },
	{ 0xf7475001, __VMLINUX_SYMBOL_STR(nf_unregister_net_hooks) },
	{ 0xa96ef842, __VMLINUX_SYMBOL_STR(nf_ct_l4proto_register) },
	{ 0x16305289, __VMLINUX_SYMBOL_STR(warn_slowpath_null) },
	{ 0xfd16e532, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0x2469810f, __VMLINUX_SYMBOL_STR(__rcu_read_unlock) },
	{ 0x8ffe7e89, __VMLINUX_SYMBOL_STR(nf_conntrack_htable_size) },
	{ 0x72d9aa06, __VMLINUX_SYMBOL_STR(init_net) },
	{ 0x6567de38, __VMLINUX_SYMBOL_STR(nf_ct_l3proto_unregister) },
	{ 0x1859458, __VMLINUX_SYMBOL_STR(nf_register_net_hooks) },
	{ 0x6e224a7a, __VMLINUX_SYMBOL_STR(need_conntrack) },
	{ 0xfb748b4c, __VMLINUX_SYMBOL_STR(param_get_uint) },
	{ 0x1171f6e1, __VMLINUX_SYMBOL_STR(nf_unregister_sockopt) },
	{ 0xa9fc32f8, __VMLINUX_SYMBOL_STR(register_pernet_subsys) },
	{ 0x2a18c74, __VMLINUX_SYMBOL_STR(nf_conntrack_destroy) },
	{ 0x8d6d47d, __VMLINUX_SYMBOL_STR(nf_ct_seq_adjust) },
	{ 0x92cf35bd, __VMLINUX_SYMBOL_STR(nf_defrag_ipv4_enable) },
	{ 0x520dd6be, __VMLINUX_SYMBOL_STR(nf_conntrack_l4proto_udp4) },
	{ 0xefd6cf06, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr0) },
	{ 0xe0e51823, __VMLINUX_SYMBOL_STR(nf_register_sockopt) },
	{ 0x8d522714, __VMLINUX_SYMBOL_STR(__rcu_read_lock) },
	{ 0x28e8e50d, __VMLINUX_SYMBOL_STR(proc_dointvec_jiffies) },
	{ 0xc3a76bf0, __VMLINUX_SYMBOL_STR(skb_copy_bits) },
	{ 0x16d5a6e, __VMLINUX_SYMBOL_STR(nf_ct_l3proto_register) },
	{ 0xe50d5103, __VMLINUX_SYMBOL_STR(nf_conntrack_find_get) },
	{ 0xb42f449a, __VMLINUX_SYMBOL_STR(__nf_ct_l4proto_find) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=nf_conntrack,nf_defrag_ipv4";


MODULE_INFO(srcversion, "49D936B538FE7F91350085F");
