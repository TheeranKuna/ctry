#include <stdio.h>

int main(void) 

{
    int a[] = {1, 2, 3, };

    int *p;
    p = a; // p = &a[0], p[1] = a[1], p[2] = a[2]


    printf("%d\n", p[1]); // print the second element of the array a
    printf("p: %p\n,", p);
    printf("a: %p\n", a);
















    return 0;    
}
