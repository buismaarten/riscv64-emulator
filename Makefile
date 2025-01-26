TOOLCHAIN = gcc -std=c11
TOOLCHAIN_FLAGS = -I./include -fsanitize=address

.PHONY: default
default:
	$(TOOLCHAIN) $(TOOLCHAIN_FLAGS) -c ./src/main.c -o ./output/main.o
	$(TOOLCHAIN) $(TOOLCHAIN_FLAGS) -o ./output/main ./output/main.o

.PHONY: run
run:
	./output/main > ./output/main.txt
	rm -rf ./output/*.o

.PHONY: install
install:
	brew update
	brew tap riscv-software-src/riscv
	brew install qemu
	brew install riscv-tools
