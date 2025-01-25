#include <stdio.h>
#include <ctype.h>


void print_result(float result) {
    printf("The result of the operation is: %.2f\n", result);
}

void add(int num1, int num2) {
    float result = num1 + num2;
    print_result(result);
}

void subtract(int num1, int num2) {
    float result = num1 - num2;
    print_result(result);
}

void multiply(int num1, int num2) {
    float result = num1 * num2;
    print_result(result);
}

void divide(int num1, int num2) {
    if (num2 != 0) {
        float result = (float)num1 / num2;
        print_result(result);
    } else {
        printf("Error: Division by zero is not allowed.\n");
    }
}

int main() {
    int num1, num2;
    char operator;

    printf("Enter the first integer: ");
    scanf("%d", &num1);

    printf("Enter the second integer: ");
    scanf("%d", &num2);

    printf("Enter the operation (a for add, s for subtract, m for multiply, d for divide): ");
    scanf(" %c", &operator);
    operator = tolower(operator);

    switch (operator) {
        case 'a':
            add(num1, num2);
            break;
        case 's':
            subtract(num1, num2);
            break;
        case 'm':
            multiply(num1, num2);
            break;
        case 'd':
            divide(num1, num2);
            break;
    }

    return 0;
}