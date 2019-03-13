cmd_crypto/authencesn.ko := arm-poky-linux-gnueabi-ld -EL -r  -T ./scripts/module-common.lds --build-id  -o crypto/authencesn.ko crypto/authencesn.o crypto/authencesn.mod.o ;  true
