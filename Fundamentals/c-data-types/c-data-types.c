#include <stdio.h>

int main() {
    short a;
    long b;
    long long c;
    long double d;

    // check sizes of the above variables
    printf("Size of short = %d bytes\n", sizeof(a));
    printf("Size of long = %d bytes\n", sizeof(b));
    printf("Size of long long = %d bytes\n", sizeof(c));
    printf("Size of long double = %d bytes\n", sizeof(d));

    int age;
    printf("\nSize of int = %d bytes\n", sizeof(age));

    double num;
    printf("Size of double = %lf bytes\n");

    float num1;
    printf("Size of float = %f bytes\n");

    return 0;
}