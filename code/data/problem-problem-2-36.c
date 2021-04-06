#include <stdio.h>
#include <stdint.h>

/* Determine whether arguments can be multipled without overflow */
int tmult_ok(int x, int y) {
    int64_t p = (int64_t)x * y;
    return p == (int) p;
}

int main() {
    int x, y;

    x = 1024;
    y = 524288;
    printf("%d * %d\t: %s\n", x, y, tmult_ok(x, y) ? "OK" : "Overflow");

    x = 1073741824;
    y = 536870912;
    printf("%d * %d\t: %s\n", x, y, tmult_ok(x, y) ? "OK" : "Overflow");

    x = 1073741824;
    y = 0;
    printf("%d * %d\t: %s\n", x, y, tmult_ok(x, y) ? "OK" : "Overflow");
    return 0;
}
