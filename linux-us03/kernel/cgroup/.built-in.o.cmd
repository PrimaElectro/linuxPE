cmd_kernel/cgroup/built-in.o :=  rm -f kernel/cgroup/built-in.o; arm-poky-linux-gnueabi-ar rcSTPD kernel/cgroup/built-in.o kernel/cgroup/cgroup.o kernel/cgroup/namespace.o kernel/cgroup/cgroup-v1.o 
