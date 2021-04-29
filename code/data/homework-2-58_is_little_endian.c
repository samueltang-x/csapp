#include <stdbool.h>
#include <stdio.h>

typedef unsigned char *byte_pointer;

bool is_little_endian() {
    int c = 1;
    byte_pointer cp = (byte_pointer) &c;
    size_t last_idx = sizeof(unsigned char) - 1;
    return (cp[last_idx] & 0X01) != c;
}

int main() {
    printf("This machine is %s endian.\n", is_little_endian ? "little" : "big");
    return 0;
}
