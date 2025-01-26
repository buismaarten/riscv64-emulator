TOOLCHAIN = riscv64-unknown-elf

define build
	$(TOOLCHAIN)-gcc -mcmodel=medany -nostartfiles -nostdlib -T ./linker.ld ./start.s ./$(1)/main.c -o ./$(1)/main.elf
	$(TOOLCHAIN)-objdump -d -S ./$(1)/main.elf > ./$(1)/main.txt
	$(TOOLCHAIN)-objcopy -O binary ./$(1)/main.elf ./$(1)/main.bin
	rm -rf ./$(1)/main.elf
endef

.PHONY: default
default:
	$(call build,example01)
	$(call build,example02)
	$(call build,example03)
	$(call build,example04)
