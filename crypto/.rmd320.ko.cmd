cmd_crypto/rmd320.ko := arm-poky-linux-gnueabi-ld -EL -r  -T ./scripts/module-common.lds --build-id  -o crypto/rmd320.ko crypto/rmd320.o crypto/rmd320.mod.o ;  true
