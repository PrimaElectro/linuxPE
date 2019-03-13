cmd_crypto/lrw.ko := arm-poky-linux-gnueabi-ld -EL -r  -T ./scripts/module-common.lds --build-id  -o crypto/lrw.ko crypto/lrw.o crypto/lrw.mod.o ;  true
