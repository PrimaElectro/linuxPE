cmd_crypto/sha512_generic.ko := arm-poky-linux-gnueabi-ld -EL -r  -T ./scripts/module-common.lds --build-id  -o crypto/sha512_generic.ko crypto/sha512_generic.o crypto/sha512_generic.mod.o ;  true
