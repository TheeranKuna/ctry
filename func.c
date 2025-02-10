#include <stdio.h>

int find_max( int_a, int_b){
    if (int_a > int_b){
        return int_a;
    }
    else{
        return int_b;
    }
}




int main() {




int results  = find_max(10, 20) + 10;
printf("The results value is %d\n", results);







    return 0;


    
}
