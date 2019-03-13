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
	{ 0x9bb7af9a, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0x4e782a1e, __VMLINUX_SYMBOL_STR(v4l2_event_unsubscribe) },
	{ 0x4be85a03, __VMLINUX_SYMBOL_STR(memweight) },
	{ 0x12da5bb2, __VMLINUX_SYMBOL_STR(__kmalloc) },
	{ 0xe6da44a, __VMLINUX_SYMBOL_STR(set_normalized_timespec) },
	{ 0x528c709d, __VMLINUX_SYMBOL_STR(simple_read_from_buffer) },
	{ 0x424578fd, __VMLINUX_SYMBOL_STR(debugfs_create_dir) },
	{ 0x886d64ba, __VMLINUX_SYMBOL_STR(v4l2_event_queue_fh) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0x97255bdf, __VMLINUX_SYMBOL_STR(strlen) },
	{ 0x76695b82, __VMLINUX_SYMBOL_STR(vb2_mmap) },
	{ 0x7ade4d04, __VMLINUX_SYMBOL_STR(usb_debug_root) },
	{ 0xed3e5d5f, __VMLINUX_SYMBOL_STR(v4l2_device_unregister) },
	{ 0xae173d02, __VMLINUX_SYMBOL_STR(no_llseek) },
	{ 0x5ab1b42, __VMLINUX_SYMBOL_STR(vb2_create_bufs) },
	{ 0xf7802486, __VMLINUX_SYMBOL_STR(__aeabi_uidivmod) },
	{ 0x4b0f323d, __VMLINUX_SYMBOL_STR(usb_kill_urb) },
	{ 0xe2fae716, __VMLINUX_SYMBOL_STR(kmemdup) },
	{ 0x10dbd21d, __VMLINUX_SYMBOL_STR(vb2_ops_wait_prepare) },
	{ 0xf458c6bb, __VMLINUX_SYMBOL_STR(__video_register_device) },
	{ 0x28cc25db, __VMLINUX_SYMBOL_STR(arm_copy_from_user) },
	{ 0xe4ca3b4f, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0x68a660f7, __VMLINUX_SYMBOL_STR(usb_autopm_get_interface) },
	{ 0x2a3e6449, __VMLINUX_SYMBOL_STR(usb_enable_autosuspend) },
	{ 0x6fd07c11, __VMLINUX_SYMBOL_STR(debugfs_create_file) },
	{ 0x1b5c0864, __VMLINUX_SYMBOL_STR(v4l2_ctrl_merge) },
	{ 0x91715312, __VMLINUX_SYMBOL_STR(sprintf) },
	{ 0x304dde82, __VMLINUX_SYMBOL_STR(debugfs_remove_recursive) },
	{ 0xf4fa543b, __VMLINUX_SYMBOL_STR(arm_copy_to_user) },
	{ 0x54605f2e, __VMLINUX_SYMBOL_STR(v4l2_device_register) },
	{ 0xb0320196, __VMLINUX_SYMBOL_STR(input_event) },
	{ 0xe707d823, __VMLINUX_SYMBOL_STR(__aeabi_uidiv) },
	{ 0xdd0a2ba2, __VMLINUX_SYMBOL_STR(strlcat) },
	{ 0xfa2a45e, __VMLINUX_SYMBOL_STR(__memzero) },
	{ 0x5f754e5a, __VMLINUX_SYMBOL_STR(memset) },
	{ 0xdff12d5d, __VMLINUX_SYMBOL_STR(vb2_vmalloc_memops) },
	{ 0x5f7e890f, __VMLINUX_SYMBOL_STR(usb_string) },
	{ 0x51d559d1, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_irqrestore) },
	{ 0xa96e619, __VMLINUX_SYMBOL_STR(usb_deregister) },
	{ 0x6c49fc55, __VMLINUX_SYMBOL_STR(mutex_lock_interruptible) },
	{ 0x1e5947be, __VMLINUX_SYMBOL_STR(v4l2_event_subscribe) },
	{ 0x2aee63f4, __VMLINUX_SYMBOL_STR(__mutex_init) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0xb77b0159, __VMLINUX_SYMBOL_STR(v4l2_prio_init) },
	{ 0x71c90087, __VMLINUX_SYMBOL_STR(memcmp) },
	{ 0x151e8fb1, __VMLINUX_SYMBOL_STR(video_unregister_device) },
	{ 0x2330a439, __VMLINUX_SYMBOL_STR(usb_set_interface) },
	{ 0x25bfd7a1, __VMLINUX_SYMBOL_STR(v4l2_fh_init) },
	{ 0xa0bdbe5e, __VMLINUX_SYMBOL_STR(vb2_plane_vaddr) },
	{ 0x4970740a, __VMLINUX_SYMBOL_STR(vb2_buffer_done) },
	{ 0xaafdc258, __VMLINUX_SYMBOL_STR(strcasecmp) },
	{ 0x68cdcae4, __VMLINUX_SYMBOL_STR(usb_control_msg) },
	{ 0x73e20c1c, __VMLINUX_SYMBOL_STR(strlcpy) },
	{ 0x2e9b739b, __VMLINUX_SYMBOL_STR(usb_driver_claim_interface) },
	{ 0xfd16e532, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0xb92ef6b5, __VMLINUX_SYMBOL_STR(vb2_qbuf) },
	{ 0xe281f3bf, __VMLINUX_SYMBOL_STR(usb_free_coherent) },
	{ 0xdce15a97, __VMLINUX_SYMBOL_STR(vb2_querybuf) },
	{ 0x59e5070d, __VMLINUX_SYMBOL_STR(__do_div64) },
	{ 0xaf54c6ba, __VMLINUX_SYMBOL_STR(usb_submit_urb) },
	{ 0xe162e43f, __VMLINUX_SYMBOL_STR(kmem_cache_alloc) },
	{ 0x4b77c88d, __VMLINUX_SYMBOL_STR(v4l2_ctrl_replace) },
	{ 0x7833ad17, __VMLINUX_SYMBOL_STR(vb2_streamon) },
	{ 0xbf49b4c, __VMLINUX_SYMBOL_STR(usb_get_dev) },
	{ 0x24b2c1d8, __VMLINUX_SYMBOL_STR(video_devdata) },
	{ 0xae6dcfa8, __VMLINUX_SYMBOL_STR(vb2_expbuf) },
	{ 0x13a76528, __VMLINUX_SYMBOL_STR(input_register_device) },
	{ 0x77f8bb7c, __VMLINUX_SYMBOL_STR(usb_put_dev) },
	{ 0x2aa0e4fc, __VMLINUX_SYMBOL_STR(strncasecmp) },
	{ 0xc426f7f5, __VMLINUX_SYMBOL_STR(usb_clear_halt) },
	{ 0xdb20a9af, __VMLINUX_SYMBOL_STR(usb_driver_release_interface) },
	{ 0xe329f057, __VMLINUX_SYMBOL_STR(input_free_device) },
	{ 0x94eea794, __VMLINUX_SYMBOL_STR(getnstimeofday64) },
	{ 0x801ee902, __VMLINUX_SYMBOL_STR(vb2_reqbufs) },
	{ 0x1c07ff17, __VMLINUX_SYMBOL_STR(usb_get_intf) },
	{ 0x598542b2, __VMLINUX_SYMBOL_STR(_raw_spin_lock_irqsave) },
	{ 0xa461ea71, __VMLINUX_SYMBOL_STR(vb2_dqbuf) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x9d669763, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0x6becd18e, __VMLINUX_SYMBOL_STR(input_unregister_device) },
	{ 0xf1a56798, __VMLINUX_SYMBOL_STR(usb_match_one_id) },
	{ 0xf9e73082, __VMLINUX_SYMBOL_STR(scnprintf) },
	{ 0x28b23b45, __VMLINUX_SYMBOL_STR(usb_register_driver) },
	{ 0x72f43026, __VMLINUX_SYMBOL_STR(vb2_ops_wait_finish) },
	{ 0x4501101c, __VMLINUX_SYMBOL_STR(v4l2_fh_add) },
	{ 0x7994f404, __VMLINUX_SYMBOL_STR(v4l2_fh_del) },
	{ 0xefd6cf06, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr0) },
	{ 0xe2e8065e, __VMLINUX_SYMBOL_STR(memdup_user) },
	{ 0xac38ff3, __VMLINUX_SYMBOL_STR(usb_ifnum_to_if) },
	{ 0xb81960ca, __VMLINUX_SYMBOL_STR(snprintf) },
	{ 0x9da3acfd, __VMLINUX_SYMBOL_STR(vb2_poll) },
	{ 0xca54fee, __VMLINUX_SYMBOL_STR(_test_and_set_bit) },
	{ 0x9a1ffcc8, __VMLINUX_SYMBOL_STR(usb_alloc_coherent) },
	{ 0x96dd410a, __VMLINUX_SYMBOL_STR(usb_get_current_frame_number) },
	{ 0x5e515be6, __VMLINUX_SYMBOL_STR(ktime_get_ts64) },
	{ 0x2dd33d59, __VMLINUX_SYMBOL_STR(vb2_queue_release) },
	{ 0xd0962ef3, __VMLINUX_SYMBOL_STR(param_ops_uint) },
	{ 0xfc767b0b, __VMLINUX_SYMBOL_STR(vb2_streamoff) },
	{ 0xe9e085df, __VMLINUX_SYMBOL_STR(usb_free_urb) },
	{ 0x44906576, __VMLINUX_SYMBOL_STR(video_ioctl2) },
	{ 0xcdb96750, __VMLINUX_SYMBOL_STR(usb_autopm_put_interface) },
	{ 0xac2a5a27, __VMLINUX_SYMBOL_STR(usb_alloc_urb) },
	{ 0x8ed89c6e, __VMLINUX_SYMBOL_STR(usb_put_intf) },
	{ 0x8be09b76, __VMLINUX_SYMBOL_STR(v4l2_fh_exit) },
	{ 0xea55b950, __VMLINUX_SYMBOL_STR(input_allocate_device) },
	{ 0x5831390b, __VMLINUX_SYMBOL_STR(vb2_queue_init) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

MODULE_ALIAS("usb:v0416pA91Ad*dc*dsc*dp*ic0Eisc01ip00in*");
MODULE_ALIAS("usb:v0458p706Ed*dc*dsc*dp*ic0Eisc01ip00in*");
MODULE_ALIAS("usb:v045Ep00F8d*dc*dsc*dp*ic0Eisc01ip00in*");
MODULE_ALIAS("usb:v045Ep0721d*dc*dsc*dp*ic0Eisc01ip00in*");
MODULE_ALIAS("usb:v045Ep0723d*dc*dsc*dp*ic0Eisc01ip00in*");
MODULE_ALIAS("usb:v046Dp08C1d*dc*dsc*dp*icFFisc01ip00in*");
MODULE_ALIAS("usb:v046Dp08C2d*dc*dsc*dp*icFFisc01ip00in*");
MODULE_ALIAS("usb:v046Dp08C3d*dc*dsc*dp*icFFisc01ip00in*");
MODULE_ALIAS("usb:v046Dp08C5d*dc*dsc*dp*icFFisc01ip00in*");
MODULE_ALIAS("usb:v046Dp08C6d*dc*dsc*dp*icFFisc01ip00in*");
MODULE_ALIAS("usb:v046Dp08C7d*dc*dsc*dp*icFFisc01ip00in*");
MODULE_ALIAS("usb:v046Dp082Dd*dc*dsc*dp*ic0Eisc01ip00in*");
MODULE_ALIAS("usb:v04F2pB071d*dc*dsc*dp*ic0Eisc01ip00in*");
MODULE_ALIAS("usb:v058Fp3820d*dc*dsc*dp*ic0Eisc01ip00in*");
MODULE_ALIAS("usb:v05A9p2640d*dc*dsc*dp*ic0Eisc01ip00in*");
MODULE_ALIAS("usb:v05A9p2641d*dc*dsc*dp*ic0Eisc01ip00in*");
MODULE_ALIAS("usb:v05A9p2643d*dc*dsc*dp*ic0Eisc01ip00in*");
MODULE_ALIAS("usb:v05A9p264Ad*dc*dsc*dp*ic0Eisc01ip00in*");
MODULE_ALIAS("usb:v05A9p7670d*dc*dsc*dp*ic0Eisc01ip00in*");
MODULE_ALIAS("usb:v05ACp8501d*dc*dsc*dp*ic0Eisc01ip00in*");
MODULE_ALIAS("usb:v05ACp8600d*dc*dsc*dp*ic0Eisc01ip00in*");
MODULE_ALIAS("usb:v05C8p0403d*dc*dsc*dp*ic0Eisc01ip00in*");
MODULE_ALIAS("usb:v05E3p0505d*dc*dsc*dp*ic0Eisc01ip00in*");
MODULE_ALIAS("usb:v06F8p300Cd*dc*dsc*dp*ic0Eisc01ip00in*");
MODULE_ALIAS("usb:v0AC8p332Dd*dc*dsc*dp*ic0Eisc01ip00in*");
MODULE_ALIAS("usb:v0AC8p3410d*dc*dsc*dp*ic0Eisc01ip00in*");
MODULE_ALIAS("usb:v0AC8p3420d*dc*dsc*dp*ic0Eisc01ip00in*");
MODULE_ALIAS("usb:v0BD3p0555d*dc*dsc*dp*ic0Eisc01ip00in*");
MODULE_ALIAS("usb:v0E8Dp0004d*dc*dsc*dp*ic0Eisc01ip00in*");
MODULE_ALIAS("usb:v13D3p5103d*dc*dsc*dp*ic0Eisc01ip00in*");
MODULE_ALIAS("usb:v152Dp0310d*dc*dsc*dp*ic0Eisc01ip00in*");
MODULE_ALIAS("usb:v174Fp5212d*dc*dsc*dp*ic0Eisc01ip00in*");
MODULE_ALIAS("usb:v174Fp5931d*dc*dsc*dp*ic0Eisc01ip00in*");
MODULE_ALIAS("usb:v174Fp8A12d*dc*dsc*dp*ic0Eisc01ip00in*");
MODULE_ALIAS("usb:v174Fp8A31d*dc*dsc*dp*ic0Eisc01ip00in*");
MODULE_ALIAS("usb:v174Fp8A33d*dc*dsc*dp*ic0Eisc01ip00in*");
MODULE_ALIAS("usb:v174Fp8A34d*dc*dsc*dp*ic0Eisc01ip00in*");
MODULE_ALIAS("usb:v17DCp0202d*dc*dsc*dp*ic0Eisc01ip00in*");
MODULE_ALIAS("usb:v17EFp480Bd*dc*dsc*dp*ic0Eisc01ip00in*");
MODULE_ALIAS("usb:v1871p0306d*dc*dsc*dp*ic0Eisc01ip00in*");
MODULE_ALIAS("usb:v1871p0516d*dc*dsc*dp*icFFisc01ip00in*");
MODULE_ALIAS("usb:v18CDpCAFEd*dc*dsc*dp*ic0Eisc01ip00in*");
MODULE_ALIAS("usb:v18ECp3188d*dc*dsc*dp*ic0Eisc01ip00in*");
MODULE_ALIAS("usb:v18ECp3288d*dc*dsc*dp*ic0Eisc01ip00in*");
MODULE_ALIAS("usb:v18ECp3290d*dc*dsc*dp*ic0Eisc01ip00in*");
MODULE_ALIAS("usb:v199Ep8102d*dc*dsc*dp*icFFisc01ip00in*");
MODULE_ALIAS("usb:v19ABp1000d012[0-6]dc*dsc*dp*ic0Eisc01ip00in*");
MODULE_ALIAS("usb:v19ABp1000d01[0-1]*dc*dsc*dp*ic0Eisc01ip00in*");
MODULE_ALIAS("usb:v19ABp1000d00*dc*dsc*dp*ic0Eisc01ip00in*");
MODULE_ALIAS("usb:v1B3Bp2951d*dc*dsc*dp*ic0Eisc01ip00in*");
MODULE_ALIAS("usb:v1C4Fp3000d*dc*dsc*dp*ic0Eisc01ip00in*");
MODULE_ALIAS("usb:v2833p0201d*dc*dsc*dp*ic0Eisc01ip00in*");
MODULE_ALIAS("usb:v2833p0211d*dc*dsc*dp*icFFisc01ip00in*");
MODULE_ALIAS("usb:v*p*d*dc*dsc*dp*ic0Eisc01ip00in*");
MODULE_ALIAS("usb:v*p*d*dc*dsc*dp*ic0Eisc01ip01in*");

MODULE_INFO(srcversion, "470889836E0F6A3E6210E69");
