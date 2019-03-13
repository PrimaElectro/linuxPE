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
	{ 0x1dbb7489, __VMLINUX_SYMBOL_STR(kill_litter_super) },
	{ 0xd60fcdf2, __VMLINUX_SYMBOL_STR(noop_llseek) },
	{ 0x430ec4b0, __VMLINUX_SYMBOL_STR(default_llseek) },
	{ 0x628dc5de, __VMLINUX_SYMBOL_STR(simple_statfs) },
	{ 0xcf3caf91, __VMLINUX_SYMBOL_STR(unregister_filesystem) },
	{ 0x3ce5f42, __VMLINUX_SYMBOL_STR(unregister_binfmt) },
	{ 0x8901fb89, __VMLINUX_SYMBOL_STR(__register_binfmt) },
	{ 0x499353d5, __VMLINUX_SYMBOL_STR(register_filesystem) },
	{ 0x45ab8894, __VMLINUX_SYMBOL_STR(iput) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x704450f0, __VMLINUX_SYMBOL_STR(d_instantiate) },
	{ 0xe96a4cb0, __VMLINUX_SYMBOL_STR(simple_pin_fs) },
	{ 0xd839a7c2, __VMLINUX_SYMBOL_STR(current_time) },
	{ 0xe953b21f, __VMLINUX_SYMBOL_STR(get_next_ino) },
	{ 0xc5df4b0c, __VMLINUX_SYMBOL_STR(new_inode) },
	{ 0xb55b45a2, __VMLINUX_SYMBOL_STR(lookup_one_len) },
	{ 0xc8339e24, __VMLINUX_SYMBOL_STR(string_unescape) },
	{ 0x373db350, __VMLINUX_SYMBOL_STR(kstrtoint) },
	{ 0x349cba85, __VMLINUX_SYMBOL_STR(strchr) },
	{ 0x5f754e5a, __VMLINUX_SYMBOL_STR(memset) },
	{ 0x12da5bb2, __VMLINUX_SYMBOL_STR(__kmalloc) },
	{ 0x676bbc0f, __VMLINUX_SYMBOL_STR(_set_bit) },
	{ 0xd6008872, __VMLINUX_SYMBOL_STR(up_write) },
	{ 0x1c14057c, __VMLINUX_SYMBOL_STR(down_write) },
	{ 0x49ebacbd, __VMLINUX_SYMBOL_STR(_clear_bit) },
	{ 0x4302d0eb, __VMLINUX_SYMBOL_STR(free_pages) },
	{ 0x97255bdf, __VMLINUX_SYMBOL_STR(strlen) },
	{ 0xdc1a78c, __VMLINUX_SYMBOL_STR(bin2hex) },
	{ 0x91715312, __VMLINUX_SYMBOL_STR(sprintf) },
	{ 0x93fca811, __VMLINUX_SYMBOL_STR(__get_free_pages) },
	{ 0x528c709d, __VMLINUX_SYMBOL_STR(simple_read_from_buffer) },
	{ 0xbf89a5d8, __VMLINUX_SYMBOL_STR(simple_release_fs) },
	{ 0x11015863, __VMLINUX_SYMBOL_STR(d_drop) },
	{ 0x556ce0d7, __VMLINUX_SYMBOL_STR(drop_nlink) },
	{ 0xdfd61436, __VMLINUX_SYMBOL_STR(_raw_write_unlock) },
	{ 0xd100acbd, __VMLINUX_SYMBOL_STR(_raw_write_lock) },
	{ 0x28cc25db, __VMLINUX_SYMBOL_STR(arm_copy_from_user) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x5d7236c8, __VMLINUX_SYMBOL_STR(clear_inode) },
	{ 0x80078c0, __VMLINUX_SYMBOL_STR(filp_close) },
	{ 0xa3d30758, __VMLINUX_SYMBOL_STR(simple_fill_super) },
	{ 0xd9b7800c, __VMLINUX_SYMBOL_STR(mount_single) },
	{ 0x70a89387, __VMLINUX_SYMBOL_STR(filp_clone_open) },
	{ 0x17f0291e, __VMLINUX_SYMBOL_STR(kernel_read) },
	{ 0xfa2a45e, __VMLINUX_SYMBOL_STR(__memzero) },
	{ 0xdb8d6a76, __VMLINUX_SYMBOL_STR(would_dump) },
	{ 0xe33453a9, __VMLINUX_SYMBOL_STR(fd_install) },
	{ 0xa843805a, __VMLINUX_SYMBOL_STR(get_unused_fd_flags) },
	{ 0xa37d9a99, __VMLINUX_SYMBOL_STR(dput) },
	{ 0xdcb0349b, __VMLINUX_SYMBOL_STR(sys_close) },
	{ 0xb48e3c70, __VMLINUX_SYMBOL_STR(search_binary_handler) },
	{ 0xafee8047, __VMLINUX_SYMBOL_STR(prepare_binprm) },
	{ 0x9befe413, __VMLINUX_SYMBOL_STR(open_exec) },
	{ 0x6ed4657f, __VMLINUX_SYMBOL_STR(bprm_change_interp) },
	{ 0x63beebe1, __VMLINUX_SYMBOL_STR(copy_strings_kernel) },
	{ 0xa326372a, __VMLINUX_SYMBOL_STR(fput) },
	{ 0x805237b8, __VMLINUX_SYMBOL_STR(remove_arg_zero) },
	{ 0x4bc9fa80, __VMLINUX_SYMBOL_STR(_raw_read_unlock) },
	{ 0xcdc49e19, __VMLINUX_SYMBOL_STR(lockref_get) },
	{ 0xe2d5255a, __VMLINUX_SYMBOL_STR(strcmp) },
	{ 0x9f984513, __VMLINUX_SYMBOL_STR(strrchr) },
	{ 0xb5198b77, __VMLINUX_SYMBOL_STR(_raw_read_lock) },
	{ 0xefd6cf06, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr0) },
	{ 0x11089ac7, __VMLINUX_SYMBOL_STR(_ctype) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "C2C5A2AF198AEC3319F65BB");
