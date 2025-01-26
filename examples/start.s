.section .text
    .globl _start
    _start:
        la sp, stack_top
        j main

.section .bss
    .align 16
    stack_top:
        .space 4096
