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
	{ 0x6f10a265, __VMLINUX_SYMBOL_STR(device_remove_file) },
	{ 0x9bb7af9a, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0xf9a482f9, __VMLINUX_SYMBOL_STR(msleep) },
	{ 0x3af9e577, __VMLINUX_SYMBOL_STR(param_ops_int) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0x5c2e3421, __VMLINUX_SYMBOL_STR(del_timer) },
	{ 0x97255bdf, __VMLINUX_SYMBOL_STR(strlen) },
	{ 0x43a53735, __VMLINUX_SYMBOL_STR(__alloc_workqueue_key) },
	{ 0x4e1f414a, __VMLINUX_SYMBOL_STR(device_add_groups) },
	{ 0x2cd161d9, __VMLINUX_SYMBOL_STR(dev_printk) },
	{ 0x4f3b61f8, __VMLINUX_SYMBOL_STR(serio_unregister_driver) },
	{ 0xf83e3f40, __VMLINUX_SYMBOL_STR(ps2_handle_ack) },
	{ 0x77e2c499, __VMLINUX_SYMBOL_STR(ps2_sendbyte) },
	{ 0x9606dffd, __VMLINUX_SYMBOL_STR(ps2_handle_response) },
	{ 0x705c8233, __VMLINUX_SYMBOL_STR(input_mt_report_finger_count) },
	{ 0xbc196830, __VMLINUX_SYMBOL_STR(input_alloc_absinfo) },
	{ 0x6b06fdce, __VMLINUX_SYMBOL_STR(delayed_work_timer_fn) },
	{ 0x32ee81e5, __VMLINUX_SYMBOL_STR(ps2_end_command) },
	{ 0xe2fae716, __VMLINUX_SYMBOL_STR(kmemdup) },
	{ 0xc99a5683, __VMLINUX_SYMBOL_STR(i2c_for_each_dev) },
	{ 0xa4e4c8d3, __VMLINUX_SYMBOL_STR(param_ops_bool) },
	{ 0x5ee52022, __VMLINUX_SYMBOL_STR(init_timer_key) },
	{ 0xe4ca3b4f, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0x9d9aa18a, __VMLINUX_SYMBOL_STR(i2c_verify_adapter) },
	{ 0x85df9b6c, __VMLINUX_SYMBOL_STR(strsep) },
	{ 0x292bd46b, __VMLINUX_SYMBOL_STR(serio_interrupt) },
	{ 0xf998073, __VMLINUX_SYMBOL_STR(i2c_new_probed_device) },
	{ 0xd195d1f4, __VMLINUX_SYMBOL_STR(ps2_drain) },
	{ 0x91715312, __VMLINUX_SYMBOL_STR(sprintf) },
	{ 0x456913ac, __VMLINUX_SYMBOL_STR(sysfs_remove_group) },
	{ 0x526c3a6c, __VMLINUX_SYMBOL_STR(jiffies) },
	{ 0xa496da7f, __VMLINUX_SYMBOL_STR(input_mt_report_pointer_emulation) },
	{ 0x7241ce0, __VMLINUX_SYMBOL_STR(input_set_abs_params) },
	{ 0xb0320196, __VMLINUX_SYMBOL_STR(input_event) },
	{ 0x19b4bee9, __VMLINUX_SYMBOL_STR(serio_unregister_child_port) },
	{ 0xe707d823, __VMLINUX_SYMBOL_STR(__aeabi_uidiv) },
	{ 0xfa2a45e, __VMLINUX_SYMBOL_STR(__memzero) },
	{ 0xfc982daa, __VMLINUX_SYMBOL_STR(del_timer_sync) },
	{ 0x5f754e5a, __VMLINUX_SYMBOL_STR(memset) },
	{ 0x6c4d9b4, __VMLINUX_SYMBOL_STR(__serio_register_driver) },
	{ 0x752d5f5b, __VMLINUX_SYMBOL_STR(kstrtobool) },
	{ 0x5a5a94a6, __VMLINUX_SYMBOL_STR(kstrtou8) },
	{ 0xba5b0987, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0x189e7c1f, __VMLINUX_SYMBOL_STR(i2c_bus_type) },
	{ 0x6c49fc55, __VMLINUX_SYMBOL_STR(mutex_lock_interruptible) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0xdcab5c07, __VMLINUX_SYMBOL_STR(sysfs_create_group) },
	{ 0x71c90087, __VMLINUX_SYMBOL_STR(memcmp) },
	{ 0xaafdc258, __VMLINUX_SYMBOL_STR(strcasecmp) },
	{ 0x1a1431fd, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_irq) },
	{ 0x84b183ae, __VMLINUX_SYMBOL_STR(strncmp) },
	{ 0x73e20c1c, __VMLINUX_SYMBOL_STR(strlcpy) },
	{ 0x2f93d613, __VMLINUX_SYMBOL_STR(input_set_capability) },
	{ 0x16305289, __VMLINUX_SYMBOL_STR(warn_slowpath_null) },
	{ 0xfd16e532, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0x8c03d20c, __VMLINUX_SYMBOL_STR(destroy_workqueue) },
	{ 0xa38caae0, __VMLINUX_SYMBOL_STR(mod_timer) },
	{ 0x76068146, __VMLINUX_SYMBOL_STR(input_mt_init_slots) },
	{ 0x60eb2e6e, __VMLINUX_SYMBOL_STR(serio_close) },
	{ 0x4dba29f, __VMLINUX_SYMBOL_STR(i2c_unregister_device) },
	{ 0x22c793c2, __VMLINUX_SYMBOL_STR(serio_open) },
	{ 0x42160169, __VMLINUX_SYMBOL_STR(flush_workqueue) },
	{ 0x2196324, __VMLINUX_SYMBOL_STR(__aeabi_idiv) },
	{ 0xfe487975, __VMLINUX_SYMBOL_STR(init_wait_entry) },
	{ 0x51ef33b8, __VMLINUX_SYMBOL_STR(kstrndup) },
	{ 0x8c4d520f, __VMLINUX_SYMBOL_STR(device_create_file) },
	{ 0x6ac72b3a, __VMLINUX_SYMBOL_STR(dev_notice) },
	{ 0x439d4c04, __VMLINUX_SYMBOL_STR(i2c_adapter_type) },
	{ 0xbd22ae2d, __VMLINUX_SYMBOL_STR(_dev_info) },
	{ 0xe162e43f, __VMLINUX_SYMBOL_STR(kmem_cache_alloc) },
	{ 0xca2c3478, __VMLINUX_SYMBOL_STR(bus_register_notifier) },
	{ 0x12a38747, __VMLINUX_SYMBOL_STR(usleep_range) },
	{ 0xd3872eea, __VMLINUX_SYMBOL_STR(ps2_command) },
	{ 0x58d2273e, __VMLINUX_SYMBOL_STR(queue_delayed_work_on) },
	{ 0x13a76528, __VMLINUX_SYMBOL_STR(input_register_device) },
	{ 0x8ddd8aad, __VMLINUX_SYMBOL_STR(schedule_timeout) },
	{ 0x3507a132, __VMLINUX_SYMBOL_STR(_raw_spin_lock_irq) },
	{ 0xe329f057, __VMLINUX_SYMBOL_STR(input_free_device) },
	{ 0xd3a90590, __VMLINUX_SYMBOL_STR(input_mt_drop_unused) },
	{ 0x5f8f7c81, __VMLINUX_SYMBOL_STR(ps2_init) },
	{ 0x9e52ac12, __VMLINUX_SYMBOL_STR(prepare_to_wait_event) },
	{ 0x52e83340, __VMLINUX_SYMBOL_STR(serio_reconnect) },
	{ 0xe47f5fcd, __VMLINUX_SYMBOL_STR(__serio_register_port) },
	{ 0xada07e37, __VMLINUX_SYMBOL_STR(device_remove_groups) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0xa46f2f1b, __VMLINUX_SYMBOL_STR(kstrtouint) },
	{ 0x9d669763, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0x6becd18e, __VMLINUX_SYMBOL_STR(input_unregister_device) },
	{ 0x4743821d, __VMLINUX_SYMBOL_STR(serio_rescan) },
	{ 0xed87bf5b, __VMLINUX_SYMBOL_STR(input_mt_report_slot_state) },
	{ 0xfa426982, __VMLINUX_SYMBOL_STR(ps2_cmd_aborted) },
	{ 0x98dfb43, __VMLINUX_SYMBOL_STR(finish_wait) },
	{ 0x422e2e2c, __VMLINUX_SYMBOL_STR(input_mt_sync_frame) },
	{ 0xe0a9649c, __VMLINUX_SYMBOL_STR(dev_warn) },
	{ 0xefd6cf06, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr0) },
	{ 0xb5fe2443, __VMLINUX_SYMBOL_STR(i2c_client_type) },
	{ 0x676bbc0f, __VMLINUX_SYMBOL_STR(_set_bit) },
	{ 0xb2d48a2e, __VMLINUX_SYMBOL_STR(queue_work_on) },
	{ 0xb81960ca, __VMLINUX_SYMBOL_STR(snprintf) },
	{ 0x49ebacbd, __VMLINUX_SYMBOL_STR(_clear_bit) },
	{ 0xeeb25dc6, __VMLINUX_SYMBOL_STR(bus_unregister_notifier) },
	{ 0xd0962ef3, __VMLINUX_SYMBOL_STR(param_ops_uint) },
	{ 0x191278d6, __VMLINUX_SYMBOL_STR(ps2_begin_command) },
	{ 0x8c1888a7, __VMLINUX_SYMBOL_STR(input_mt_assign_slots) },
	{ 0xea55b950, __VMLINUX_SYMBOL_STR(input_allocate_device) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

MODULE_ALIAS("serio:ty01pr*id*ex*");
MODULE_ALIAS("serio:ty05pr*id*ex*");

MODULE_INFO(srcversion, "E173FABDE77C65BF338FB33");
