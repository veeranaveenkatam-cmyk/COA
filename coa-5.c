#include <stdio.h>

int main() {
    int a = 10;      // Immediate
    int b;
    int *p;

    b = a;           // Direct
    p = &a;          // Indirect (address stored)
    
    printf("Value of a = %d\n", a);
    printf("Value of b = %d\n", b);
    printf("Value via pointer = %d\n", *p);

    return 0;
}