#include <stdio.h>

int main() {
    int number =0;
    int max =-1;

    while (number != -1) 
    {
        printf("Enter a number: ");
        scanf("%d", &number);
        if (number > max) 
        {
            max = number;
        }
    }

    printf("The largest number is %d\n", max);



    
    
    
    return 0;
}
