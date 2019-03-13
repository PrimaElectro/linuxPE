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
	{ 0x5fc56a46, __VMLINUX_SYMBOL_STR(_raw_spin_unlock) },
	{ 0x88a577ab, __VMLINUX_SYMBOL_STR(usb_ep_disable) },
	{ 0xb9a38379, __VMLINUX_SYMBOL_STR(usb_ep_enable) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0x92215052, __VMLINUX_SYMBOL_STR(usb_ep_queue) },
	{ 0xae173d02, __VMLINUX_SYMBOL_STR(no_llseek) },
	{ 0x406faf5b, __VMLINUX_SYMBOL_STR(generic_delete_inode) },
	{ 0xa37d9a99, __VMLINUX_SYMBOL_STR(dput) },
	{ 0x9e0150f5, __VMLINUX_SYMBOL_STR(dup_iter) },
	{ 0x28cc25db, __VMLINUX_SYMBOL_STR(arm_copy_from_user) },
	{ 0xe4ca3b4f, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0xd9b7800c, __VMLINUX_SYMBOL_STR(mount_single) },
	{ 0x9761c7f8, __VMLINUX_SYMBOL_STR(d_add) },
	{ 0xf749fec9, __VMLINUX_SYMBOL_STR(usb_ep_set_halt) },
	{ 0xaa11e144, __VMLINUX_SYMBOL_STR(usb_gadget_unregister_driver) },
	{ 0x5063ff0f, __VMLINUX_SYMBOL_STR(usb_ep_alloc_request) },
	{ 0x50b88f41, __VMLINUX_SYMBOL_STR(usb_get_gadget_udc_name) },
	{ 0xf4fa543b, __VMLINUX_SYMBOL_STR(arm_copy_to_user) },
	{ 0xe4f57cc5, __VMLINUX_SYMBOL_STR(usb_gadget_set_state) },
	{ 0x7f23a6b3, __VMLINUX_SYMBOL_STR(mutex_trylock) },
	{ 0xe2d5255a, __VMLINUX_SYMBOL_STR(strcmp) },
	{ 0xdcfc2e18, __VMLINUX_SYMBOL_STR(d_delete) },
	{ 0x93de854a, __VMLINUX_SYMBOL_STR(__init_waitqueue_head) },
	{ 0xfa2a45e, __VMLINUX_SYMBOL_STR(__memzero) },
	{ 0x1dbb7489, __VMLINUX_SYMBOL_STR(kill_litter_super) },
	{ 0x51d559d1, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_irqrestore) },
	{ 0x6c49fc55, __VMLINUX_SYMBOL_STR(mutex_lock_interruptible) },
	{ 0x2aee63f4, __VMLINUX_SYMBOL_STR(__mutex_init) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x328a05f1, __VMLINUX_SYMBOL_STR(strncpy) },
	{ 0x1d5e9f67, __VMLINUX_SYMBOL_STR(fasync_helper) },
	{ 0x1a1431fd, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_irq) },
	{ 0xfd16e532, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0xcdfbfc66, __VMLINUX_SYMBOL_STR(usb_ep_clear_halt) },
	{ 0x36a73537, __VMLINUX_SYMBOL_STR(use_mm) },
	{ 0xd6008872, __VMLINUX_SYMBOL_STR(up_write) },
	{ 0x1c14057c, __VMLINUX_SYMBOL_STR(down_write) },
	{ 0xfe487975, __VMLINUX_SYMBOL_STR(init_wait_entry) },
	{ 0x41df1ae6, __VMLINUX_SYMBOL_STR(usb_ep_dequeue) },
	{ 0xe162e43f, __VMLINUX_SYMBOL_STR(kmem_cache_alloc) },
	{ 0x3e9cb38c, __VMLINUX_SYMBOL_STR(usb_gadget_vbus_draw) },
	{ 0x359bc5ec, __VMLINUX_SYMBOL_STR(simple_dir_operations) },
	{ 0x12a38747, __VMLINUX_SYMBOL_STR(usleep_range) },
	{ 0x1000e51, __VMLINUX_SYMBOL_STR(schedule) },
	{ 0x3507a132, __VMLINUX_SYMBOL_STR(_raw_spin_lock_irq) },
	{ 0x20395db4, __VMLINUX_SYMBOL_STR(_copy_from_iter_full) },
	{ 0xe4709b37, __VMLINUX_SYMBOL_STR(usb_ep_free_request) },
	{ 0x9c0bd51f, __VMLINUX_SYMBOL_STR(_raw_spin_lock) },
	{ 0x598542b2, __VMLINUX_SYMBOL_STR(_raw_spin_lock_irqsave) },
	{ 0xa4bc1f6, __VMLINUX_SYMBOL_STR(kiocb_set_cancel_fn) },
	{ 0x499353d5, __VMLINUX_SYMBOL_STR(register_filesystem) },
	{ 0x4215a929, __VMLINUX_SYMBOL_STR(__wake_up) },
	{ 0x9e52ac12, __VMLINUX_SYMBOL_STR(prepare_to_wait_event) },
	{ 0x56e3743, __VMLINUX_SYMBOL_STR(usb_gadget_probe_driver) },
	{ 0xe953b21f, __VMLINUX_SYMBOL_STR(get_next_ino) },
	{ 0x8a6f1d5e, __VMLINUX_SYMBOL_STR(usb_ep_fifo_status) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0xd839a7c2, __VMLINUX_SYMBOL_STR(current_time) },
	{ 0xeaee7bb7, __VMLINUX_SYMBOL_STR(d_make_root) },
	{ 0xd9d679af, __VMLINUX_SYMBOL_STR(kill_fasync) },
	{ 0x628dc5de, __VMLINUX_SYMBOL_STR(simple_statfs) },
	{ 0x539f29d1, __VMLINUX_SYMBOL_STR(d_alloc_name) },
	{ 0x98dfb43, __VMLINUX_SYMBOL_STR(finish_wait) },
	{ 0xcf3caf91, __VMLINUX_SYMBOL_STR(unregister_filesystem) },
	{ 0xefd6cf06, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr0) },
	{ 0xe2e8065e, __VMLINUX_SYMBOL_STR(memdup_user) },
	{ 0xb2d48a2e, __VMLINUX_SYMBOL_STR(queue_work_on) },
	{ 0x689e06e, __VMLINUX_SYMBOL_STR(complete) },
	{ 0xc5df4b0c, __VMLINUX_SYMBOL_STR(new_inode) },
	{ 0x99bb8806, __VMLINUX_SYMBOL_STR(memmove) },
	{ 0xf3ef8e8, __VMLINUX_SYMBOL_STR(unuse_mm) },
	{ 0xfa1aaaa7, __VMLINUX_SYMBOL_STR(usb_ep_fifo_flush) },
	{ 0x3592c476, __VMLINUX_SYMBOL_STR(simple_dir_inode_operations) },
	{ 0xd0962ef3, __VMLINUX_SYMBOL_STR(param_ops_uint) },
	{ 0xc924f9e9, __VMLINUX_SYMBOL_STR(_copy_to_iter) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "3122A7BB6A49E80E0B9E1EC");
