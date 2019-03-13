#include <linux/module.h>
#include <linux/vermagic.h>
#include <linux/compiler.h>

MODULE_INFO(vermagic, VERMAGIC_STRING);
MODULE_INFO(name, KBUILD_MODNAME);

__visible struct module __this_module
__attribute__((section(".gnu.linkonce.this_module"))) = {
	.name = KBUILD_MODNAME,
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
	{ 0x82765831, __VMLINUX_SYMBOL_STR(up_read) },
	{ 0x5fc56a46, __VMLINUX_SYMBOL_STR(_raw_spin_unlock) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0xad73041f, __VMLINUX_SYMBOL_STR(autoremove_wake_function) },
	{ 0x4b0f323d, __VMLINUX_SYMBOL_STR(usb_kill_urb) },
	{ 0xe2fae716, __VMLINUX_SYMBOL_STR(kmemdup) },
	{ 0x5ee52022, __VMLINUX_SYMBOL_STR(init_timer_key) },
	{ 0xe4ca3b4f, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0x92bea327, __VMLINUX_SYMBOL_STR(snd_rawmidi_set_ops) },
	{ 0x526c3a6c, __VMLINUX_SYMBOL_STR(jiffies) },
	{ 0x37d5cdca, __VMLINUX_SYMBOL_STR(snd_rawmidi_new) },
	{ 0x2c39dcc0, __VMLINUX_SYMBOL_STR(down_read) },
	{ 0x93de854a, __VMLINUX_SYMBOL_STR(__init_waitqueue_head) },
	{ 0xfa2a45e, __VMLINUX_SYMBOL_STR(__memzero) },
	{ 0xfc982daa, __VMLINUX_SYMBOL_STR(del_timer_sync) },
	{ 0x5f754e5a, __VMLINUX_SYMBOL_STR(memset) },
	{ 0xba5b0987, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0x51d559d1, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_irqrestore) },
	{ 0x2aee63f4, __VMLINUX_SYMBOL_STR(__mutex_init) },
	{ 0x2330a439, __VMLINUX_SYMBOL_STR(usb_set_interface) },
	{ 0xba89c47, __VMLINUX_SYMBOL_STR(snd_ctl_notify) },
	{ 0xfaef0ed, __VMLINUX_SYMBOL_STR(__tasklet_schedule) },
	{ 0x68cdcae4, __VMLINUX_SYMBOL_STR(usb_control_msg) },
	{ 0x1a1431fd, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_irq) },
	{ 0xfd16e532, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0xecb25689, __VMLINUX_SYMBOL_STR(snd_rawmidi_transmit_peek) },
	{ 0x9545af6d, __VMLINUX_SYMBOL_STR(tasklet_init) },
	{ 0xa38caae0, __VMLINUX_SYMBOL_STR(mod_timer) },
	{ 0xe281f3bf, __VMLINUX_SYMBOL_STR(usb_free_coherent) },
	{ 0xd6008872, __VMLINUX_SYMBOL_STR(up_write) },
	{ 0x1c14057c, __VMLINUX_SYMBOL_STR(down_write) },
	{ 0x82072614, __VMLINUX_SYMBOL_STR(tasklet_kill) },
	{ 0x81b69e41, __VMLINUX_SYMBOL_STR(snd_ctl_enum_info) },
	{ 0xaf54c6ba, __VMLINUX_SYMBOL_STR(usb_submit_urb) },
	{ 0xe162e43f, __VMLINUX_SYMBOL_STR(kmem_cache_alloc) },
	{ 0x2d2e6c5, __VMLINUX_SYMBOL_STR(snd_rawmidi_transmit_ack) },
	{ 0x9b9316e3, __VMLINUX_SYMBOL_STR(usb_bulk_msg) },
	{ 0x8ddd8aad, __VMLINUX_SYMBOL_STR(schedule_timeout) },
	{ 0x3507a132, __VMLINUX_SYMBOL_STR(_raw_spin_lock_irq) },
	{ 0xb438e55d, __VMLINUX_SYMBOL_STR(snd_ctl_new1) },
	{ 0x9c0bd51f, __VMLINUX_SYMBOL_STR(_raw_spin_lock) },
	{ 0x598542b2, __VMLINUX_SYMBOL_STR(_raw_spin_lock_irqsave) },
	{ 0x4215a929, __VMLINUX_SYMBOL_STR(__wake_up) },
	{ 0x8a8a53d7, __VMLINUX_SYMBOL_STR(usb_autopm_get_interface_no_resume) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x9d669763, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0x6f5696fb, __VMLINUX_SYMBOL_STR(prepare_to_wait) },
	{ 0x98dfb43, __VMLINUX_SYMBOL_STR(finish_wait) },
	{ 0xe0a9649c, __VMLINUX_SYMBOL_STR(dev_warn) },
	{ 0xefd6cf06, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr0) },
	{ 0x676bbc0f, __VMLINUX_SYMBOL_STR(_set_bit) },
	{ 0xb81960ca, __VMLINUX_SYMBOL_STR(snprintf) },
	{ 0xca54fee, __VMLINUX_SYMBOL_STR(_test_and_set_bit) },
	{ 0x9a1ffcc8, __VMLINUX_SYMBOL_STR(usb_alloc_coherent) },
	{ 0x1a80222e, __VMLINUX_SYMBOL_STR(snd_ctl_add) },
	{ 0x57674fd7, __VMLINUX_SYMBOL_STR(__sw_hweight16) },
	{ 0x1c6dbd91, __VMLINUX_SYMBOL_STR(snd_rawmidi_transmit) },
	{ 0x49ebacbd, __VMLINUX_SYMBOL_STR(_clear_bit) },
	{ 0xb92ac735, __VMLINUX_SYMBOL_STR(snd_rawmidi_transmit_empty) },
	{ 0xe9e085df, __VMLINUX_SYMBOL_STR(usb_free_urb) },
	{ 0x504a02f2, __VMLINUX_SYMBOL_STR(__init_rwsem) },
	{ 0x1187aae3, __VMLINUX_SYMBOL_STR(snd_rawmidi_receive) },
	{ 0xac2a5a27, __VMLINUX_SYMBOL_STR(usb_alloc_urb) },
	{ 0xe914e41e, __VMLINUX_SYMBOL_STR(strcpy) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=snd-rawmidi";


MODULE_INFO(srcversion, "FF6DC3CC776CFEDFE72532C");
