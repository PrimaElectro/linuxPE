cmd_arch/arm/boot/dts/imx6dl-apf6dev.dtb := mkdir -p arch/arm/boot/dts/ ; arm-poky-linux-gnueabi-gcc -E -Wp,-MD,arch/arm/boot/dts/.imx6dl-apf6dev.dtb.d.pre.tmp -nostdinc -I./scripts/dtc/include-prefixes -undef -D__DTS__ -x assembler-with-cpp -o arch/arm/boot/dts/.imx6dl-apf6dev.dtb.dts.tmp arch/arm/boot/dts/imx6dl-apf6dev.dts ; ./scripts/dtc/dtc -O dtb -o arch/arm/boot/dts/imx6dl-apf6dev.dtb -b 0 -iarch/arm/boot/dts/ -i./scripts/dtc/include-prefixes -Wno-unit_address_vs_reg -Wno-simple_bus_reg -Wno-unit_address_format -Wno-pci_bridge -Wno-pci_device_bus_num -Wno-pci_device_reg  -d arch/arm/boot/dts/.imx6dl-apf6dev.dtb.d.dtc.tmp arch/arm/boot/dts/.imx6dl-apf6dev.dtb.dts.tmp ; cat arch/arm/boot/dts/.imx6dl-apf6dev.dtb.d.pre.tmp arch/arm/boot/dts/.imx6dl-apf6dev.dtb.d.dtc.tmp > arch/arm/boot/dts/.imx6dl-apf6dev.dtb.d

source_arch/arm/boot/dts/imx6dl-apf6dev.dtb := arch/arm/boot/dts/imx6dl-apf6dev.dts

deps_arch/arm/boot/dts/imx6dl-apf6dev.dtb := \
  arch/arm/boot/dts/imx6dl.dtsi \
  arch/arm/boot/dts/include/dt-bindings/interrupt-controller/irq.h \
  arch/arm/boot/dts/imx6dl-pinfunc.h \
  arch/arm/boot/dts/imx6qdl.dtsi \
  arch/arm/boot/dts/include/dt-bindings/clock/imx6qdl-clock.h \
  arch/arm/boot/dts/include/dt-bindings/interrupt-controller/arm-gic.h \
  arch/arm/boot/dts/include/dt-bindings/interrupt-controller/irq.h \
  arch/arm/boot/dts/imx6qdl-apf6.dtsi \
  arch/arm/boot/dts/include/dt-bindings/gpio/gpio.h \
  arch/arm/boot/dts/imx6qdl-apf6dev.dtsi \
  arch/arm/boot/dts/include/dt-bindings/input/input.h \
  arch/arm/boot/dts/include/dt-bindings/input/linux-event-codes.h \

arch/arm/boot/dts/imx6dl-apf6dev.dtb: $(deps_arch/arm/boot/dts/imx6dl-apf6dev.dtb)

$(deps_arch/arm/boot/dts/imx6dl-apf6dev.dtb):
