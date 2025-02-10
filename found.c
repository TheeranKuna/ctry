#include <stdio.h>
#include<string.h>

int main() {




char s1[20];

printf("Enter\n");
scanf("%s", s1);

int i =0;
 
while (s1[i] != '\0') {

    if (s1[i] == '0') {
        printf("Found 0 \n");
        i++;
    }

    printf("s1: %s\n", s1);
    i++;
}

return 0;
}
