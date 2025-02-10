#include <stdio.h>

int main() {
    int number =10;
    float price = 10.5;
    double pi = 3.41111;
    char letter = 'A';
    char name[] = "John";

    printf("Integer: %d\n", number);
    printf("Float: %.2f\n", price);
    printf("Double: %.10lf\n", pi);
    printf("Character: %c\n", letter);

    
    return 0;
}