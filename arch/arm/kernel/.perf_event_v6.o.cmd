cmd_arch/arm/kernel/perf_event_v6.o := arm-poky-linux-gnueabi-gcc -Wp,-MD,arch/arm/kernel/.perf_event_v6.o.d  -nostdinc -isystem /opt/exorintos/2.1/sysroots/x86_64-pokysdk-linux/usr/lib/arm-poky-linux-gnueabi/gcc/arm-poky-linux-gnueabi/4.9.3/include -I./arch/arm/include -I./arch/arm/include/generated  -I./include -I./arch/arm/include/uapi -I./arch/arm/include/generated/uapi -I./include/uapi -I./include/generated/uapi -include ./include/linux/kconfig.h -D__KERNEL__ -mlittle-endian -Wall -Wundef -Wstrict-prototypes -Wno-trigraphs -fno-strict-aliasing -fno-common -fshort-wchar -Werror-implicit-function-declaration -Wno-format-security -std=gnu89 -fno-PIE -fno-dwarf2-cfi-asm -fno-ipa-sra -mabi=aapcs-linux -mfpu=vfp -funwind-tables -marm -D__LINUX_ARM_ARCH__=7 -march=armv7-a -msoft-float -Uarm -fno-delete-null-pointer-checks -O2 --param=allow-store-data-races=0 -DCC_HAVE_ASM_GOTO -Wframe-larger-than=1024 -fno-stack-protector -Wno-unused-but-set-variable -fomit-frame-pointer -fno-var-tracking-assignments -Wdeclaration-after-statement -Wno-pointer-sign -fno-strict-overflow -fno-merge-all-constants -fmerge-constants -fno-stack-check -fconserve-stack -Werror=implicit-int -Werror=strict-prototypes -Werror=date-time --sysroot=/opt/exorintos/2.1/sysroots/cortexa9hf-neon-poky-linux-gnueabi    -DKBUILD_BASENAME='"perf_event_v6"'  -DKBUILD_MODNAME='"perf_event_v6"' -c -o arch/arm/kernel/.tmp_perf_event_v6.o arch/arm/kernel/perf_event_v6.c

source_arch/arm/kernel/perf_event_v6.o := arch/arm/kernel/perf_event_v6.c

deps_arch/arm/kernel/perf_event_v6.o := \
    $(wildcard include/config/cpu/v6.h) \
    $(wildcard include/config/cpu/v6k.h) \
  include/linux/compiler_types.h \
    $(wildcard include/config/have/arch/compiler/h.h) \
    $(wildcard include/config/enable/must/check.h) \
    $(wildcard include/config/enable/warn/deprecated.h) \
  include/linux/compiler-gcc.h \
    $(wildcard include/config/arch/supports/optimized/inlining.h) \
    $(wildcard include/config/optimize/inlining.h) \
    $(wildcard include/config/retpoline.h) \
    $(wildcard include/config/gcov/kernel.h) \
    $(wildcard include/config/arch/use/builtin/bswap.h) \

arch/arm/kernel/perf_event_v6.o: $(deps_arch/arm/kernel/perf_event_v6.o)

$(deps_arch/arm/kernel/perf_event_v6.o):