//
// Created by Ti Kyi Khant on 3/31/2023.
//
#include <iostream>
using namespace std;
uint32_t changeEndianess(uint32_t value);
int main() {
    cout << "Hello, World!" << endl;
    uint32_t littleEndian = 0x0A0B0C0D;
    uint32_t bigEndian = changeEndianess(littleEndian);
    printf("%X",bigEndian);
    return 0;
}

uint32_t changeEndianess(uint32_t value){
    uint32_t ans = 0x00000000;
    uint32_t temp = 0x00000000;
    temp = value & 0x000000FF;
    temp = temp << 24;
    ans = ans | temp;

    temp = 0x00000000;
    temp = value & 0x0000FF00;
    temp = temp  << 8;
    ans = ans | temp;

    temp = 0x00000000;
    temp = value & 0x00FF0000;
    temp = temp >> 8;
    ans = ans | temp;

    temp = 0x00000000;
    temp = value & 0xFF000000;
    temp = temp >> 24;
    ans = ans | temp;

    return ans;
}