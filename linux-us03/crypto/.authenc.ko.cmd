cmd_crypto/authenc.ko := arm-poky-linux-gnueabi-ld -EL -r  -T ./scripts/module-common.lds --build-id  -o crypto/authenc.ko crypto/authenc.o crypto/authenc.mod.o ;  true
