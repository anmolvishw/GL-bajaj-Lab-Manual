#include <stdio.h>

union ByteExtractor {
    unsigned int value;
    unsigned char bytes[4];
};

int main() {
    union ByteExtractor extractor;
    extractor.value = 0x12345678; // Example hexadecimal value

    printf("Byte 0: 0x%02X\n", extractor.bytes[0]);
    printf("Byte 1: 0x%02X\n", extractor.bytes[1]);
    printf("Byte 2: 0x%02X\n", extractor.bytes[2]);
    printf("Byte 3: 0x%02X\n", extractor.bytes[3]);

    return 0;
}
