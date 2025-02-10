#include <stdio.h>

int main() {


    double initial = 0, step = 0, stop = 0;


do 
    {
        printf("Enter the initial value: ");
        scanf("%lf", &initial);
        if (initial < 0)
        {
            printf("Invalid input\n");
        }
        
    }while(initial<0);


do 
    {
        printf("Enter the step value: ");
        scanf("%lf", &step);
        if (step < 0)
        {
            printf("Invalid input\n");
        }
        
    }while(step<0);

do 
    {
        printf("Enter the stop value: ");
        scanf("%lf", &stop);
        if (step < 0)
        {
            printf("Invalid input\n");
        }
        
    }while(stop<0);


for (double first = initial, factor = 3.8, result=0; first <= stop; first += step)

    {
        printf("%.2lf\n", first);
        result = first * factor;
        printf("%.2lf\n", result);
        
    }


















    return 0;
}
