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
	{ 0x9bb7af9a, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0x12da5bb2, __VMLINUX_SYMBOL_STR(__kmalloc) },
	{ 0xf9a482f9, __VMLINUX_SYMBOL_STR(msleep) },
	{ 0x85d0b380, __VMLINUX_SYMBOL_STR(put_pid) },
	{ 0x1ec1ab21, __VMLINUX_SYMBOL_STR(snd_register_device) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0x768d116f, __VMLINUX_SYMBOL_STR(snd_card_file_remove) },
	{ 0x301348ce, __VMLINUX_SYMBOL_STR(pid_vnr) },
	{ 0xb5a57d8a, __VMLINUX_SYMBOL_STR(remove_wait_queue) },
	{ 0xb2183b32, __VMLINUX_SYMBOL_STR(snd_device_initialize) },
	{ 0xae173d02, __VMLINUX_SYMBOL_STR(no_llseek) },
	{ 0xcbea45bf, __VMLINUX_SYMBOL_STR(snd_info_create_card_entry) },
	{ 0xf7802486, __VMLINUX_SYMBOL_STR(__aeabi_uidivmod) },
	{ 0xb2e5ae4a, __VMLINUX_SYMBOL_STR(snd_lookup_minor_data) },
	{ 0x787e00e8, __VMLINUX_SYMBOL_STR(seq_printf) },
	{ 0x4205ad24, __VMLINUX_SYMBOL_STR(cancel_work_sync) },
	{ 0x353e3fa5, __VMLINUX_SYMBOL_STR(__get_user_4) },
	{ 0x28cc25db, __VMLINUX_SYMBOL_STR(arm_copy_from_user) },
	{ 0xe4ca3b4f, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0x91715312, __VMLINUX_SYMBOL_STR(sprintf) },
	{ 0x18c5897b, __VMLINUX_SYMBOL_STR(nonseekable_open) },
	{ 0xf4fa543b, __VMLINUX_SYMBOL_STR(arm_copy_to_user) },
	{ 0x397daf52, __VMLINUX_SYMBOL_STR(snd_ctl_unregister_ioctl) },
	{ 0x93de854a, __VMLINUX_SYMBOL_STR(__init_waitqueue_head) },
	{ 0xaad8c7d6, __VMLINUX_SYMBOL_STR(default_wake_function) },
	{ 0xfa2a45e, __VMLINUX_SYMBOL_STR(__memzero) },
	{ 0x4085bb22, __VMLINUX_SYMBOL_STR(snd_device_new) },
	{ 0xba5b0987, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0x51d559d1, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_irqrestore) },
	{ 0x2aee63f4, __VMLINUX_SYMBOL_STR(__mutex_init) },
	{ 0x2ee8025b, __VMLINUX_SYMBOL_STR(snd_unregister_device) },
	{ 0x1a1431fd, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_irq) },
	{ 0x73e20c1c, __VMLINUX_SYMBOL_STR(strlcpy) },
	{ 0xfd16e532, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0x8f595b11, __VMLINUX_SYMBOL_STR(snd_major) },
	{ 0xfe487975, __VMLINUX_SYMBOL_STR(init_wait_entry) },
	{ 0xccfd3c8c, __VMLINUX_SYMBOL_STR(module_put) },
	{ 0xe162e43f, __VMLINUX_SYMBOL_STR(kmem_cache_alloc) },
	{ 0xbc10dd97, __VMLINUX_SYMBOL_STR(__put_user_4) },
	{ 0x623a4537, __VMLINUX_SYMBOL_STR(snd_card_file_add) },
	{ 0x783cc712, __VMLINUX_SYMBOL_STR(snd_ctl_register_ioctl) },
	{ 0x2324f5c4, __VMLINUX_SYMBOL_STR(put_device) },
	{ 0x1000e51, __VMLINUX_SYMBOL_STR(schedule) },
	{ 0x8ddd8aad, __VMLINUX_SYMBOL_STR(schedule_timeout) },
	{ 0x3507a132, __VMLINUX_SYMBOL_STR(_raw_spin_lock_irq) },
	{ 0x598542b2, __VMLINUX_SYMBOL_STR(_raw_spin_lock_irqsave) },
	{ 0x4215a929, __VMLINUX_SYMBOL_STR(__wake_up) },
	{ 0x9e52ac12, __VMLINUX_SYMBOL_STR(prepare_to_wait_event) },
	{ 0xdd31568b, __VMLINUX_SYMBOL_STR(add_wait_queue) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x9d669763, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0xd966718b, __VMLINUX_SYMBOL_STR(snd_info_free_entry) },
	{ 0x98dfb43, __VMLINUX_SYMBOL_STR(finish_wait) },
	{ 0xe0a9649c, __VMLINUX_SYMBOL_STR(dev_warn) },
	{ 0xdaa99679, __VMLINUX_SYMBOL_STR(snd_ctl_get_preferred_subdevice) },
	{ 0xefd6cf06, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr0) },
	{ 0xb2d48a2e, __VMLINUX_SYMBOL_STR(queue_work_on) },
	{ 0x3025ce47, __VMLINUX_SYMBOL_STR(dev_set_name) },
	{ 0x334d49e, __VMLINUX_SYMBOL_STR(snd_info_register) },
	{ 0x7148530e, __VMLINUX_SYMBOL_STR(try_module_get) },
	{ 0xe914e41e, __VMLINUX_SYMBOL_STR(strcpy) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "94B269986967098C22F254A");
