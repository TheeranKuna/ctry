#include <stdio.h>

double mult( double x, double y);
double power( double X, int n);

int main() {

printf("The power of 2^3 is %f\n", power(2,3));






    return 0;


    
}

double mult( double x, double y){
    return x*y;
}

double power( double X, int n){
    double result = 1;
    for(int i = 0; i < n; i++){ //Start with i = 0 (a counter). If i is less than n, increment i by 1.
        result = mult(result, X);
    }
    return result;
}
