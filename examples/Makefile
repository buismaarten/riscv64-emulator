TOOLCHAIN = riscv64-unknown-elf
TOOLCHAIN_FLAGS = -O0 -mabi=lp64 -mcmodel=medany -nostartfiles -nostdlib -T ./linker.ld

define build
	$(TOOLCHAIN)-gcc $(TOOLCHAIN_FLAGS) -march=rv64g ./start.s ./$(1)/main.c -o ./$(1)/rv64g-main.elf
	$(TOOLCHAIN)-objdump -d -S ./$(1)/rv64g-main.elf > ./$(1)/rv64g-main.txt
	$(TOOLCHAIN)-objcopy -O binary ./$(1)/rv64g-main.elf ./$(1)/rv64g-main.bin
	rm -rf ./$(1)/rv64g-main.elf

	$(TOOLCHAIN)-gcc $(TOOLCHAIN_FLAGS) -march=rv64gc ./start.s ./$(1)/main.c -o ./$(1)/rv64gc-main.elf
	$(TOOLCHAIN)-objdump -d -S ./$(1)/rv64gc-main.elf > ./$(1)/rv64gc-main.txt
	$(TOOLCHAIN)-objcopy -O binary ./$(1)/rv64gc-main.elf ./$(1)/rv64gc-main.bin
	rm -rf ./$(1)/rv64gc-main.elf
endef

.PHONY: default
default:
	$(call build,example01)
	$(call build,example02)
	$(call build,example03)
	$(call build,example04)
