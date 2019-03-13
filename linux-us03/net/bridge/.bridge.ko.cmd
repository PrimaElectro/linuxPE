cmd_net/bridge/bridge.ko := arm-poky-linux-gnueabi-ld -EL -r  -T ./scripts/module-common.lds --build-id  -o net/bridge/bridge.ko net/bridge/bridge.o net/bridge/bridge.mod.o ;  true
