#include <stdio.h>

/* Determine whether arguments can be added without overflow */
int uadd_ok(unsigned x, unsigned y) {
    return x + y >= x;
}

int main() {
    printf("5 + 12: %d\n", uadd_ok(5, 12));
    printf("4294967290 + 4294967291: %d\n", uadd_ok(4294967290, 4294967291));
    return 0;
}
