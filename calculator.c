#include<stdio.h>

int main () {
    double num1, num2, results;
    char operator;

    printf("Enter the first number: ");
    scanf("%lf", &num1);
    printf("Enter the operator: ");
    scanf(" %c", &operator);
    printf("Enter the second number: ");
    scanf("%lf", &num2);

    switch (operator) {
        case '+':
            results = num1 + num2;
            break;
        case '-':
            results = num1 - num2;
            break;
        case '*':
            results = num1 * num2;
            break;
        case '/':
            results = num1 / num2;
            break;
        default:
            printf("Invalid operator");
    }

    return 0;
}