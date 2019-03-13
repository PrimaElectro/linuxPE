cmd_crypto/rmd256.ko := arm-poky-linux-gnueabi-ld -EL -r  -T ./scripts/module-common.lds --build-id  -o crypto/rmd256.ko crypto/rmd256.o crypto/rmd256.mod.o ;  true
