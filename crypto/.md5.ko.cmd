cmd_crypto/md5.ko := arm-poky-linux-gnueabi-ld -EL -r  -T ./scripts/module-common.lds --build-id  -o crypto/md5.ko crypto/md5.o crypto/md5.mod.o ;  true
