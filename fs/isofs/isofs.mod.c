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
	{ 0xd67f46e3, __VMLINUX_SYMBOL_STR(iget_failed) },
	{ 0x9bb7af9a, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0x12da5bb2, __VMLINUX_SYMBOL_STR(__kmalloc) },
	{ 0x5bcca338, __VMLINUX_SYMBOL_STR(sb_min_blocksize) },
	{ 0x107e5878, __VMLINUX_SYMBOL_STR(zlib_inflateEnd) },
	{ 0x34d6c080, __VMLINUX_SYMBOL_STR(unload_nls) },
	{ 0x5fc56a46, __VMLINUX_SYMBOL_STR(_raw_spin_unlock) },
	{ 0xf46411d2, __VMLINUX_SYMBOL_STR(generic_file_llseek) },
	{ 0xd6ee688f, __VMLINUX_SYMBOL_STR(vmalloc) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0x60a13e90, __VMLINUX_SYMBOL_STR(rcu_barrier) },
	{ 0x93b74d0b, __VMLINUX_SYMBOL_STR(page_address) },
	{ 0xff1c8748, __VMLINUX_SYMBOL_STR(iget5_locked) },
	{ 0xf4197145, __VMLINUX_SYMBOL_STR(seq_puts) },
	{ 0x8045b3a6, __VMLINUX_SYMBOL_STR(pagecache_get_page) },
	{ 0xacf4d843, __VMLINUX_SYMBOL_STR(match_strdup) },
	{ 0xbe629fab, __VMLINUX_SYMBOL_STR(ll_rw_block) },
	{ 0xcae232b, __VMLINUX_SYMBOL_STR(utf16s_to_utf8s) },
	{ 0x787e00e8, __VMLINUX_SYMBOL_STR(seq_printf) },
	{ 0x44e9a829, __VMLINUX_SYMBOL_STR(match_token) },
	{ 0xfb2f8a4, __VMLINUX_SYMBOL_STR(mktime64) },
	{ 0xe4ca3b4f, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0xe4a1722f, __VMLINUX_SYMBOL_STR(mount_bdev) },
	{ 0x85df9b6c, __VMLINUX_SYMBOL_STR(strsep) },
	{ 0x144f3fb5, __VMLINUX_SYMBOL_STR(page_symlink_inode_operations) },
	{ 0x13f9a917, __VMLINUX_SYMBOL_STR(generic_read_dir) },
	{ 0x999e8297, __VMLINUX_SYMBOL_STR(vfree) },
	{ 0xb9c6282e, __VMLINUX_SYMBOL_STR(__getblk_gfp) },
	{ 0x28aa6a67, __VMLINUX_SYMBOL_STR(call_rcu) },
	{ 0x91715312, __VMLINUX_SYMBOL_STR(sprintf) },
	{ 0x9b2f9b43, __VMLINUX_SYMBOL_STR(__alloc_pages_nodemask) },
	{ 0xe2d5255a, __VMLINUX_SYMBOL_STR(strcmp) },
	{ 0x22a089d3, __VMLINUX_SYMBOL_STR(mpage_readpages) },
	{ 0xfa2a45e, __VMLINUX_SYMBOL_STR(__memzero) },
	{ 0x6501fe23, __VMLINUX_SYMBOL_STR(mpage_readpage) },
	{ 0x11089ac7, __VMLINUX_SYMBOL_STR(_ctype) },
	{ 0x80d3cca5, __VMLINUX_SYMBOL_STR(__bread_gfp) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x91fd152, __VMLINUX_SYMBOL_STR(d_obtain_alias) },
	{ 0x71c90087, __VMLINUX_SYMBOL_STR(memcmp) },
	{ 0x1cfc7df2, __VMLINUX_SYMBOL_STR(kunmap) },
	{ 0xce5ac24f, __VMLINUX_SYMBOL_STR(zlib_inflate_workspacesize) },
	{ 0x84b183ae, __VMLINUX_SYMBOL_STR(strncmp) },
	{ 0xe5196a4f, __VMLINUX_SYMBOL_STR(kmem_cache_free) },
	{ 0x16305289, __VMLINUX_SYMBOL_STR(warn_slowpath_null) },
	{ 0x3c27b1b2, __VMLINUX_SYMBOL_STR(set_nlink) },
	{ 0xfd16e532, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0xc7799d31, __VMLINUX_SYMBOL_STR(__wait_on_buffer) },
	{ 0xdd27fa87, __VMLINUX_SYMBOL_STR(memchr) },
	{ 0x2064b3f4, __VMLINUX_SYMBOL_STR(generic_ro_fops) },
	{ 0x4e3567f7, __VMLINUX_SYMBOL_STR(match_int) },
	{ 0x2f296643, __VMLINUX_SYMBOL_STR(unlock_page) },
	{ 0xf8026f99, __VMLINUX_SYMBOL_STR(inode_nohighmem) },
	{ 0x548f3143, __VMLINUX_SYMBOL_STR(__brelse) },
	{ 0x581f98da, __VMLINUX_SYMBOL_STR(zlib_inflate) },
	{ 0x1fe8d5e0, __VMLINUX_SYMBOL_STR(inode_init_once) },
	{ 0x7171121c, __VMLINUX_SYMBOL_STR(overflowgid) },
	{ 0xe162e43f, __VMLINUX_SYMBOL_STR(kmem_cache_alloc) },
	{ 0x8160b19b, __VMLINUX_SYMBOL_STR(__free_pages) },
	{ 0x7cf3e84f, __VMLINUX_SYMBOL_STR(kmap) },
	{ 0x93fca811, __VMLINUX_SYMBOL_STR(__get_free_pages) },
	{ 0x78723ecb, __VMLINUX_SYMBOL_STR(load_nls) },
	{ 0x2aa0e4fc, __VMLINUX_SYMBOL_STR(strncasecmp) },
	{ 0x195cf831, __VMLINUX_SYMBOL_STR(unlock_new_inode) },
	{ 0xed31a941, __VMLINUX_SYMBOL_STR(kill_block_super) },
	{ 0x800fb92b, __VMLINUX_SYMBOL_STR(full_name_hash) },
	{ 0x9c0bd51f, __VMLINUX_SYMBOL_STR(_raw_spin_lock) },
	{ 0xd4e67e66, __VMLINUX_SYMBOL_STR(kmem_cache_create) },
	{ 0x499353d5, __VMLINUX_SYMBOL_STR(register_filesystem) },
	{ 0x35a88f28, __VMLINUX_SYMBOL_STR(zlib_inflateInit2) },
	{ 0x4302d0eb, __VMLINUX_SYMBOL_STR(free_pages) },
	{ 0x45ab8894, __VMLINUX_SYMBOL_STR(iput) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x9d669763, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0x4576d735, __VMLINUX_SYMBOL_STR(load_nls_default) },
	{ 0xcc7c8bde, __VMLINUX_SYMBOL_STR(d_splice_alias) },
	{ 0x7936ab7b, __VMLINUX_SYMBOL_STR(sync_filesystem) },
	{ 0x7bda30e, __VMLINUX_SYMBOL_STR(sb_set_blocksize) },
	{ 0xeaee7bb7, __VMLINUX_SYMBOL_STR(d_make_root) },
	{ 0x8b618d08, __VMLINUX_SYMBOL_STR(overflowuid) },
	{ 0x2025f1ee, __VMLINUX_SYMBOL_STR(ioctl_by_bdev) },
	{ 0xcf3caf91, __VMLINUX_SYMBOL_STR(unregister_filesystem) },
	{ 0x34eac06c, __VMLINUX_SYMBOL_STR(init_special_inode) },
	{ 0xefd6cf06, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr0) },
	{ 0x676bbc0f, __VMLINUX_SYMBOL_STR(_set_bit) },
	{ 0x49ebacbd, __VMLINUX_SYMBOL_STR(_clear_bit) },
	{ 0xe740d3fc, __VMLINUX_SYMBOL_STR(flush_dcache_page) },
	{ 0x80ea0e93, __VMLINUX_SYMBOL_STR(__put_page) },
	{ 0x42896ba0, __VMLINUX_SYMBOL_STR(generic_block_bmap) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "CC0EA1B84F57EA1DA03135D");
