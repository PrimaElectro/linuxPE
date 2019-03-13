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
	{ 0x815feb1, __VMLINUX_SYMBOL_STR(i2c_del_driver) },
	{ 0x6593dc4e, __VMLINUX_SYMBOL_STR(i2c_register_driver) },
	{ 0x13a76528, __VMLINUX_SYMBOL_STR(input_register_device) },
	{ 0xf33eedef, __VMLINUX_SYMBOL_STR(devm_request_threaded_irq) },
	{ 0x76068146, __VMLINUX_SYMBOL_STR(input_mt_init_slots) },
	{ 0x7241ce0, __VMLINUX_SYMBOL_STR(input_set_abs_params) },
	{ 0xb81a7126, __VMLINUX_SYMBOL_STR(devm_input_allocate_device) },
	{ 0xd3bc50d7, __VMLINUX_SYMBOL_STR(devm_kmalloc) },
	{ 0xa496da7f, __VMLINUX_SYMBOL_STR(input_mt_report_pointer_emulation) },
	{ 0xed87bf5b, __VMLINUX_SYMBOL_STR(input_mt_report_slot_state) },
	{ 0xb0320196, __VMLINUX_SYMBOL_STR(input_event) },
	{ 0x280bf945, __VMLINUX_SYMBOL_STR(i2c_master_recv) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0x8d1d8dc5, __VMLINUX_SYMBOL_STR(i2c_master_send) },
	{ 0xefd6cf06, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr0) },
	{ 0xba5b0987, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0xfe990052, __VMLINUX_SYMBOL_STR(gpio_free) },
	{ 0xba02d02a, __VMLINUX_SYMBOL_STR(gpiod_direction_input) },
	{ 0x7cac326a, __VMLINUX_SYMBOL_STR(gpiod_set_raw_value) },
	{ 0x44d9e1ea, __VMLINUX_SYMBOL_STR(gpiod_direction_output_raw) },
	{ 0xc2c7638d, __VMLINUX_SYMBOL_STR(gpio_to_desc) },
	{ 0x47229b5c, __VMLINUX_SYMBOL_STR(gpio_request) },
	{ 0x7a2dcd1f, __VMLINUX_SYMBOL_STR(of_get_named_gpio_flags) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

MODULE_ALIAS("of:N*T*Ceeti,egalax_ts");
MODULE_ALIAS("of:N*T*Ceeti,egalax_tsC*");
MODULE_ALIAS("i2c:egalax_ts");

MODULE_INFO(srcversion, "7B2932AB7857B35DBC81434");
