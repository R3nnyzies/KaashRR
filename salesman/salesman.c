#include <stdio.h>

#define Salesman_number 10
#define number_of_items 5

int main() 
{
    char names[Salesman_number][50];
    int sales[Salesman_number][number_of_items];
    int totals[Salesman_number] = {0};
    int grand_total = 0;

    // Input data for each salesman
    for (int i = 0; i < Salesman_number; i++) {
        printf("Enter salesman %d's name: ", i + 1);
        scanf("%49s", names[i]);

        printf("Enter sales for 5 items (space-separated): ");
        for (int j = 0; j < number_of_items; j++) {
            scanf("%d", &sales[i][j]);
            totals[i] += sales[i][j];
        }
        grand_total += totals[i];
    }

    // Print table headers
    printf("\n| %-10s | Item1 | Item2 | Item3 | Item4 | Item5 | TotalSales |\n", "Name");
    printf("|------------|-------|-------|-------|-------|-------|------------|\n");

    // Print each salesman's data
    for (int i = 0; i < Salesman_number; i++) {
        printf("| %-10s ", names[i]);
        for (int j = 0; j < number_of_items; j++) {
            printf("| %5d ", sales[i][j]);
        }
        printf("| %10d |\n", totals[i]);
    }

    // Print grand total row
    printf("|------------|-------|-------|-------|-------|-------|------------|\n");
    printf("| GrandTotal |%10d |\n", grand_total);

    return 0;
}