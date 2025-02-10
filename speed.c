#include <stdio.h>

int main(void)
{
    int speed = 0; //need to initialize the variable cause it might take values from the memory
    int time = 0;

    printf("Enter speed: ");
    scanf("%d", &speed);
    printf("Enter time: ");
    scanf("%d", &time); 
    int distance = speed * time;

    printf("Speed = %d\n", distance);

    return 0;
}