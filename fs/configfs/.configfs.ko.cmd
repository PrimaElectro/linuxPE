cmd_fs/configfs/configfs.ko := arm-poky-linux-gnueabi-ld -EL -r  -T ./scripts/module-common.lds --build-id  -o fs/configfs/configfs.ko fs/configfs/configfs.o fs/configfs/configfs.mod.o ;  true
