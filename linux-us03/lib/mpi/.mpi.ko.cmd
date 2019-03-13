cmd_lib/mpi/mpi.ko := arm-poky-linux-gnueabi-ld -EL -r  -T ./scripts/module-common.lds --build-id  -o lib/mpi/mpi.ko lib/mpi/mpi.o lib/mpi/mpi.mod.o ;  true
