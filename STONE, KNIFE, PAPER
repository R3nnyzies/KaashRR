#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int computerchoice, userchoice;

    
    srand(time(NULL));

    computerchoice = rand() % 3;

  
    printf("Welcome to the Stone-Knife-Paper game!\n");
    printf("Enter your choice: 0 for Stone, 1 for Knife, 2 for Paper: ");
    scanf("%d", &userchoice);

   
    printf("You chose: ");
    switch (userchoice) {
        case 0: printf("Stone\n"); break;
        case 1: printf("Knife\n"); break;
        case 2: printf("Paper\n"); break;
        
    }

    printf("Computer chose: ");
    switch (computerchoice) {
        case 0: printf("Stone\n"); break;
        case 1: printf("Knife\n"); break;
        case 2: printf("Paper\n"); break;
    }

    
    if (userchoice == computerchoice) {
        printf("It's a draw!\n");
    } else if ((userchoice == 0 && computerchoice == 1) ||   
               (userchoice == 1 && computerchoice == 2) ||   
               (userchoice == 2 && computerchoice == 0)) 
    {   
        printf("You win!\n");
    } else 
    {
        printf("Computer wins!\n");
    }

return 0;
}
