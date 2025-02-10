#include <stdio.h>

int main(void) {
    float x = 5.2;
    double y = 9.2;

    printf("x: ");
    scanf("%f", &x); // store a floating value in x
    scanf("%f", &x);
    getchar();  // Clear buffer

    printf("x: %f\n", x); // Added newline for better output formatting

    printf("y: ");
    scanf("%lf", &y);
    printf("y: %f\n", y); // Added newline and corrected syntax

    return 0;
}
