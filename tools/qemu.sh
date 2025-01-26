#!/bin/bash

qemu-system-riscv64 -machine virt -serial mon:stdio -nographic -bios "$1"
