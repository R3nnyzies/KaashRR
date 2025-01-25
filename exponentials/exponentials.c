#include <stdio.h>

double compute_exponential(int x, int terms) {
    double sum = 1.0; 
    double term = 1.0; 

    for (int i = 1; i <= terms; i++) {
        term *= (double)x / i; 
        sum += term; 
    }

    return sum;
}

int main() {
    int x, terms;

    printf("Enter the value of x: ");
    scanf("%d", &x);
    printf("Enter the number of terms to compute: ");
    scanf("%d", &terms);

    double result = compute_exponential(x, terms);
    printf("The value of e^%d is approximately: %.6f\n", x, result);

    return 0;
}
