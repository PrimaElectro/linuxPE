cmd_crypto/tcrypt.ko := arm-poky-linux-gnueabi-ld -EL -r  -T ./scripts/module-common.lds --build-id  -o crypto/tcrypt.ko crypto/tcrypt.o crypto/tcrypt.mod.o ;  true
