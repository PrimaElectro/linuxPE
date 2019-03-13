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
	{ 0x53afe696, __VMLINUX_SYMBOL_STR(kmem_cache_destroy) },
	{ 0xe96a4cb0, __VMLINUX_SYMBOL_STR(simple_pin_fs) },
	{ 0x9bb7af9a, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0x12da5bb2, __VMLINUX_SYMBOL_STR(__kmalloc) },
	{ 0x9b388444, __VMLINUX_SYMBOL_STR(get_zeroed_page) },
	{ 0x82765831, __VMLINUX_SYMBOL_STR(up_read) },
	{ 0x528c709d, __VMLINUX_SYMBOL_STR(simple_read_from_buffer) },
	{ 0x5fc56a46, __VMLINUX_SYMBOL_STR(_raw_spin_unlock) },
	{ 0xf46411d2, __VMLINUX_SYMBOL_STR(generic_file_llseek) },
	{ 0xd6ee688f, __VMLINUX_SYMBOL_STR(vmalloc) },
	{ 0x188a3dfb, __VMLINUX_SYMBOL_STR(timespec_trunc) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0x97255bdf, __VMLINUX_SYMBOL_STR(strlen) },
	{ 0x507d2801, __VMLINUX_SYMBOL_STR(simple_write_end) },
	{ 0xb8b043f2, __VMLINUX_SYMBOL_STR(kfree_link) },
	{ 0xbf89a5d8, __VMLINUX_SYMBOL_STR(simple_release_fs) },
	{ 0x406faf5b, __VMLINUX_SYMBOL_STR(generic_delete_inode) },
	{ 0xcdc49e19, __VMLINUX_SYMBOL_STR(lockref_get) },
	{ 0xa37d9a99, __VMLINUX_SYMBOL_STR(dput) },
	{ 0xd46dc6e, __VMLINUX_SYMBOL_STR(inc_nlink) },
	{ 0x28cc25db, __VMLINUX_SYMBOL_STR(arm_copy_from_user) },
	{ 0xe4ca3b4f, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0xd9b7800c, __VMLINUX_SYMBOL_STR(mount_single) },
	{ 0x9761c7f8, __VMLINUX_SYMBOL_STR(d_add) },
	{ 0x13f9a917, __VMLINUX_SYMBOL_STR(generic_read_dir) },
	{ 0x999e8297, __VMLINUX_SYMBOL_STR(vfree) },
	{ 0xe2d5255a, __VMLINUX_SYMBOL_STR(strcmp) },
	{ 0x2c39dcc0, __VMLINUX_SYMBOL_STR(down_read) },
	{ 0xdcfc2e18, __VMLINUX_SYMBOL_STR(d_delete) },
	{ 0xfa2a45e, __VMLINUX_SYMBOL_STR(__memzero) },
	{ 0x20bab798, __VMLINUX_SYMBOL_STR(sysfs_remove_mount_point) },
	{ 0x33c362c4, __VMLINUX_SYMBOL_STR(kern_path) },
	{ 0x1dbb7489, __VMLINUX_SYMBOL_STR(kill_litter_super) },
	{ 0xef248101, __VMLINUX_SYMBOL_STR(simple_write_begin) },
	{ 0x2aee63f4, __VMLINUX_SYMBOL_STR(__mutex_init) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0xe5196a4f, __VMLINUX_SYMBOL_STR(kmem_cache_free) },
	{ 0x16305289, __VMLINUX_SYMBOL_STR(warn_slowpath_null) },
	{ 0xfd16e532, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0x7dc9077, __VMLINUX_SYMBOL_STR(simple_readpage) },
	{ 0xd6008872, __VMLINUX_SYMBOL_STR(up_write) },
	{ 0x1c14057c, __VMLINUX_SYMBOL_STR(down_write) },
	{ 0xccfd3c8c, __VMLINUX_SYMBOL_STR(module_put) },
	{ 0xc6cbbc89, __VMLINUX_SYMBOL_STR(capable) },
	{ 0xe162e43f, __VMLINUX_SYMBOL_STR(kmem_cache_alloc) },
	{ 0x1ba4f1e0, __VMLINUX_SYMBOL_STR(simple_unlink) },
	{ 0x1a171412, __VMLINUX_SYMBOL_STR(simple_setattr) },
	{ 0x93fca811, __VMLINUX_SYMBOL_STR(__get_free_pages) },
	{ 0x8b8059bd, __VMLINUX_SYMBOL_STR(in_group_p) },
	{ 0x11015863, __VMLINUX_SYMBOL_STR(d_drop) },
	{ 0x73ed1e1, __VMLINUX_SYMBOL_STR(path_put) },
	{ 0x9c0bd51f, __VMLINUX_SYMBOL_STR(_raw_spin_lock) },
	{ 0xd4e67e66, __VMLINUX_SYMBOL_STR(kmem_cache_create) },
	{ 0x499353d5, __VMLINUX_SYMBOL_STR(register_filesystem) },
	{ 0xc2c5b2b6, __VMLINUX_SYMBOL_STR(vsnprintf) },
	{ 0x4302d0eb, __VMLINUX_SYMBOL_STR(free_pages) },
	{ 0xcf36ded, __VMLINUX_SYMBOL_STR(sysfs_create_mount_point) },
	{ 0x44366cfc, __VMLINUX_SYMBOL_STR(simple_write_to_buffer) },
	{ 0xe953b21f, __VMLINUX_SYMBOL_STR(get_next_ino) },
	{ 0x13f8e898, __VMLINUX_SYMBOL_STR(kernel_kobj) },
	{ 0x45ab8894, __VMLINUX_SYMBOL_STR(iput) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x57d97bae, __VMLINUX_SYMBOL_STR(iunique) },
	{ 0x9d669763, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0xd839a7c2, __VMLINUX_SYMBOL_STR(current_time) },
	{ 0x3dfd0ec3, __VMLINUX_SYMBOL_STR(always_delete_dentry) },
	{ 0xeaee7bb7, __VMLINUX_SYMBOL_STR(d_make_root) },
	{ 0x628dc5de, __VMLINUX_SYMBOL_STR(simple_statfs) },
	{ 0x539f29d1, __VMLINUX_SYMBOL_STR(d_alloc_name) },
	{ 0xcf3caf91, __VMLINUX_SYMBOL_STR(unregister_filesystem) },
	{ 0xefd6cf06, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr0) },
	{ 0xb81960ca, __VMLINUX_SYMBOL_STR(snprintf) },
	{ 0xc5df4b0c, __VMLINUX_SYMBOL_STR(new_inode) },
	{ 0x704450f0, __VMLINUX_SYMBOL_STR(d_instantiate) },
	{ 0x7148530e, __VMLINUX_SYMBOL_STR(try_module_get) },
	{ 0x3f293ee4, __VMLINUX_SYMBOL_STR(simple_rmdir) },
	{ 0x54558adc, __VMLINUX_SYMBOL_STR(__d_drop) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "E0F9CBEA391757BDE48C14D");
