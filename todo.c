#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>

void print_binary(const uint8_t* bytes, size_t length) {
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

int main(int argc, char* argv[]) {
    if (argc < 2) {
        fprintf(stderr, "Usage: %s <filename>\n", argv[0]);

        return EXIT_FAILURE;
    }

    FILE* file = fopen(argv[1], "rb");
    if (!file) {
        printf("Error: failed to open file\n");

        return EXIT_FAILURE;
    }

    fseek(file, 0, SEEK_END);
    size_t size = ftell(file);
    rewind(file);

    uint8_t* buffer = malloc(size);
    if (!buffer) {
        printf("Error: failed to allocate memory\n");
        fclose(file);

        return EXIT_FAILURE;
    }

    fread(buffer, 1, size, file);
    fclose(file);

    print_binary(buffer, size);
    free(buffer);

    return EXIT_SUCCESS;
}
