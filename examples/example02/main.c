#include <stdint.h>

void uart_putc(char c) {
    volatile uint32_t* uart0_thr = (volatile uint32_t*) 0x09000000;
    *uart0_thr = c;
}

void uart_puts(const char* str) {
    while (*str) {
        uart_putc(*str++);
    }
}

int main() {
    uart_puts("Hello World!\n");

    return 0;
}
