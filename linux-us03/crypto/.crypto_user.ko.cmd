cmd_crypto/crypto_user.ko := arm-poky-linux-gnueabi-ld -EL -r  -T ./scripts/module-common.lds --build-id  -o crypto/crypto_user.ko crypto/crypto_user.o crypto/crypto_user.mod.o ;  true
