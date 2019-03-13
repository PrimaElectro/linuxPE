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
	{ 0xa4e4c8d3, __VMLINUX_SYMBOL_STR(param_ops_bool) },
	{ 0xa96e619, __VMLINUX_SYMBOL_STR(usb_deregister) },
	{ 0x28b23b45, __VMLINUX_SYMBOL_STR(usb_register_driver) },
	{ 0x83b9fc08, __VMLINUX_SYMBOL_STR(device_wakeup_enable) },
	{ 0xe165396a, __VMLINUX_SYMBOL_STR(btintel_set_diag) },
	{ 0x8a1fd9c7, __VMLINUX_SYMBOL_STR(btintel_hw_error) },
	{ 0x1458106f, __VMLINUX_SYMBOL_STR(btintel_set_bdaddr) },
	{ 0x41dba092, __VMLINUX_SYMBOL_STR(btintel_set_diag_mfg) },
	{ 0x637be14d, __VMLINUX_SYMBOL_STR(btbcm_setup_apple) },
	{ 0xac38ff3, __VMLINUX_SYMBOL_STR(usb_ifnum_to_if) },
	{ 0x2a44386f, __VMLINUX_SYMBOL_STR(btbcm_set_bdaddr) },
	{ 0x111a8516, __VMLINUX_SYMBOL_STR(btbcm_setup_patchram) },
	{ 0xefb547c, __VMLINUX_SYMBOL_STR(of_property_read_variable_u16_array) },
	{ 0x18cc0a98, __VMLINUX_SYMBOL_STR(hci_register_dev) },
	{ 0xe2d5255a, __VMLINUX_SYMBOL_STR(strcmp) },
	{ 0x2e9b739b, __VMLINUX_SYMBOL_STR(usb_driver_claim_interface) },
	{ 0x4655e4bd, __VMLINUX_SYMBOL_STR(btrtl_setup_realtek) },
	{ 0xf33eedef, __VMLINUX_SYMBOL_STR(devm_request_threaded_irq) },
	{ 0x9a8c909d, __VMLINUX_SYMBOL_STR(of_irq_get_byname) },
	{ 0xe63d77a7, __VMLINUX_SYMBOL_STR(of_match_device) },
	{ 0x4869a9e3, __VMLINUX_SYMBOL_STR(hci_alloc_dev) },
	{ 0x93de854a, __VMLINUX_SYMBOL_STR(__init_waitqueue_head) },
	{ 0xfa2a45e, __VMLINUX_SYMBOL_STR(__memzero) },
	{ 0xd3bc50d7, __VMLINUX_SYMBOL_STR(devm_kmalloc) },
	{ 0x840b5e58, __VMLINUX_SYMBOL_STR(usb_match_id) },
	{ 0x27bbf221, __VMLINUX_SYMBOL_STR(disable_irq_nosync) },
	{ 0x8c0215f2, __VMLINUX_SYMBOL_STR(pm_system_wakeup) },
	{ 0xcfb08c16, __VMLINUX_SYMBOL_STR(pm_wakeup_dev_event) },
	{ 0xa0fbac79, __VMLINUX_SYMBOL_STR(wake_up_bit) },
	{ 0xc3706a28, __VMLINUX_SYMBOL_STR(hci_recv_diag) },
	{ 0xca54fee, __VMLINUX_SYMBOL_STR(_test_and_set_bit) },
	{ 0x2330a439, __VMLINUX_SYMBOL_STR(usb_set_interface) },
	{ 0xcdb96750, __VMLINUX_SYMBOL_STR(usb_autopm_put_interface) },
	{ 0x7f34d6cf, __VMLINUX_SYMBOL_STR(device_wakeup_disable) },
	{ 0x68a660f7, __VMLINUX_SYMBOL_STR(usb_autopm_get_interface) },
	{ 0x48ad5b4c, __VMLINUX_SYMBOL_STR(btintel_exit_mfg) },
	{ 0xe74c6286, __VMLINUX_SYMBOL_STR(btintel_set_event_mask_mfg) },
	{ 0xedf4d8c, __VMLINUX_SYMBOL_STR(__hci_cmd_sync_ev) },
	{ 0xac3c6495, __VMLINUX_SYMBOL_STR(btintel_enter_mfg) },
	{ 0x51d559d1, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_irqrestore) },
	{ 0x598542b2, __VMLINUX_SYMBOL_STR(_raw_spin_lock_irqsave) },
	{ 0xf01da2ef, __VMLINUX_SYMBOL_STR(btintel_set_event_mask) },
	{ 0xf1bc6ea3, __VMLINUX_SYMBOL_STR(btintel_load_ddc_config) },
	{ 0x841db9a6, __VMLINUX_SYMBOL_STR(btintel_check_bdaddr) },
	{ 0xd6459282, __VMLINUX_SYMBOL_STR(release_firmware) },
	{ 0x4071b517, __VMLINUX_SYMBOL_STR(out_of_line_wait_on_bit_timeout) },
	{ 0x44bae227, __VMLINUX_SYMBOL_STR(bit_wait_timeout) },
	{ 0x63bb286f, __VMLINUX_SYMBOL_STR(btintel_secure_send) },
	{ 0xfb604648, __VMLINUX_SYMBOL_STR(request_firmware) },
	{ 0xb81960ca, __VMLINUX_SYMBOL_STR(snprintf) },
	{ 0x71c90087, __VMLINUX_SYMBOL_STR(memcmp) },
	{ 0xd7442057, __VMLINUX_SYMBOL_STR(bt_info) },
	{ 0x5d8a23b4, __VMLINUX_SYMBOL_STR(btintel_version_info) },
	{ 0xcdf55fea, __VMLINUX_SYMBOL_STR(btintel_read_version) },
	{ 0x7adeb8d4, __VMLINUX_SYMBOL_STR(ktime_get) },
	{ 0x9b9316e3, __VMLINUX_SYMBOL_STR(usb_bulk_msg) },
	{ 0x68cdcae4, __VMLINUX_SYMBOL_STR(usb_control_msg) },
	{ 0x644040bb, __VMLINUX_SYMBOL_STR(__hci_cmd_sync) },
	{ 0xdb20a9af, __VMLINUX_SYMBOL_STR(usb_driver_release_interface) },
	{ 0x4140c2e, __VMLINUX_SYMBOL_STR(device_init_wakeup) },
	{ 0x23f3df13, __VMLINUX_SYMBOL_STR(hci_free_dev) },
	{ 0xa592cd65, __VMLINUX_SYMBOL_STR(hci_unregister_dev) },
	{ 0xfcec0987, __VMLINUX_SYMBOL_STR(enable_irq) },
	{ 0x4205ad24, __VMLINUX_SYMBOL_STR(cancel_work_sync) },
	{ 0x676bbc0f, __VMLINUX_SYMBOL_STR(_set_bit) },
	{ 0xf7dbebd5, __VMLINUX_SYMBOL_STR(usb_kill_anchored_urbs) },
	{ 0xce2840e7, __VMLINUX_SYMBOL_STR(irq_set_irq_wake) },
	{ 0x3ce4ca6f, __VMLINUX_SYMBOL_STR(disable_irq) },
	{ 0xd6593d37, __VMLINUX_SYMBOL_STR(usb_scuttle_anchored_urbs) },
	{ 0x1a1431fd, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_irq) },
	{ 0x49ebacbd, __VMLINUX_SYMBOL_STR(_clear_bit) },
	{ 0x631dd7f3, __VMLINUX_SYMBOL_STR(usb_get_from_anchor) },
	{ 0x3507a132, __VMLINUX_SYMBOL_STR(_raw_spin_lock_irq) },
	{ 0x2a3aa678, __VMLINUX_SYMBOL_STR(_test_and_clear_bit) },
	{ 0xb2d48a2e, __VMLINUX_SYMBOL_STR(queue_work_on) },
	{ 0x2d3385d3, __VMLINUX_SYMBOL_STR(system_wq) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x24081449, __VMLINUX_SYMBOL_STR(hci_recv_frame) },
	{ 0x12da5bb2, __VMLINUX_SYMBOL_STR(__kmalloc) },
	{ 0xe9e085df, __VMLINUX_SYMBOL_STR(usb_free_urb) },
	{ 0xe162e43f, __VMLINUX_SYMBOL_STR(kmem_cache_alloc) },
	{ 0x9bb7af9a, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0xc119d4c8, __VMLINUX_SYMBOL_STR(__alloc_skb) },
	{ 0xe21f5607, __VMLINUX_SYMBOL_STR(kfree_skb) },
	{ 0x5fc56a46, __VMLINUX_SYMBOL_STR(_raw_spin_unlock) },
	{ 0x9d669763, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0x3d107dd6, __VMLINUX_SYMBOL_STR(skb_put) },
	{ 0x9c0bd51f, __VMLINUX_SYMBOL_STR(_raw_spin_lock) },
	{ 0x47022514, __VMLINUX_SYMBOL_STR(bt_err) },
	{ 0xd1d6aebe, __VMLINUX_SYMBOL_STR(usb_unanchor_urb) },
	{ 0xaf54c6ba, __VMLINUX_SYMBOL_STR(usb_submit_urb) },
	{ 0x526c3a6c, __VMLINUX_SYMBOL_STR(jiffies) },
	{ 0x92a6070c, __VMLINUX_SYMBOL_STR(usb_anchor_urb) },
	{ 0xefd6cf06, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr0) },
	{ 0xac2a5a27, __VMLINUX_SYMBOL_STR(usb_alloc_urb) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=btintel,btbcm,bluetooth,btrtl";

MODULE_ALIAS("of:N*T*Cusb1286,204e");
MODULE_ALIAS("of:N*T*Cusb1286,204eC*");
MODULE_ALIAS("usb:v*p*d*dcE0dsc01dp01ic*isc*ip*in*");
MODULE_ALIAS("usb:v*p*d*dcE0dsc01dp04ic*isc*ip*in*");
MODULE_ALIAS("usb:v*p*d*dc*dsc*dp*icE0isc01ip01in*");
MODULE_ALIAS("usb:v05ACp*d*dc*dsc*dp*icFFisc01ip01in*");
MODULE_ALIAS("usb:v0E8Dp763Fd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0A5Cp21E1d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v05ACp8213d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v05ACp8215d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v05ACp8218d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v05ACp821Bd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v05ACp821Fd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v05ACp821Ad*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v05ACp8281d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v057Cp3800d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v04BFp030Ad*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v044Ep3001d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v044Ep3002d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0BDBp1002d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0C10p0000d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v413Cp8197d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v19FFp0239d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v105Bp*d*dc*dsc*dp*icFFisc01ip01in*");
MODULE_ALIAS("usb:v0BB4p*d*dc*dsc*dp*icFFisc01ip01in*");
MODULE_ALIAS("usb:v0489p*d*dc*dsc*dp*icFFisc01ip01in*");
MODULE_ALIAS("usb:v04CAp*d*dc*dsc*dp*icFFisc01ip01in*");
MODULE_ALIAS("usb:v0A5Cp*d*dc*dsc*dp*icFFisc01ip01in*");
MODULE_ALIAS("usb:v0B05p*d*dc*dsc*dp*icFFisc01ip01in*");
MODULE_ALIAS("usb:v050Dp*d*dc*dsc*dp*icFFisc01ip01in*");
MODULE_ALIAS("usb:v13D3p*d*dc*dsc*dp*icFFisc01ip01in*");
MODULE_ALIAS("usb:v413Cp*d*dc*dsc*dp*icFFisc01ip01in*");
MODULE_ALIAS("usb:v0930p*d*dc*dsc*dp*icFFisc01ip01in*");
MODULE_ALIAS("usb:v0000p0000d*dc*dsc*dp*icFFisc01ip01in*");
MODULE_ALIAS("usb:v8087p0A5Ad*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "A2FFF873474B9FCC740C412");
