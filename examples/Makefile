TOOLCHAIN = riscv64-unknown-elf

define build
	$(TOOLCHAIN)-gcc -O0 -march=rv64ima -mabi=lp64 -mcmodel=medany -nostartfiles -nostdlib -T ./linker.ld ./start.s ./$(1)/main.c -o ./$(1)/rv64imaf-main.elf
	$(TOOLCHAIN)-objdump -d -S ./$(1)/rv64imaf-main.elf > ./$(1)/rv64imaf-main.txt
	$(TOOLCHAIN)-objcopy -O binary ./$(1)/rv64imaf-main.elf ./$(1)/rv64imaf-main.bin
	rm -rf ./$(1)/rv64imaf-main.elf

	$(TOOLCHAIN)-gcc -O0 -march=rv64imac -mabi=lp64 -mcmodel=medany -nostartfiles -nostdlib -T ./linker.ld ./start.s ./$(1)/main.c -o ./$(1)/rv64imafc-main.elf
	$(TOOLCHAIN)-objdump -d -S ./$(1)/rv64imafc-main.elf > ./$(1)/rv64imafc-main.txt
	$(TOOLCHAIN)-objcopy -O binary ./$(1)/rv64imafc-main.elf ./$(1)/rv64imafc-main.bin
	rm -rf ./$(1)/rv64imafc-main.elf
endef

.PHONY: default
default:
	$(call build,example01)
	$(call build,example02)
	$(call build,example03)
	$(call build,example04)
