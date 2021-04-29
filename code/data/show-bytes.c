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

void show_short(short s) {
    printf("bytes of short value %hd: ", s);
    show_bytes( (byte_pointer) &s, sizeof(short) );
}

void show_long(long l) {
    printf("bytes of long value %ld: ", l);
    show_bytes( (byte_pointer) &l, sizeof(long) );
}

void show_double(double l) {
    printf("bytes of double value %f: ", l);
    show_bytes( (byte_pointer) &l, sizeof(double) );
}

/*
void show_float(float l) {
    printf("bytes of float value %f: ", l);
    show_bytes( (byte_pointer) &l, sizeof(float) );
}
*/

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
    char *m = "mnopqr";
    show_string(m);
}

int main() {
    test_show_bytes(-0x58);
    // practice_problem_2_6();
    // test_show_string();
    show_int(1);
    show_int(23);
    show_short(23);
    show_long(23);
    show_double(23.125);
    show_double(1.25);
    show_float(1.25);
    return 0;
}
