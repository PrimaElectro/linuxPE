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
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0x490e71f0, __VMLINUX_SYMBOL_STR(nf_ct_kill_acct) },
	{ 0xaaa21787, __VMLINUX_SYMBOL_STR(dst_release) },
	{ 0xf7802486, __VMLINUX_SYMBOL_STR(__aeabi_uidivmod) },
	{ 0xf6a70e73, __VMLINUX_SYMBOL_STR(nf_nat_used_tuple) },
	{ 0x2c1b3688, __VMLINUX_SYMBOL_STR(nf_nat_l4proto_register) },
	{ 0x1de20944, __VMLINUX_SYMBOL_STR(inet_proto_csum_replace4) },
	{ 0xd03c7700, __VMLINUX_SYMBOL_STR(secure_ipv4_port_ephemeral) },
	{ 0x954dd44b, __VMLINUX_SYMBOL_STR(nf_ip_checksum) },
	{ 0x4bf7d408, __VMLINUX_SYMBOL_STR(skb_checksum) },
	{ 0x16305289, __VMLINUX_SYMBOL_STR(warn_slowpath_null) },
	{ 0x46f60eec, __VMLINUX_SYMBOL_STR(ip_route_me_harder) },
	{ 0xc4ce2659, __VMLINUX_SYMBOL_STR(nf_nat_l4proto_unregister) },
	{ 0x65c72044, __VMLINUX_SYMBOL_STR(nf_nat_packet) },
	{ 0x55c1feb6, __VMLINUX_SYMBOL_STR(skb_make_writable) },
	{ 0xefd6cf06, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr0) },
	{ 0x39d58df4, __VMLINUX_SYMBOL_STR(nf_nat_l3proto_unregister) },
	{ 0xb3faf51f, __VMLINUX_SYMBOL_STR(nf_nat_l3proto_register) },
	{ 0x61b3d7d1, __VMLINUX_SYMBOL_STR(__nf_nat_l4proto_find) },
	{ 0xb72206a6, __VMLINUX_SYMBOL_STR(nf_nat_alloc_null_binding) },
	{ 0x90ff6c9f, __VMLINUX_SYMBOL_STR(nf_ct_invert_tuplepr) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=nf_conntrack,nf_nat";


MODULE_INFO(srcversion, "7F84FE5C8149F35CF3EDB23");
