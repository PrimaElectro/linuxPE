cmd_drivers/power/reset/built-in.o :=  rm -f drivers/power/reset/built-in.o; arm-poky-linux-gnueabi-ar rcSTPD drivers/power/reset/built-in.o drivers/power/reset/gpio-poweroff.o drivers/power/reset/syscon-poweroff.o 