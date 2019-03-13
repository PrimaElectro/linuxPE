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
	{ 0x208c5496, __VMLINUX_SYMBOL_STR(nf_log_unregister) },
	{ 0xbef171bf, __VMLINUX_SYMBOL_STR(unregister_pernet_subsys) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x5f908ec6, __VMLINUX_SYMBOL_STR(nf_log_register) },
	{ 0xa9fc32f8, __VMLINUX_SYMBOL_STR(register_pernet_subsys) },
	{ 0x8a85a050, __VMLINUX_SYMBOL_STR(nf_log_set) },
	{ 0x256e5933, __VMLINUX_SYMBOL_STR(nf_log_unset) },
	{ 0x80c68137, __VMLINUX_SYMBOL_STR(nf_log_buf_close) },
	{ 0x6ee1c371, __VMLINUX_SYMBOL_STR(nf_log_dump_packet_common) },
	{ 0xd4961de, __VMLINUX_SYMBOL_STR(nf_log_buf_open) },
	{ 0xefd6cf06, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr0) },
	{ 0xbbf19579, __VMLINUX_SYMBOL_STR(nf_log_dump_udp_header) },
	{ 0xcec3dfc3, __VMLINUX_SYMBOL_STR(nf_log_dump_sk_uid_gid) },
	{ 0xa318d4fd, __VMLINUX_SYMBOL_STR(nf_log_dump_tcp_header) },
	{ 0xc3a76bf0, __VMLINUX_SYMBOL_STR(skb_copy_bits) },
	{ 0x487c5d33, __VMLINUX_SYMBOL_STR(nf_log_buf_add) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=nf_log_common";


MODULE_INFO(srcversion, "0388C0311A8F6DFA5C178BA");
