.PHONY: default
default:
	qemu-system-riscv64 -machine virt -machine dumpdtb=./riscv64-virt.dtb
	dtc -I dtb -O dts ./riscv64-virt.dtb > ./riscv64-virt.dts
