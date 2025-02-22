#include <iostream>
#include <iomanip>
using namespace std;

union ByteExtractor {
    unsigned int value;
    unsigned char bytes[4];
};

int main() {
    ByteExtractor extractor;
    extractor.value = 0x12345678; // Example hexadecimal value

    cout << "Byte 0: 0x" << hex << setw(2) << setfill('0') << (int)extractor.bytes[0] << endl;
    cout << "Byte 1: 0x" << hex << setw(2) << setfill('0') << (int)extractor.bytes[1] << endl;
    cout << "Byte 2: 0x" << hex << setw(2) << setfill('0') << (int)extractor.bytes[2] << endl;
    cout << "Byte 3: 0x" << hex << setw(2) << setfill('0') << (int)extractor.bytes[3] << endl;

    return 0;
}