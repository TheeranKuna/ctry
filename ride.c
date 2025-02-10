#include <stdio.h>

int main() {
    
int weight = 0;
printf("Enter the weight of the comet: ");
scanf("%d", &weight);

int height = 0;
printf("Enter the height of the comet: ");
scanf("%d", &height);


if (height > 150 && weight > 50)
{
    printf("The comet is ready for the ride!\n");
 

}

else
{
    printf("The comet is not ready for the ride!\n");
    
}

    

    
    
    
    
    
    
    
    return 0;
}
