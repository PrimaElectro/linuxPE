cmd_net/netfilter/x_tables.ko := arm-poky-linux-gnueabi-ld -EL -r  -T ./scripts/module-common.lds --build-id  -o net/netfilter/x_tables.ko net/netfilter/x_tables.o net/netfilter/x_tables.mod.o ;  true