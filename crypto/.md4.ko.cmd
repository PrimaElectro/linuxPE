cmd_crypto/md4.ko := arm-poky-linux-gnueabi-ld -EL -r  -T ./scripts/module-common.lds --build-id  -o crypto/md4.ko crypto/md4.o crypto/md4.mod.o ;  true
