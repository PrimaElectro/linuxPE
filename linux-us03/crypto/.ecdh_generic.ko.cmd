cmd_crypto/ecdh_generic.ko := arm-poky-linux-gnueabi-ld -EL -r  -T ./scripts/module-common.lds --build-id  -o crypto/ecdh_generic.ko crypto/ecdh_generic.o crypto/ecdh_generic.mod.o ;  true
