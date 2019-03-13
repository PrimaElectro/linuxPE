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
	{ 0x3eac4b3f, __VMLINUX_SYMBOL_STR(tty_port_tty_get) },
	{ 0x6d662533, __VMLINUX_SYMBOL_STR(_find_first_bit_le) },
	{ 0x2d3385d3, __VMLINUX_SYMBOL_STR(system_wq) },
	{ 0xd5d84e7b, __VMLINUX_SYMBOL_STR(bus_register) },
	{ 0x9bb7af9a, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0x12da5bb2, __VMLINUX_SYMBOL_STR(__kmalloc) },
	{ 0xf9efef2, __VMLINUX_SYMBOL_STR(driver_register) },
	{ 0x13d0adf7, __VMLINUX_SYMBOL_STR(__kfifo_out) },
	{ 0x93bf7c0e, __VMLINUX_SYMBOL_STR(idr_alloc_cmn) },
	{ 0x5fc56a46, __VMLINUX_SYMBOL_STR(_raw_spin_unlock) },
	{ 0xa6ed470a, __VMLINUX_SYMBOL_STR(single_open) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0xc068440e, __VMLINUX_SYMBOL_STR(__kfifo_alloc) },
	{ 0x7647726c, __VMLINUX_SYMBOL_STR(handle_sysrq) },
	{ 0x3ec83225, __VMLINUX_SYMBOL_STR(single_release) },
	{ 0xf4197145, __VMLINUX_SYMBOL_STR(seq_puts) },
	{ 0x38c9d41c, __VMLINUX_SYMBOL_STR(radix_tree_delete_item) },
	{ 0x1d51ab0a, __VMLINUX_SYMBOL_STR(tty_port_open) },
	{ 0x2a3aa678, __VMLINUX_SYMBOL_STR(_test_and_clear_bit) },
	{ 0x787e00e8, __VMLINUX_SYMBOL_STR(seq_printf) },
	{ 0x678a0de4, __VMLINUX_SYMBOL_STR(tty_port_hangup) },
	{ 0x4205ad24, __VMLINUX_SYMBOL_STR(cancel_work_sync) },
	{ 0x4b0f323d, __VMLINUX_SYMBOL_STR(usb_kill_urb) },
	{ 0xdcb11f66, __VMLINUX_SYMBOL_STR(tty_register_driver) },
	{ 0x68a660f7, __VMLINUX_SYMBOL_STR(usb_autopm_get_interface) },
	{ 0xe4ca3b4f, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0x581fccde, __VMLINUX_SYMBOL_STR(put_tty_driver) },
	{ 0x91715312, __VMLINUX_SYMBOL_STR(sprintf) },
	{ 0xf3bbb8f3, __VMLINUX_SYMBOL_STR(seq_read) },
	{ 0x526c3a6c, __VMLINUX_SYMBOL_STR(jiffies) },
	{ 0xf13cac3c, __VMLINUX_SYMBOL_STR(tty_set_operations) },
	{ 0xe707d823, __VMLINUX_SYMBOL_STR(__aeabi_uidiv) },
	{ 0x2c3d4339, __VMLINUX_SYMBOL_STR(__tty_insert_flip_char) },
	{ 0x6ff317, __VMLINUX_SYMBOL_STR(tty_port_close) },
	{ 0xd6387855, __VMLINUX_SYMBOL_STR(idr_destroy) },
	{ 0x2063bdd7, __VMLINUX_SYMBOL_STR(device_del) },
	{ 0xba5b0987, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0x51d559d1, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_irqrestore) },
	{ 0xa96e619, __VMLINUX_SYMBOL_STR(usb_deregister) },
	{ 0x2aee63f4, __VMLINUX_SYMBOL_STR(__mutex_init) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0xc80a0cf5, __VMLINUX_SYMBOL_STR(tty_ldisc_deref) },
	{ 0x7381e96a, __VMLINUX_SYMBOL_STR(driver_unregister) },
	{ 0xed0dd68e, __VMLINUX_SYMBOL_STR(usb_unpoison_urb) },
	{ 0xbdc3f86f, __VMLINUX_SYMBOL_STR(usb_poison_urb) },
	{ 0x975ddee6, __VMLINUX_SYMBOL_STR(seq_putc) },
	{ 0x1a1431fd, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_irq) },
	{ 0x7a243c30, __VMLINUX_SYMBOL_STR(tty_port_init) },
	{ 0xefb29043, __VMLINUX_SYMBOL_STR(tty_insert_flip_string_fixed_flag) },
	{ 0xb2ddf7c, __VMLINUX_SYMBOL_STR(tty_port_destroy) },
	{ 0xfd16e532, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0x9938cec2, __VMLINUX_SYMBOL_STR(tty_vhangup) },
	{ 0xde5ef415, __VMLINUX_SYMBOL_STR(tty_ldisc_ref) },
	{ 0x1c6d8cda, __VMLINUX_SYMBOL_STR(device_add) },
	{ 0xb91fd5ae, __VMLINUX_SYMBOL_STR(bus_unregister) },
	{ 0xfe487975, __VMLINUX_SYMBOL_STR(init_wait_entry) },
	{ 0x9b3a2bb8, __VMLINUX_SYMBOL_STR(usb_store_new_id) },
	{ 0x840b5e58, __VMLINUX_SYMBOL_STR(usb_match_id) },
	{ 0xd528ce82, __VMLINUX_SYMBOL_STR(tty_register_device) },
	{ 0x7dc63fde, __VMLINUX_SYMBOL_STR(tty_port_tty_wakeup) },
	{ 0xccfd3c8c, __VMLINUX_SYMBOL_STR(module_put) },
	{ 0xd5a08b93, __VMLINUX_SYMBOL_STR(tty_unregister_device) },
	{ 0xbd22ae2d, __VMLINUX_SYMBOL_STR(_dev_info) },
	{ 0xaf54c6ba, __VMLINUX_SYMBOL_STR(usb_submit_urb) },
	{ 0xe162e43f, __VMLINUX_SYMBOL_STR(kmem_cache_alloc) },
	{ 0x67b27ec1, __VMLINUX_SYMBOL_STR(tty_std_termios) },
	{ 0xbf49b4c, __VMLINUX_SYMBOL_STR(usb_get_dev) },
	{ 0x2324f5c4, __VMLINUX_SYMBOL_STR(put_device) },
	{ 0x77f8bb7c, __VMLINUX_SYMBOL_STR(usb_put_dev) },
	{ 0x1000e51, __VMLINUX_SYMBOL_STR(schedule) },
	{ 0x3507a132, __VMLINUX_SYMBOL_STR(_raw_spin_lock_irq) },
	{ 0x143256b7, __VMLINUX_SYMBOL_STR(tty_port_install) },
	{ 0x9c0bd51f, __VMLINUX_SYMBOL_STR(_raw_spin_lock) },
	{ 0x1c07ff17, __VMLINUX_SYMBOL_STR(usb_get_intf) },
	{ 0x598542b2, __VMLINUX_SYMBOL_STR(_raw_spin_lock_irqsave) },
	{ 0x30e74134, __VMLINUX_SYMBOL_STR(tty_termios_copy_hw) },
	{ 0xdb760f52, __VMLINUX_SYMBOL_STR(__kfifo_free) },
	{ 0xc6370d29, __VMLINUX_SYMBOL_STR(tty_unregister_driver) },
	{ 0xc0070222, __VMLINUX_SYMBOL_STR(tty_hangup) },
	{ 0x694be42a, __VMLINUX_SYMBOL_STR(usb_show_dynids) },
	{ 0x4215a929, __VMLINUX_SYMBOL_STR(__wake_up) },
	{ 0x9e52ac12, __VMLINUX_SYMBOL_STR(prepare_to_wait_event) },
	{ 0xa518ef49, __VMLINUX_SYMBOL_STR(__tty_alloc_driver) },
	{ 0x19a304ba, __VMLINUX_SYMBOL_STR(usb_disabled) },
	{ 0x1e047854, __VMLINUX_SYMBOL_STR(warn_slowpath_fmt) },
	{ 0x409873e3, __VMLINUX_SYMBOL_STR(tty_termios_baud_rate) },
	{ 0x66ca8ba4, __VMLINUX_SYMBOL_STR(seq_lseek) },
	{ 0x54496b4, __VMLINUX_SYMBOL_STR(schedule_timeout_interruptible) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x437f72a4, __VMLINUX_SYMBOL_STR(device_initialize) },
	{ 0xf1a56798, __VMLINUX_SYMBOL_STR(usb_match_one_id) },
	{ 0x28b23b45, __VMLINUX_SYMBOL_STR(usb_register_driver) },
	{ 0x55586465, __VMLINUX_SYMBOL_STR(tty_kref_put) },
	{ 0x98dfb43, __VMLINUX_SYMBOL_STR(finish_wait) },
	{ 0xb86d6479, __VMLINUX_SYMBOL_STR(radix_tree_lookup) },
	{ 0xe0a9649c, __VMLINUX_SYMBOL_STR(dev_warn) },
	{ 0x6bc16fce, __VMLINUX_SYMBOL_STR(driver_attach) },
	{ 0xa31c8d00, __VMLINUX_SYMBOL_STR(tty_flip_buffer_push) },
	{ 0xefd6cf06, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr0) },
	{ 0xf23fcb99, __VMLINUX_SYMBOL_STR(__kfifo_in) },
	{ 0x676bbc0f, __VMLINUX_SYMBOL_STR(_set_bit) },
	{ 0xb2d48a2e, __VMLINUX_SYMBOL_STR(queue_work_on) },
	{ 0xb81960ca, __VMLINUX_SYMBOL_STR(snprintf) },
	{ 0xca54fee, __VMLINUX_SYMBOL_STR(_test_and_set_bit) },
	{ 0x178e1fff, __VMLINUX_SYMBOL_STR(param_ops_ushort) },
	{ 0x3025ce47, __VMLINUX_SYMBOL_STR(dev_set_name) },
	{ 0x49ebacbd, __VMLINUX_SYMBOL_STR(_clear_bit) },
	{ 0xe9e085df, __VMLINUX_SYMBOL_STR(usb_free_urb) },
	{ 0x7148530e, __VMLINUX_SYMBOL_STR(try_module_get) },
	{ 0xcdb96750, __VMLINUX_SYMBOL_STR(usb_autopm_put_interface) },
	{ 0xac2a5a27, __VMLINUX_SYMBOL_STR(usb_alloc_urb) },
	{ 0x8ed89c6e, __VMLINUX_SYMBOL_STR(usb_put_intf) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "DD0BBA6D091CAC0A0AC1DD8");
