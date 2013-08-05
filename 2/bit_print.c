#include <stdlib.h>
#include <string.h>
#include <stdio.h>

typedef union bitshow{
    unsigned bit1:1;
    unsigned bit2:2;
    unsigned bit3:3;
    unsigned bit4:4;
    unsigned bit5:5;
    unsigned bit6:6;
    unsigned bit7:7;
    unsigned bit8:8;
    int i;
}bitshow;








int main(int argc, char* argv)
{
    bitshow bits;
    scanf("%d", &bits.i);
    int bit1 = bits.bit1;
#if 0
    int bit2 = (bits.bit2 & (0x1 << 1)) >> 1;
    int bit3 = (bits.bit3 & (0x1 << 2)) >> 2;
    int bit4 = (bits.bit4 & (0x1 << 3)) >> 3;
    int bit5 = (bits.bit5 & (0x1 << 4)) >> 4;
    int bit6 = (bits.bit6 & (0x1 << 5)) >> 5;
    int bit7 = (bits.bit7 & (0x1 << 6)) >> 6;
    int bit8 = (bits.bit8 & (0x1 << 7)) >> 7;
#else
    int bit2 = bits.bit2 >> 1;
    int bit3 = bits.bit3 >> 2;
    int bit4 = bits.bit4 >> 3;
    int bit5 = bits.bit5 >> 4;
    int bit6 = bits.bit6 >> 5;
    int bit7 = bits.bit7 >> 6;
    int bit8 = bits.bit8 >> 7;
#endif
    printf("%d%d%d%d%d%d%d%d\n", bit8, bit7, bit6, bit5, bit4, bit3, bit2, bit1);
}
