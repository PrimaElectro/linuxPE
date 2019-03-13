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
	{ 0x349cba85, __VMLINUX_SYMBOL_STR(strchr) },
	{ 0x88a577ab, __VMLINUX_SYMBOL_STR(usb_ep_disable) },
	{ 0xb9a38379, __VMLINUX_SYMBOL_STR(usb_ep_enable) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0xdf0f75c6, __VMLINUX_SYMBOL_STR(eventfd_signal) },
	{ 0x97255bdf, __VMLINUX_SYMBOL_STR(strlen) },
	{ 0x43a53735, __VMLINUX_SYMBOL_STR(__alloc_workqueue_key) },
	{ 0x92215052, __VMLINUX_SYMBOL_STR(usb_ep_queue) },
	{ 0xad73041f, __VMLINUX_SYMBOL_STR(autoremove_wake_function) },
	{ 0xae173d02, __VMLINUX_SYMBOL_STR(no_llseek) },
	{ 0x406faf5b, __VMLINUX_SYMBOL_STR(generic_delete_inode) },
	{ 0xa37d9a99, __VMLINUX_SYMBOL_STR(dput) },
	{ 0x2a3aa678, __VMLINUX_SYMBOL_STR(_test_and_clear_bit) },
	{ 0x9e0150f5, __VMLINUX_SYMBOL_STR(dup_iter) },
	{ 0x28cc25db, __VMLINUX_SYMBOL_STR(arm_copy_from_user) },
	{ 0xe4ca3b4f, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0x9761c7f8, __VMLINUX_SYMBOL_STR(d_add) },
	{ 0xf749fec9, __VMLINUX_SYMBOL_STR(usb_ep_set_halt) },
	{ 0x91bd5afc, __VMLINUX_SYMBOL_STR(mount_nodev) },
	{ 0x5063ff0f, __VMLINUX_SYMBOL_STR(usb_ep_alloc_request) },
	{ 0x91715312, __VMLINUX_SYMBOL_STR(sprintf) },
	{ 0x80479cc6, __VMLINUX_SYMBOL_STR(usb_function_unregister) },
	{ 0xc499ae1e, __VMLINUX_SYMBOL_STR(kstrdup) },
	{ 0xf4fa543b, __VMLINUX_SYMBOL_STR(arm_copy_to_user) },
	{ 0x7f23a6b3, __VMLINUX_SYMBOL_STR(mutex_trylock) },
	{ 0xe2d5255a, __VMLINUX_SYMBOL_STR(strcmp) },
	{ 0xdcfc2e18, __VMLINUX_SYMBOL_STR(d_delete) },
	{ 0x93de854a, __VMLINUX_SYMBOL_STR(__init_waitqueue_head) },
	{ 0xfa2a45e, __VMLINUX_SYMBOL_STR(__memzero) },
	{ 0x5f754e5a, __VMLINUX_SYMBOL_STR(memset) },
	{ 0x1dbb7489, __VMLINUX_SYMBOL_STR(kill_litter_super) },
	{ 0x10e0b46b, __VMLINUX_SYMBOL_STR(usb_put_function_instance) },
	{ 0x51d559d1, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_irqrestore) },
	{ 0x6c49fc55, __VMLINUX_SYMBOL_STR(mutex_lock_interruptible) },
	{ 0x2aee63f4, __VMLINUX_SYMBOL_STR(__mutex_init) },
	{ 0x6baed2bb, __VMLINUX_SYMBOL_STR(unregister_gadget_item) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x71c90087, __VMLINUX_SYMBOL_STR(memcmp) },
	{ 0x8ee04abd, __VMLINUX_SYMBOL_STR(usb_ep_autoconfig) },
	{ 0xd67364f7, __VMLINUX_SYMBOL_STR(eventfd_ctx_fdget) },
	{ 0x40100300, __VMLINUX_SYMBOL_STR(wait_for_completion_interruptible) },
	{ 0x1a1431fd, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_irq) },
	{ 0x73e20c1c, __VMLINUX_SYMBOL_STR(strlcpy) },
	{ 0x16305289, __VMLINUX_SYMBOL_STR(warn_slowpath_null) },
	{ 0xfd16e532, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0x8c03d20c, __VMLINUX_SYMBOL_STR(destroy_workqueue) },
	{ 0x91402c8e, __VMLINUX_SYMBOL_STR(do_wait_intr_irq) },
	{ 0x6f7e5fac, __VMLINUX_SYMBOL_STR(config_group_init_type_name) },
	{ 0x49302171, __VMLINUX_SYMBOL_STR(__wake_up_locked) },
	{ 0xcdfbfc66, __VMLINUX_SYMBOL_STR(usb_ep_clear_halt) },
	{ 0x36a73537, __VMLINUX_SYMBOL_STR(use_mm) },
	{ 0xfe487975, __VMLINUX_SYMBOL_STR(init_wait_entry) },
	{ 0x5bc797be, __VMLINUX_SYMBOL_STR(usb_function_register) },
	{ 0x41df1ae6, __VMLINUX_SYMBOL_STR(usb_ep_dequeue) },
	{ 0xe162e43f, __VMLINUX_SYMBOL_STR(kmem_cache_alloc) },
	{ 0xd9ce8f0c, __VMLINUX_SYMBOL_STR(strnlen) },
	{ 0x359bc5ec, __VMLINUX_SYMBOL_STR(simple_dir_operations) },
	{ 0x1000e51, __VMLINUX_SYMBOL_STR(schedule) },
	{ 0x3507a132, __VMLINUX_SYMBOL_STR(_raw_spin_lock_irq) },
	{ 0x20395db4, __VMLINUX_SYMBOL_STR(_copy_from_iter_full) },
	{ 0x996bdb64, __VMLINUX_SYMBOL_STR(_kstrtoul) },
	{ 0x3777435d, __VMLINUX_SYMBOL_STR(config_ep_by_speed) },
	{ 0xe4709b37, __VMLINUX_SYMBOL_STR(usb_ep_free_request) },
	{ 0x598542b2, __VMLINUX_SYMBOL_STR(_raw_spin_lock_irqsave) },
	{ 0xa4bc1f6, __VMLINUX_SYMBOL_STR(kiocb_set_cancel_fn) },
	{ 0x499353d5, __VMLINUX_SYMBOL_STR(register_filesystem) },
	{ 0x4215a929, __VMLINUX_SYMBOL_STR(__wake_up) },
	{ 0x9e52ac12, __VMLINUX_SYMBOL_STR(prepare_to_wait_event) },
	{ 0x1e047854, __VMLINUX_SYMBOL_STR(warn_slowpath_fmt) },
	{ 0xe953b21f, __VMLINUX_SYMBOL_STR(get_next_ino) },
	{ 0x8a6f1d5e, __VMLINUX_SYMBOL_STR(usb_ep_fifo_status) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x9d669763, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0xd839a7c2, __VMLINUX_SYMBOL_STR(current_time) },
	{ 0xeaee7bb7, __VMLINUX_SYMBOL_STR(d_make_root) },
	{ 0x628dc5de, __VMLINUX_SYMBOL_STR(simple_statfs) },
	{ 0x539f29d1, __VMLINUX_SYMBOL_STR(d_alloc_name) },
	{ 0x98dfb43, __VMLINUX_SYMBOL_STR(finish_wait) },
	{ 0xa9bbea7a, __VMLINUX_SYMBOL_STR(usb_interface_id) },
	{ 0xcf3caf91, __VMLINUX_SYMBOL_STR(unregister_filesystem) },
	{ 0xefd6cf06, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr0) },
	{ 0x676bbc0f, __VMLINUX_SYMBOL_STR(_set_bit) },
	{ 0xb2d48a2e, __VMLINUX_SYMBOL_STR(queue_work_on) },
	{ 0x689e06e, __VMLINUX_SYMBOL_STR(complete) },
	{ 0xc5df4b0c, __VMLINUX_SYMBOL_STR(new_inode) },
	{ 0xca54fee, __VMLINUX_SYMBOL_STR(_test_and_set_bit) },
	{ 0x941f2aaa, __VMLINUX_SYMBOL_STR(eventfd_ctx_put) },
	{ 0x99bb8806, __VMLINUX_SYMBOL_STR(memmove) },
	{ 0xf3ef8e8, __VMLINUX_SYMBOL_STR(unuse_mm) },
	{ 0xfa1aaaa7, __VMLINUX_SYMBOL_STR(usb_ep_fifo_flush) },
	{ 0x49ebacbd, __VMLINUX_SYMBOL_STR(_clear_bit) },
	{ 0x3592c476, __VMLINUX_SYMBOL_STR(simple_dir_inode_operations) },
	{ 0x1b012dcd, __VMLINUX_SYMBOL_STR(usb_string_ids_n) },
	{ 0xc924f9e9, __VMLINUX_SYMBOL_STR(_copy_to_iter) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=libcomposite,configfs";


MODULE_INFO(srcversion, "E17A0FC6C36A653B9ABE142");
