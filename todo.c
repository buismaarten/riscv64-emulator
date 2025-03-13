#include <stdint.h>
#include <stdio.h>

void decode_riscv(const uint8_t* bytes, size_t length) {
    size_t i = 0;

    while (i < length) {
        uint16_t inst16 = bytes[i] | (bytes[i + 1] << 8);

        if ((inst16 & 0b11) != 0b11) {
            printf("16-bit instruction: 0x%04X\n", inst16);
            i += 2;
        } else {
            uint32_t inst32 = inst16 | (bytes[i + 2] << 16) | (bytes[i + 3] << 24);

            printf("32-bit instruction: 0x%08X\n", inst32);
            i += 4;
        }
    }
}

int main() {
    uint8_t binary[] = {
        0x2E, 0x87,             // 16-bit instruction: 0x872E
        0x23, 0x26, 0xF4, 0xFE, // 32-bit instruction: 0xFEF42623
        0xBA, 0x87,             // 16-bit instruction: 0x87BA
    };

    decode_riscv(binary, sizeof(binary));
    return 0;
}
