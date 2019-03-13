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
	{ 0x31539f44, __VMLINUX_SYMBOL_STR(netlink_kernel_release) },
	{ 0xf1e9ccfd, __VMLINUX_SYMBOL_STR(__netlink_kernel_create) },
	{ 0x72d9aa06, __VMLINUX_SYMBOL_STR(init_net) },
	{ 0x5f754e5a, __VMLINUX_SYMBOL_STR(memset) },
	{ 0x85ded073, __VMLINUX_SYMBOL_STR(nla_parse) },
	{ 0x5adc085a, __VMLINUX_SYMBOL_STR(__netlink_dump_start) },
	{ 0xa907de5, __VMLINUX_SYMBOL_STR(crypto_alg_mod_lookup) },
	{ 0x54aceb4a, __VMLINUX_SYMBOL_STR(crypto_unregister_instance) },
	{ 0x3de9cae1, __VMLINUX_SYMBOL_STR(crypto_remove_final) },
	{ 0xd6008872, __VMLINUX_SYMBOL_STR(up_write) },
	{ 0x5ab2b514, __VMLINUX_SYMBOL_STR(crypto_remove_spawns) },
	{ 0x1c14057c, __VMLINUX_SYMBOL_STR(down_write) },
	{ 0x27250730, __VMLINUX_SYMBOL_STR(netlink_unicast) },
	{ 0xef97e545, __VMLINUX_SYMBOL_STR(crypto_mod_put) },
	{ 0xc119d4c8, __VMLINUX_SYMBOL_STR(__alloc_skb) },
	{ 0xd9ce8f0c, __VMLINUX_SYMBOL_STR(strnlen) },
	{ 0x82765831, __VMLINUX_SYMBOL_STR(up_read) },
	{ 0x40295342, __VMLINUX_SYMBOL_STR(crypto_mod_get) },
	{ 0xe2d5255a, __VMLINUX_SYMBOL_STR(strcmp) },
	{ 0x2c39dcc0, __VMLINUX_SYMBOL_STR(down_read) },
	{ 0xe0523e54, __VMLINUX_SYMBOL_STR(crypto_alg_sem) },
	{ 0x457594fa, __VMLINUX_SYMBOL_STR(crypto_alg_list) },
	{ 0x2046519f, __VMLINUX_SYMBOL_STR(skb_trim) },
	{ 0x16305289, __VMLINUX_SYMBOL_STR(warn_slowpath_null) },
	{ 0x3eeba61b, __VMLINUX_SYMBOL_STR(__nlmsg_put) },
	{ 0x9cd838e4, __VMLINUX_SYMBOL_STR(nla_put) },
	{ 0x328a05f1, __VMLINUX_SYMBOL_STR(strncpy) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0x5bd0748f, __VMLINUX_SYMBOL_STR(crypto_del_default_rng) },
	{ 0x6f3bb006, __VMLINUX_SYMBOL_STR(netlink_capable) },
	{ 0xe4ca3b4f, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0x2b3bc92f, __VMLINUX_SYMBOL_STR(netlink_rcv_skb) },
	{ 0xfd16e532, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0xefd6cf06, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr0) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "98B947E4A0E75FD85DA5F7B");
