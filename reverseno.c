#include <stdio.h>
#include <stdlib.h>

int main() {
    int number=0;
    int reverse=0;
    printf("Enter the integers you want to Reverse: \n");
    scanf("%d",&number);

    int original_number = number;

    while(number!=0) {

        int last_digit;
        last_digit=number%10;
        reverse=reverse*10+last_digit;
        number=number/10;
    }
    printf("The reverse of the number %d is %d",original_number,reverse);
}
