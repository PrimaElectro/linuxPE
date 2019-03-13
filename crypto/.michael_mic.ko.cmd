cmd_crypto/michael_mic.ko := arm-poky-linux-gnueabi-ld -EL -r  -T ./scripts/module-common.lds --build-id  -o crypto/michael_mic.ko crypto/michael_mic.o crypto/michael_mic.mod.o ;  true
