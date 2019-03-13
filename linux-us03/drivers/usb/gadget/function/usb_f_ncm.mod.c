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
	{ 0x5fc56a46, __VMLINUX_SYMBOL_STR(_raw_spin_unlock) },
	{ 0x88a577ab, __VMLINUX_SYMBOL_STR(usb_ep_disable) },
	{ 0xb9a38379, __VMLINUX_SYMBOL_STR(usb_ep_enable) },
	{ 0x384394e2, __VMLINUX_SYMBOL_STR(gether_get_qmult) },
	{ 0x92215052, __VMLINUX_SYMBOL_STR(usb_ep_queue) },
	{ 0x1266a193, __VMLINUX_SYMBOL_STR(gether_setup_name_default) },
	{ 0xe5785f57, __VMLINUX_SYMBOL_STR(hrtimer_cancel) },
	{ 0xe478b5f7, __VMLINUX_SYMBOL_STR(gether_get_host_addr_cdc) },
	{ 0xf7802486, __VMLINUX_SYMBOL_STR(__aeabi_uidivmod) },
	{ 0x67e6b9b8, __VMLINUX_SYMBOL_STR(__dev_kfree_skb_any) },
	{ 0xe4ca3b4f, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0xf749fec9, __VMLINUX_SYMBOL_STR(usb_ep_set_halt) },
	{ 0x53e0100c, __VMLINUX_SYMBOL_STR(gether_get_ifname) },
	{ 0x5063ff0f, __VMLINUX_SYMBOL_STR(usb_ep_alloc_request) },
	{ 0x91715312, __VMLINUX_SYMBOL_STR(sprintf) },
	{ 0x8878cfa6, __VMLINUX_SYMBOL_STR(gether_cleanup) },
	{ 0x80479cc6, __VMLINUX_SYMBOL_STR(usb_function_unregister) },
	{ 0xf9df5631, __VMLINUX_SYMBOL_STR(__netdev_alloc_skb) },
	{ 0xfb443547, __VMLINUX_SYMBOL_STR(gether_set_host_addr) },
	{ 0xa942639, __VMLINUX_SYMBOL_STR(gether_get_dev_addr) },
	{ 0xfa2a45e, __VMLINUX_SYMBOL_STR(__memzero) },
	{ 0x47388857, __VMLINUX_SYMBOL_STR(skb_queue_purge) },
	{ 0xe6932195, __VMLINUX_SYMBOL_STR(hrtimer_start_range_ns) },
	{ 0xc068ca33, __VMLINUX_SYMBOL_STR(gether_connect) },
	{ 0x10e0b46b, __VMLINUX_SYMBOL_STR(usb_put_function_instance) },
	{ 0x5a5a94a6, __VMLINUX_SYMBOL_STR(kstrtou8) },
	{ 0xba5b0987, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0x2aee63f4, __VMLINUX_SYMBOL_STR(__mutex_init) },
	{ 0x8ee04abd, __VMLINUX_SYMBOL_STR(usb_ep_autoconfig) },
	{ 0x9372bc7d, __VMLINUX_SYMBOL_STR(free_netdev) },
	{ 0xfaef0ed, __VMLINUX_SYMBOL_STR(__tasklet_schedule) },
	{ 0x11b9fed, __VMLINUX_SYMBOL_STR(gether_set_gadget) },
	{ 0xfd16e532, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0x6220b4a2, __VMLINUX_SYMBOL_STR(crc32_le) },
	{ 0x4213315b, __VMLINUX_SYMBOL_STR(gether_get_host_addr) },
	{ 0x6f7e5fac, __VMLINUX_SYMBOL_STR(config_group_init_type_name) },
	{ 0x9545af6d, __VMLINUX_SYMBOL_STR(tasklet_init) },
	{ 0x74b8260c, __VMLINUX_SYMBOL_STR(gether_set_qmult) },
	{ 0x5bc797be, __VMLINUX_SYMBOL_STR(usb_function_register) },
	{ 0x82072614, __VMLINUX_SYMBOL_STR(tasklet_kill) },
	{ 0x4059792f, __VMLINUX_SYMBOL_STR(print_hex_dump) },
	{ 0x187188c0, __VMLINUX_SYMBOL_STR(skb_queue_tail) },
	{ 0xbd22ae2d, __VMLINUX_SYMBOL_STR(_dev_info) },
	{ 0xc24c9890, __VMLINUX_SYMBOL_STR(gether_register_netdev) },
	{ 0xe162e43f, __VMLINUX_SYMBOL_STR(kmem_cache_alloc) },
	{ 0xc119d4c8, __VMLINUX_SYMBOL_STR(__alloc_skb) },
	{ 0x29ef28c, __VMLINUX_SYMBOL_STR(gether_set_dev_addr) },
	{ 0x3777435d, __VMLINUX_SYMBOL_STR(config_ep_by_speed) },
	{ 0xe4709b37, __VMLINUX_SYMBOL_STR(usb_ep_free_request) },
	{ 0x9c0bd51f, __VMLINUX_SYMBOL_STR(_raw_spin_lock) },
	{ 0xdc550814, __VMLINUX_SYMBOL_STR(gether_disconnect) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x9d669763, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0xce58dc69, __VMLINUX_SYMBOL_STR(hrtimer_init) },
	{ 0x8857be69, __VMLINUX_SYMBOL_STR(usb_assign_descriptors) },
	{ 0xa9bbea7a, __VMLINUX_SYMBOL_STR(usb_interface_id) },
	{ 0xefd6cf06, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr0) },
	{ 0x59eb982d, __VMLINUX_SYMBOL_STR(hrtimer_try_to_cancel) },
	{ 0xca54fee, __VMLINUX_SYMBOL_STR(_test_and_set_bit) },
	{ 0x3d107dd6, __VMLINUX_SYMBOL_STR(skb_put) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=libcomposite,u_ether,configfs";


MODULE_INFO(srcversion, "27DCCE63E0B9D77C1BA0502");
