#include <stdio.h>

/* Determine whether arguments can be multipled without overflow */
int tmult_ok(int x, int y) {
    int p = x * y;
    return !x || p / x == y;
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
