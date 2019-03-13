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
	{ 0xa4ca0e45, __VMLINUX_SYMBOL_STR(usb_gstrings_attach) },
	{ 0xc35149c2, __VMLINUX_SYMBOL_STR(usb_free_all_descriptors) },
	{ 0x88a577ab, __VMLINUX_SYMBOL_STR(usb_ep_disable) },
	{ 0xb9a38379, __VMLINUX_SYMBOL_STR(usb_ep_enable) },
	{ 0x97255bdf, __VMLINUX_SYMBOL_STR(strlen) },
	{ 0x384394e2, __VMLINUX_SYMBOL_STR(gether_get_qmult) },
	{ 0x92215052, __VMLINUX_SYMBOL_STR(usb_ep_queue) },
	{ 0x1266a193, __VMLINUX_SYMBOL_STR(gether_setup_name_default) },
	{ 0x9f4cc256, __VMLINUX_SYMBOL_STR(netif_carrier_on) },
	{ 0xbb7729f1, __VMLINUX_SYMBOL_STR(netif_carrier_off) },
	{ 0x67e6b9b8, __VMLINUX_SYMBOL_STR(__dev_kfree_skb_any) },
	{ 0xe4ca3b4f, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0x76099a0d, __VMLINUX_SYMBOL_STR(ida_simple_get) },
	{ 0x53e0100c, __VMLINUX_SYMBOL_STR(gether_get_ifname) },
	{ 0x5063ff0f, __VMLINUX_SYMBOL_STR(usb_ep_alloc_request) },
	{ 0x91715312, __VMLINUX_SYMBOL_STR(sprintf) },
	{ 0xa9586630, __VMLINUX_SYMBOL_STR(skb_realloc_headroom) },
	{ 0x8878cfa6, __VMLINUX_SYMBOL_STR(gether_cleanup) },
	{ 0x80479cc6, __VMLINUX_SYMBOL_STR(usb_function_unregister) },
	{ 0x2046519f, __VMLINUX_SYMBOL_STR(skb_trim) },
	{ 0xfb443547, __VMLINUX_SYMBOL_STR(gether_set_host_addr) },
	{ 0xa942639, __VMLINUX_SYMBOL_STR(gether_get_dev_addr) },
	{ 0xfa2a45e, __VMLINUX_SYMBOL_STR(__memzero) },
	{ 0xc068ca33, __VMLINUX_SYMBOL_STR(gether_connect) },
	{ 0xcb49a075, __VMLINUX_SYMBOL_STR(netif_tx_wake_queue) },
	{ 0x10e0b46b, __VMLINUX_SYMBOL_STR(usb_put_function_instance) },
	{ 0x5a5a94a6, __VMLINUX_SYMBOL_STR(kstrtou8) },
	{ 0xba5b0987, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0x34908c14, __VMLINUX_SYMBOL_STR(print_hex_dump_bytes) },
	{ 0x2aee63f4, __VMLINUX_SYMBOL_STR(__mutex_init) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x20c55ae0, __VMLINUX_SYMBOL_STR(sscanf) },
	{ 0x8ee04abd, __VMLINUX_SYMBOL_STR(usb_ep_autoconfig) },
	{ 0xdfc0c78e, __VMLINUX_SYMBOL_STR(ida_simple_remove) },
	{ 0x9372bc7d, __VMLINUX_SYMBOL_STR(free_netdev) },
	{ 0x11b9fed, __VMLINUX_SYMBOL_STR(gether_set_gadget) },
	{ 0x1b1bcf02, __VMLINUX_SYMBOL_STR(skb_push) },
	{ 0xfd16e532, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0x4213315b, __VMLINUX_SYMBOL_STR(gether_get_host_addr) },
	{ 0x6f7e5fac, __VMLINUX_SYMBOL_STR(config_group_init_type_name) },
	{ 0x74b8260c, __VMLINUX_SYMBOL_STR(gether_set_qmult) },
	{ 0xca709324, __VMLINUX_SYMBOL_STR(gether_get_host_addr_u8) },
	{ 0xb3a078ee, __VMLINUX_SYMBOL_STR(skb_pull) },
	{ 0x5bc797be, __VMLINUX_SYMBOL_STR(usb_function_register) },
	{ 0x187188c0, __VMLINUX_SYMBOL_STR(skb_queue_tail) },
	{ 0xc24c9890, __VMLINUX_SYMBOL_STR(gether_register_netdev) },
	{ 0xe162e43f, __VMLINUX_SYMBOL_STR(kmem_cache_alloc) },
	{ 0x29ef28c, __VMLINUX_SYMBOL_STR(gether_set_dev_addr) },
	{ 0x3777435d, __VMLINUX_SYMBOL_STR(config_ep_by_speed) },
	{ 0xe4709b37, __VMLINUX_SYMBOL_STR(usb_ep_free_request) },
	{ 0xdc550814, __VMLINUX_SYMBOL_STR(gether_disconnect) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x9d669763, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0x8857be69, __VMLINUX_SYMBOL_STR(usb_assign_descriptors) },
	{ 0xa9bbea7a, __VMLINUX_SYMBOL_STR(usb_interface_id) },
	{ 0xefd6cf06, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr0) },
	{ 0x676bbc0f, __VMLINUX_SYMBOL_STR(_set_bit) },
	{ 0x9792c9e9, __VMLINUX_SYMBOL_STR(consume_skb) },
	{ 0x902ac6b8, __VMLINUX_SYMBOL_STR(usb_os_desc_prepare_interf_dir) },
	{ 0x6413c957, __VMLINUX_SYMBOL_STR(dev_get_stats) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=libcomposite,u_ether,configfs";


MODULE_INFO(srcversion, "75F0AC08BF6E2FE97B432DD");
