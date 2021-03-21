#include <stdio.h>
#include <string.h>

typedef unsigned char *byte_pointer;

void show_bytes(byte_pointer start, size_t len) {
    int i;
    for (i = 0; i < len; i++)
        printf(" %.2x", start[i]);
    printf("\n");
}

void show_int(int x) {
    printf("bytes of int value %d: ", x);
    show_bytes((byte_pointer) &x, sizeof(int));
}

void show_float(float x) {
    printf("bytes of float value %.1f: ", x);
    show_bytes((byte_pointer) &x, sizeof(float));
}

void show_pointer(void *x) {
    printf("bytes of void * value: ");
    show_bytes((byte_pointer) &x, sizeof(void *));
}

void show_string(char *x) {
    printf("bytes of string value %s:", x);
    show_bytes((byte_pointer) x, strlen(x) + 1);
}

void test_show_bytes(int val) {
    int ival = val;
    float fval = (float) val;
    int *pval = &val;
    show_int(ival);
    show_float(fval);
    show_pointer(pval);
}

void practice_problem_2_6() {
    int ival = 2607352;
    float fval = 3510593.0;
    show_int(ival);
    show_float(fval);
}

void test_show_string() {
    // practice problem 2.7
    const char *m = "mnopqr";
    show_string(m);
}

int main() {
    // test_show_bytes(12345);
    // practice_problem_2_6();
    test_show_string();
    return 0;
}
