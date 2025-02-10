#include <stdio.h>

int main() {




    int a =5;
    int b = 10;

    int *p;
    p = &b;

    printf("%d\n", *p); // dereferencing the pointer p would lead to the value of b
    printf("%d\n", p); // this would print the address of b
    printf("%d\n", &a); // this would print the address of p




    return 0;


    
}
