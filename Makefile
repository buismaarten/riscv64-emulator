TOOLCHAIN = gcc -std=c11
TOOLCHAIN_FLAGS = -I./include -fsanitize=address

.PHONY: default
default:
	$(TOOLCHAIN) $(TOOLCHAIN_FLAGS) -o ./output/main.o -c ./src/main.c
	$(TOOLCHAIN) $(TOOLCHAIN_FLAGS) -o ./output/main ./output/main.o

.PHONY: run
run:
	rm -rf ./output/*.o
	./output/main > ./output/main.txt

.PHONY: install
install:
	brew update
	brew tap riscv-software-src/riscv
	brew install qemu
	brew install riscv-tools
