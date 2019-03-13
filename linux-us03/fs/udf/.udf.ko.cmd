cmd_fs/udf/udf.ko := arm-poky-linux-gnueabi-ld -EL -r  -T ./scripts/module-common.lds --build-id  -o fs/udf/udf.ko fs/udf/udf.o fs/udf/udf.mod.o ;  true
