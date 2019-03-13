cmd_crypto/rsa_generic.ko := arm-poky-linux-gnueabi-ld -EL -r  -T ./scripts/module-common.lds --build-id  -o crypto/rsa_generic.ko crypto/rsa_generic.o crypto/rsa_generic.mod.o ;  true
