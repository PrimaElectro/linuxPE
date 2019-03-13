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
	{ 0x37156da2, __VMLINUX_SYMBOL_STR(fat_detach) },
	{ 0x556ce0d7, __VMLINUX_SYMBOL_STR(drop_nlink) },
	{ 0x7fe7deea, __VMLINUX_SYMBOL_STR(mark_buffer_dirty_inode) },
	{ 0xb9390c5e, __VMLINUX_SYMBOL_STR(__mark_inode_dirty) },
	{ 0x349cba85, __VMLINUX_SYMBOL_STR(strchr) },
	{ 0x96c1622c, __VMLINUX_SYMBOL_STR(fat_flush_inodes) },
	{ 0xd46dc6e, __VMLINUX_SYMBOL_STR(inc_nlink) },
	{ 0xe4ca3b4f, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0xe4a1722f, __VMLINUX_SYMBOL_STR(mount_bdev) },
	{ 0x6af5a1ce, __VMLINUX_SYMBOL_STR(fat_sync_inode) },
	{ 0x833dd699, __VMLINUX_SYMBOL_STR(fat_add_entries) },
	{ 0x4d99d117, __VMLINUX_SYMBOL_STR(fat_remove_entries) },
	{ 0x66f80d70, __VMLINUX_SYMBOL_STR(fat_alloc_new_dir) },
	{ 0xa5058ad4, __VMLINUX_SYMBOL_STR(fat_fill_super) },
	{ 0xf0bb5756, __VMLINUX_SYMBOL_STR(fat_build_inode) },
	{ 0x43cb00f9, __VMLINUX_SYMBOL_STR(fat_attach) },
	{ 0x71c90087, __VMLINUX_SYMBOL_STR(memcmp) },
	{ 0xfd16e532, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0x3c27b1b2, __VMLINUX_SYMBOL_STR(set_nlink) },
	{ 0x3c47b5b1, __VMLINUX_SYMBOL_STR(sync_dirty_buffer) },
	{ 0x178a18ef, __VMLINUX_SYMBOL_STR(fat_getattr) },
	{ 0x548f3143, __VMLINUX_SYMBOL_STR(__brelse) },
	{ 0xed31a941, __VMLINUX_SYMBOL_STR(kill_block_super) },
	{ 0x800fb92b, __VMLINUX_SYMBOL_STR(full_name_hash) },
	{ 0xd9eb9b94, __VMLINUX_SYMBOL_STR(fat_scan) },
	{ 0x499353d5, __VMLINUX_SYMBOL_STR(register_filesystem) },
	{ 0xb926426f, __VMLINUX_SYMBOL_STR(__fat_fs_error) },
	{ 0xd839a7c2, __VMLINUX_SYMBOL_STR(current_time) },
	{ 0xcc7c8bde, __VMLINUX_SYMBOL_STR(d_splice_alias) },
	{ 0xe7884131, __VMLINUX_SYMBOL_STR(fat_setattr) },
	{ 0x2e89a684, __VMLINUX_SYMBOL_STR(fat_free_clusters) },
	{ 0x9029cbd7, __VMLINUX_SYMBOL_STR(fat_get_dotdot_entry) },
	{ 0xcf3caf91, __VMLINUX_SYMBOL_STR(unregister_filesystem) },
	{ 0xefd6cf06, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr0) },
	{ 0x4c92347a, __VMLINUX_SYMBOL_STR(fat_time_unix2fat) },
	{ 0x59146561, __VMLINUX_SYMBOL_STR(fat_dir_empty) },
	{ 0x704450f0, __VMLINUX_SYMBOL_STR(d_instantiate) },
	{ 0x80adc968, __VMLINUX_SYMBOL_STR(clear_nlink) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "156BDF35F220B846773DE69");
