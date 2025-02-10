#include <stdio.h>

void add_one(int *a, int *b, int *c)
{
    *a = *a + 1;
    *b = *b + 1;
    *c = *c + 1;
} 

int main(void) {

int x1 =1, x2=2, x3=3;
add_one(&x1, &x2, &x3);
;

printf("x1=%d, x2=%d, x3=%d\n", x1, x2, x3);

    return 0;


    
}




