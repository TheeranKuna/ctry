#include <stdio.h>

int main() {

    int number = 0;


    do 
    {
        printf("Enter a number (>0): ");
        scanf("%d", &number);

    if (number<=0)
        
            printf("Invalid input. Please enter a number greater than 0.\n");
           
    



    } 

    while (number <=0);












    return 0;


    
}
