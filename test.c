#include <stdio.h>

int main() {
    printf("Hello, World!\n");

    int a = 10;
    int b = 20;
    int* p = &a;
    int* q = &b;
    printf("a = %d\n", a);
    printf("p = %p\n", p);
    printf("*p = %d\n", *p);
    printf("b = %d\n", b);
    printf("q = %p\n", q);
    printf("*q = %d\n", *q);

    p = q;
    printf("p = %p\n", p);
    printf("*p = %d\n", *p);
    return 0;
}
