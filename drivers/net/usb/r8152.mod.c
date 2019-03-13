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
	{ 0xb00f7f4d, __VMLINUX_SYMBOL_STR(eth_validate_addr) },
	{ 0xbbaea711, __VMLINUX_SYMBOL_STR(ethtool_op_get_link) },
	{ 0xa96e619, __VMLINUX_SYMBOL_STR(usb_deregister) },
	{ 0x28b23b45, __VMLINUX_SYMBOL_STR(usb_register_driver) },
	{ 0xc94e36e5, __VMLINUX_SYMBOL_STR(usb_enable_lpm) },
	{ 0x66ee6ceb, __VMLINUX_SYMBOL_STR(skb_checksum_help) },
	{ 0x497e285, __VMLINUX_SYMBOL_STR(__pskb_pull_tail) },
	{ 0x8964c11, __VMLINUX_SYMBOL_STR(__skb_gso_segment) },
	{ 0x44da5d0f, __VMLINUX_SYMBOL_STR(__csum_ipv6_magic) },
	{ 0xa8e9973, __VMLINUX_SYMBOL_STR(pskb_expand_head) },
	{ 0x67e6b9b8, __VMLINUX_SYMBOL_STR(__dev_kfree_skb_any) },
	{ 0xc3a76bf0, __VMLINUX_SYMBOL_STR(skb_copy_bits) },
	{ 0x16a17b64, __VMLINUX_SYMBOL_STR(usb_autopm_get_interface_async) },
	{ 0xcf14cb22, __VMLINUX_SYMBOL_STR(netif_schedule_queue) },
	{ 0xc917e655, __VMLINUX_SYMBOL_STR(debug_smp_processor_id) },
	{ 0xe65f130b, __VMLINUX_SYMBOL_STR(napi_complete_done) },
	{ 0x3e69e0b, __VMLINUX_SYMBOL_STR(__napi_alloc_skb) },
	{ 0x86461aa2, __VMLINUX_SYMBOL_STR(eth_type_trans) },
	{ 0x3d107dd6, __VMLINUX_SYMBOL_STR(skb_put) },
	{ 0x17c9dbfe, __VMLINUX_SYMBOL_STR(napi_gro_receive) },
	{ 0x16305289, __VMLINUX_SYMBOL_STR(warn_slowpath_null) },
	{ 0xe707d823, __VMLINUX_SYMBOL_STR(__aeabi_uidiv) },
	{ 0x9f4cc256, __VMLINUX_SYMBOL_STR(netif_carrier_on) },
	{ 0x6220b4a2, __VMLINUX_SYMBOL_STR(crc32_le) },
	{ 0xcedc227c, __VMLINUX_SYMBOL_STR(netdev_notice) },
	{ 0x7f23a6b3, __VMLINUX_SYMBOL_STR(mutex_trylock) },
	{ 0x632780, __VMLINUX_SYMBOL_STR(work_busy) },
	{ 0x4c41678b, __VMLINUX_SYMBOL_STR(netif_device_attach) },
	{ 0xcb49a075, __VMLINUX_SYMBOL_STR(netif_tx_wake_queue) },
	{ 0x51d559d1, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_irqrestore) },
	{ 0x598542b2, __VMLINUX_SYMBOL_STR(_raw_spin_lock_irqsave) },
	{ 0xba5b0987, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0x935b4e5e, __VMLINUX_SYMBOL_STR(usb_driver_set_configuration) },
	{ 0xbd22ae2d, __VMLINUX_SYMBOL_STR(_dev_info) },
	{ 0x6938a2bc, __VMLINUX_SYMBOL_STR(register_netdev) },
	{ 0x38d75adf, __VMLINUX_SYMBOL_STR(netif_napi_add) },
	{ 0x79aa04a2, __VMLINUX_SYMBOL_STR(get_random_bytes) },
	{ 0x131db64a, __VMLINUX_SYMBOL_STR(system_long_wq) },
	{ 0x5ee52022, __VMLINUX_SYMBOL_STR(init_timer_key) },
	{ 0x6b06fdce, __VMLINUX_SYMBOL_STR(delayed_work_timer_fn) },
	{ 0x2aee63f4, __VMLINUX_SYMBOL_STR(__mutex_init) },
	{ 0x60c602cf, __VMLINUX_SYMBOL_STR(alloc_etherdev_mqs) },
	{ 0x5c625f8c, __VMLINUX_SYMBOL_STR(usb_reset_device) },
	{ 0x5f754e5a, __VMLINUX_SYMBOL_STR(memset) },
	{ 0xfa2a45e, __VMLINUX_SYMBOL_STR(__memzero) },
	{ 0x12a38747, __VMLINUX_SYMBOL_STR(usleep_range) },
	{ 0x9cc4f70a, __VMLINUX_SYMBOL_STR(register_pm_notifier) },
	{ 0xbb7729f1, __VMLINUX_SYMBOL_STR(netif_carrier_off) },
	{ 0xe162e43f, __VMLINUX_SYMBOL_STR(kmem_cache_alloc) },
	{ 0x9bb7af9a, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0xac2a5a27, __VMLINUX_SYMBOL_STR(usb_alloc_urb) },
	{ 0x7681946c, __VMLINUX_SYMBOL_STR(unregister_pm_notifier) },
	{ 0xe9e085df, __VMLINUX_SYMBOL_STR(usb_free_urb) },
	{ 0xdd3916ac, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_bh) },
	{ 0xa1d55e90, __VMLINUX_SYMBOL_STR(_raw_spin_lock_bh) },
	{ 0xddb9eb05, __VMLINUX_SYMBOL_STR(skb_tstamp_tx) },
	{ 0x526c3a6c, __VMLINUX_SYMBOL_STR(jiffies) },
	{ 0x187188c0, __VMLINUX_SYMBOL_STR(skb_queue_tail) },
	{ 0xc6cbbc89, __VMLINUX_SYMBOL_STR(capable) },
	{ 0x46f4b1d0, __VMLINUX_SYMBOL_STR(usb_queue_reset_device) },
	{ 0xb81960ca, __VMLINUX_SYMBOL_STR(snprintf) },
	{ 0x73e20c1c, __VMLINUX_SYMBOL_STR(strlcpy) },
	{ 0x7a5354e3, __VMLINUX_SYMBOL_STR(mii_nway_restart) },
	{ 0x4a9ee170, __VMLINUX_SYMBOL_STR(mii_ethtool_get_link_ksettings) },
	{ 0xf9a482f9, __VMLINUX_SYMBOL_STR(msleep) },
	{ 0x2a3aa678, __VMLINUX_SYMBOL_STR(_test_and_clear_bit) },
	{ 0xcdb96750, __VMLINUX_SYMBOL_STR(usb_autopm_put_interface) },
	{ 0x68a660f7, __VMLINUX_SYMBOL_STR(usb_autopm_get_interface) },
	{ 0xc8fb8e71, __VMLINUX_SYMBOL_STR(netdev_warn) },
	{ 0xf6ebc03b, __VMLINUX_SYMBOL_STR(net_ratelimit) },
	{ 0x540314b8, __VMLINUX_SYMBOL_STR(__napi_schedule) },
	{ 0x662bfab5, __VMLINUX_SYMBOL_STR(napi_schedule_prep) },
	{ 0x77515e60, __VMLINUX_SYMBOL_STR(usb_autopm_put_interface_async) },
	{ 0x5fc56a46, __VMLINUX_SYMBOL_STR(_raw_spin_unlock) },
	{ 0x9c0bd51f, __VMLINUX_SYMBOL_STR(_raw_spin_lock) },
	{ 0x70a6b9f, __VMLINUX_SYMBOL_STR(device_set_wakeup_enable) },
	{ 0x9372bc7d, __VMLINUX_SYMBOL_STR(free_netdev) },
	{ 0xcfccbefb, __VMLINUX_SYMBOL_STR(unregister_netdev) },
	{ 0xddf33c52, __VMLINUX_SYMBOL_STR(netif_napi_del) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0xe2fae716, __VMLINUX_SYMBOL_STR(kmemdup) },
	{ 0x9792c9e9, __VMLINUX_SYMBOL_STR(consume_skb) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x9d669763, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0x68cdcae4, __VMLINUX_SYMBOL_STR(usb_control_msg) },
	{ 0x12da5bb2, __VMLINUX_SYMBOL_STR(__kmalloc) },
	{ 0x58d2273e, __VMLINUX_SYMBOL_STR(queue_delayed_work_on) },
	{ 0x2d3385d3, __VMLINUX_SYMBOL_STR(system_wq) },
	{ 0xb0d92dc0, __VMLINUX_SYMBOL_STR(netdev_info) },
	{ 0x90058ca6, __VMLINUX_SYMBOL_STR(netif_device_detach) },
	{ 0x38c27d25, __VMLINUX_SYMBOL_STR(netdev_err) },
	{ 0xaf54c6ba, __VMLINUX_SYMBOL_STR(usb_submit_urb) },
	{ 0xe4ca3b4f, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0xfd16e532, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0xfd792e2a, __VMLINUX_SYMBOL_STR(cancel_delayed_work_sync) },
	{ 0x4b0f323d, __VMLINUX_SYMBOL_STR(usb_kill_urb) },
	{ 0x49ebacbd, __VMLINUX_SYMBOL_STR(_clear_bit) },
	{ 0xce100f85, __VMLINUX_SYMBOL_STR(napi_disable) },
	{ 0x676bbc0f, __VMLINUX_SYMBOL_STR(_set_bit) },
	{ 0xefd6cf06, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr0) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

MODULE_ALIAS("usb:v0BDAp8050d*dc*dsc*dp*icFFisc*ip*in*");
MODULE_ALIAS("usb:v0BDAp8050d*dc*dsc*dp*ic02isc06ip00in*");
MODULE_ALIAS("usb:v0BDAp8152d*dc*dsc*dp*icFFisc*ip*in*");
MODULE_ALIAS("usb:v0BDAp8152d*dc*dsc*dp*ic02isc06ip00in*");
MODULE_ALIAS("usb:v0BDAp8153d*dc*dsc*dp*icFFisc*ip*in*");
MODULE_ALIAS("usb:v0BDAp8153d*dc*dsc*dp*ic02isc06ip00in*");
MODULE_ALIAS("usb:v045Ep07ABd*dc*dsc*dp*icFFisc*ip*in*");
MODULE_ALIAS("usb:v045Ep07ABd*dc*dsc*dp*ic02isc06ip00in*");
MODULE_ALIAS("usb:v045Ep07C6d*dc*dsc*dp*icFFisc*ip*in*");
MODULE_ALIAS("usb:v045Ep07C6d*dc*dsc*dp*ic02isc06ip00in*");
MODULE_ALIAS("usb:v04E8pA101d*dc*dsc*dp*icFFisc*ip*in*");
MODULE_ALIAS("usb:v04E8pA101d*dc*dsc*dp*ic02isc06ip00in*");
MODULE_ALIAS("usb:v17EFp304Fd*dc*dsc*dp*icFFisc*ip*in*");
MODULE_ALIAS("usb:v17EFp304Fd*dc*dsc*dp*ic02isc06ip00in*");
MODULE_ALIAS("usb:v17EFp3062d*dc*dsc*dp*icFFisc*ip*in*");
MODULE_ALIAS("usb:v17EFp3062d*dc*dsc*dp*ic02isc06ip00in*");
MODULE_ALIAS("usb:v17EFp3069d*dc*dsc*dp*icFFisc*ip*in*");
MODULE_ALIAS("usb:v17EFp3069d*dc*dsc*dp*ic02isc06ip00in*");
MODULE_ALIAS("usb:v17EFp7205d*dc*dsc*dp*icFFisc*ip*in*");
MODULE_ALIAS("usb:v17EFp7205d*dc*dsc*dp*ic02isc06ip00in*");
MODULE_ALIAS("usb:v17EFp720Cd*dc*dsc*dp*icFFisc*ip*in*");
MODULE_ALIAS("usb:v17EFp720Cd*dc*dsc*dp*ic02isc06ip00in*");
MODULE_ALIAS("usb:v17EFp7214d*dc*dsc*dp*icFFisc*ip*in*");
MODULE_ALIAS("usb:v17EFp7214d*dc*dsc*dp*ic02isc06ip00in*");
MODULE_ALIAS("usb:v13B1p0041d*dc*dsc*dp*icFFisc*ip*in*");
MODULE_ALIAS("usb:v13B1p0041d*dc*dsc*dp*ic02isc06ip00in*");
MODULE_ALIAS("usb:v0955p09FFd*dc*dsc*dp*icFFisc*ip*in*");
MODULE_ALIAS("usb:v0955p09FFd*dc*dsc*dp*ic02isc06ip00in*");
MODULE_ALIAS("usb:v2357p0601d*dc*dsc*dp*icFFisc*ip*in*");
MODULE_ALIAS("usb:v2357p0601d*dc*dsc*dp*ic02isc06ip00in*");

MODULE_INFO(srcversion, "DD80DC47F38B07FCE408949");
