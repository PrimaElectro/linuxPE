cmd_drivers/bluetooth/btrtl.ko := arm-poky-linux-gnueabi-ld -EL -r  -T ./scripts/module-common.lds --build-id  -o drivers/bluetooth/btrtl.ko drivers/bluetooth/btrtl.o drivers/bluetooth/btrtl.mod.o ;  true