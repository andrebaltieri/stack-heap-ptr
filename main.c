#include <stdio.h>

void squareVal(int v) {
    v *= v;
    printf("-- Square VAL\n");
    printf("Address of v: %p\n", &v);
    printf("Val of v: %i\n", v);
}

void squarePtr(int *v) {
    printf("-- Square PTR");
    *v *= *v;
    printf("Address of v: %p\n", &v);
    printf("Val of v: %i\n", *v);
}

int main() {
    int a = 12, b = 33;

    int *ptr_a = &a;
    int *ptr_b = &b;

    printf("Value of a: %i\n", a);
    printf("Address of a: %p\n", &a);
    printf("--\n");
    printf("Value of b: %i\n", b);
    printf("Address of b: %p\n", &b);
    printf("--\n");
    printf("Address of a(Pointer): %p\n", ptr_a);
    printf("Address of b(Pointer): %p\n", ptr_b);
    printf("--\n");
    squareVal(a);
    squarePtr(&a);
    return 0;
}


