#include <stdio.h>

int div16(int x) {
    int int_sz = (int)sizeof(int) * 8;
    int bias = x >> (int_sz-1) & 0xF;
    return (x + bias) >> 4;
}

int main() {
    int x;

    x = 64;
    printf("%d/16 = %d\n", x, div16(x));

    x = 1024;
    printf("%d/16 = %d\n", x, div16(x));

    x = 83;
    printf("%d/16 = %d\n", x, div16(x));

    x = -83;
    printf("%d/16 = %d\n", x, div16(x));
}
