#include <stdio.h>

int main() {

int number=56;


switch (number)


{

    case 0:
    printf("The number is 0\n"); //check if the number is 0
    break; //adding a break statement would stop the program from printing the next line

    case 1:
    printf("The number is 1\n"); //after first case it would print this line as well //check if the number is 1

    case 2:
    printf("The number is 2\n"); // adding a break statement would stop the program from printing the next line //check if the number is 0

    default:
    printf("The number is not 0, 1 or 2\n"); //if the number is not 0, 1 or 2 it would print this line

}









    return 0;


    
}
