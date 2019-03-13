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
	{ 0x2d3385d3, __VMLINUX_SYMBOL_STR(system_wq) },
	{ 0xb0d92dc0, __VMLINUX_SYMBOL_STR(netdev_info) },
	{ 0x9bb7af9a, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0x12da5bb2, __VMLINUX_SYMBOL_STR(__kmalloc) },
	{ 0xf42ab45c, __VMLINUX_SYMBOL_STR(ethtool_op_get_ts_info) },
	{ 0xf88c3301, __VMLINUX_SYMBOL_STR(sg_init_table) },
	{ 0x5fc56a46, __VMLINUX_SYMBOL_STR(_raw_spin_unlock) },
	{ 0x4c799001, __VMLINUX_SYMBOL_STR(mem_map) },
	{ 0xad995dac, __VMLINUX_SYMBOL_STR(netdev_stats_to_stats64) },
	{ 0x3af9e577, __VMLINUX_SYMBOL_STR(param_ops_int) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0x79aa04a2, __VMLINUX_SYMBOL_STR(get_random_bytes) },
	{ 0xb5a57d8a, __VMLINUX_SYMBOL_STR(remove_wait_queue) },
	{ 0x9f4cc256, __VMLINUX_SYMBOL_STR(netif_carrier_on) },
	{ 0xf7802486, __VMLINUX_SYMBOL_STR(__aeabi_uidivmod) },
	{ 0x631dd7f3, __VMLINUX_SYMBOL_STR(usb_get_from_anchor) },
	{ 0x2a3aa678, __VMLINUX_SYMBOL_STR(_test_and_clear_bit) },
	{ 0xbb7729f1, __VMLINUX_SYMBOL_STR(netif_carrier_off) },
	{ 0x4205ad24, __VMLINUX_SYMBOL_STR(cancel_work_sync) },
	{ 0x4b0f323d, __VMLINUX_SYMBOL_STR(usb_kill_urb) },
	{ 0xd6593d37, __VMLINUX_SYMBOL_STR(usb_scuttle_anchored_urbs) },
	{ 0xe2fae716, __VMLINUX_SYMBOL_STR(kmemdup) },
	{ 0x67e6b9b8, __VMLINUX_SYMBOL_STR(__dev_kfree_skb_any) },
	{ 0x5ee52022, __VMLINUX_SYMBOL_STR(init_timer_key) },
	{ 0xe4ca3b4f, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0x68a660f7, __VMLINUX_SYMBOL_STR(usb_autopm_get_interface) },
	{ 0xb26177f7, __VMLINUX_SYMBOL_STR(usb_get_urb) },
	{ 0x7c961988, __VMLINUX_SYMBOL_STR(usb_unlink_urb) },
	{ 0x526c3a6c, __VMLINUX_SYMBOL_STR(jiffies) },
	{ 0xc9ec4e21, __VMLINUX_SYMBOL_STR(free_percpu) },
	{ 0x4e810d22, __VMLINUX_SYMBOL_STR(cpumask_next) },
	{ 0xf9df5631, __VMLINUX_SYMBOL_STR(__netdev_alloc_skb) },
	{ 0x19e2d194, __VMLINUX_SYMBOL_STR(netif_rx) },
	{ 0x93de854a, __VMLINUX_SYMBOL_STR(__init_waitqueue_head) },
	{ 0xaad8c7d6, __VMLINUX_SYMBOL_STR(default_wake_function) },
	{ 0x17de3d5, __VMLINUX_SYMBOL_STR(nr_cpu_ids) },
	{ 0xe707d823, __VMLINUX_SYMBOL_STR(__aeabi_uidiv) },
	{ 0xfa2a45e, __VMLINUX_SYMBOL_STR(__memzero) },
	{ 0xfc982daa, __VMLINUX_SYMBOL_STR(del_timer_sync) },
	{ 0x47388857, __VMLINUX_SYMBOL_STR(skb_queue_purge) },
	{ 0xb45f2d4, __VMLINUX_SYMBOL_STR(__cpu_possible_mask) },
	{ 0x5f7e890f, __VMLINUX_SYMBOL_STR(usb_string) },
	{ 0xcb49a075, __VMLINUX_SYMBOL_STR(netif_tx_wake_queue) },
	{ 0x7a5354e3, __VMLINUX_SYMBOL_STR(mii_nway_restart) },
	{ 0x51d559d1, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_irqrestore) },
	{ 0x2aee63f4, __VMLINUX_SYMBOL_STR(__mutex_init) },
	{ 0xbbaea711, __VMLINUX_SYMBOL_STR(ethtool_op_get_link) },
	{ 0xc917e655, __VMLINUX_SYMBOL_STR(debug_smp_processor_id) },
	{ 0x2330a439, __VMLINUX_SYMBOL_STR(usb_set_interface) },
	{ 0x9372bc7d, __VMLINUX_SYMBOL_STR(free_netdev) },
	{ 0x77515e60, __VMLINUX_SYMBOL_STR(usb_autopm_put_interface_async) },
	{ 0xfaef0ed, __VMLINUX_SYMBOL_STR(__tasklet_schedule) },
	{ 0x6938a2bc, __VMLINUX_SYMBOL_STR(register_netdev) },
	{ 0x1a1431fd, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_irq) },
	{ 0x68cdcae4, __VMLINUX_SYMBOL_STR(usb_control_msg) },
	{ 0x73e20c1c, __VMLINUX_SYMBOL_STR(strlcpy) },
	{ 0x16305289, __VMLINUX_SYMBOL_STR(warn_slowpath_null) },
	{ 0xfd16e532, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0xa38caae0, __VMLINUX_SYMBOL_STR(mod_timer) },
	{ 0x82072614, __VMLINUX_SYMBOL_STR(tasklet_kill) },
	{ 0x6c209eab, __VMLINUX_SYMBOL_STR(__alloc_percpu_gfp) },
	{ 0x6f85ad46, __VMLINUX_SYMBOL_STR(mii_ethtool_set_link_ksettings) },
	{ 0x187188c0, __VMLINUX_SYMBOL_STR(skb_queue_tail) },
	{ 0x4c41678b, __VMLINUX_SYMBOL_STR(netif_device_attach) },
	{ 0xaf54c6ba, __VMLINUX_SYMBOL_STR(usb_submit_urb) },
	{ 0xe162e43f, __VMLINUX_SYMBOL_STR(kmem_cache_alloc) },
	{ 0x90058ca6, __VMLINUX_SYMBOL_STR(netif_device_detach) },
	{ 0x16a17b64, __VMLINUX_SYMBOL_STR(usb_autopm_get_interface_async) },
	{ 0xec10e46d, __VMLINUX_SYMBOL_STR(pm_runtime_enable) },
	{ 0x8ddd8aad, __VMLINUX_SYMBOL_STR(schedule_timeout) },
	{ 0xc426f7f5, __VMLINUX_SYMBOL_STR(usb_clear_halt) },
	{ 0x3507a132, __VMLINUX_SYMBOL_STR(_raw_spin_lock_irq) },
	{ 0x86461aa2, __VMLINUX_SYMBOL_STR(eth_type_trans) },
	{ 0xaa4a7797, __VMLINUX_SYMBOL_STR(hex2bin) },
	{ 0x38c27d25, __VMLINUX_SYMBOL_STR(netdev_err) },
	{ 0x9c0bd51f, __VMLINUX_SYMBOL_STR(_raw_spin_lock) },
	{ 0x341dbfa3, __VMLINUX_SYMBOL_STR(__per_cpu_offset) },
	{ 0x598542b2, __VMLINUX_SYMBOL_STR(_raw_spin_lock_irqsave) },
	{ 0x4215a929, __VMLINUX_SYMBOL_STR(__wake_up) },
	{ 0xf6ebc03b, __VMLINUX_SYMBOL_STR(net_ratelimit) },
	{ 0x4a9ee170, __VMLINUX_SYMBOL_STR(mii_ethtool_get_link_ksettings) },
	{ 0x8a8a53d7, __VMLINUX_SYMBOL_STR(usb_autopm_get_interface_no_resume) },
	{ 0xb00f7f4d, __VMLINUX_SYMBOL_STR(eth_validate_addr) },
	{ 0xdd31568b, __VMLINUX_SYMBOL_STR(add_wait_queue) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x9d669763, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0xf2372f81, __VMLINUX_SYMBOL_STR(skb_dequeue) },
	{ 0xcfccbefb, __VMLINUX_SYMBOL_STR(unregister_netdev) },
	{ 0xefd6cf06, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr0) },
	{ 0x676bbc0f, __VMLINUX_SYMBOL_STR(_set_bit) },
	{ 0xb2d48a2e, __VMLINUX_SYMBOL_STR(queue_work_on) },
	{ 0xb81960ca, __VMLINUX_SYMBOL_STR(snprintf) },
	{ 0x47c9b4d1, __VMLINUX_SYMBOL_STR(mii_link_ok) },
	{ 0xca54fee, __VMLINUX_SYMBOL_STR(_test_and_set_bit) },
	{ 0x9792c9e9, __VMLINUX_SYMBOL_STR(consume_skb) },
	{ 0xddb9eb05, __VMLINUX_SYMBOL_STR(skb_tstamp_tx) },
	{ 0x49ebacbd, __VMLINUX_SYMBOL_STR(_clear_bit) },
	{ 0x3d107dd6, __VMLINUX_SYMBOL_STR(skb_put) },
	{ 0x9e5e0c75, __VMLINUX_SYMBOL_STR(eth_mac_addr) },
	{ 0xe9e085df, __VMLINUX_SYMBOL_STR(usb_free_urb) },
	{ 0xcdb96750, __VMLINUX_SYMBOL_STR(usb_autopm_put_interface) },
	{ 0x92a6070c, __VMLINUX_SYMBOL_STR(usb_anchor_urb) },
	{ 0xac2a5a27, __VMLINUX_SYMBOL_STR(usb_alloc_urb) },
	{ 0x60c602cf, __VMLINUX_SYMBOL_STR(alloc_etherdev_mqs) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "347FD9CE259BBE9C5FC0599");
