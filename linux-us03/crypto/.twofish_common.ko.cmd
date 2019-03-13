cmd_crypto/twofish_common.ko := arm-poky-linux-gnueabi-ld -EL -r  -T ./scripts/module-common.lds --build-id  -o crypto/twofish_common.ko crypto/twofish_common.o crypto/twofish_common.mod.o ;  true
