#include <stdio.h>

/* Determine whether arguments can be added with outflow */
int tadd_ok(int x, int y) {
    int sum = x + y;
    return (x > 0 && y > 0 && sum > 0) ||
        (x < 0 && y < 0 && sum < 0);
}

int main() {
    int a, b;

    a = 83782;
    b = 2938;
    printf("%d\t%d\t: %s\n", a, b, tadd_ok(a, b) ? "OK" : "Overflow");

    a = 2147483648;
    b = 993182938;
    printf("%d\t%d\t: %s\n", a, b, tadd_ok(a, b) ? "OK" : "Overflow");

    a = -2107483648;
    b = -993182938;
    printf("%d\t%d\t: %s\n", a, b, tadd_ok(a, b) ? "OK" : "Overflow");
    return 0;
}
