//c program that accepts an amount of money, and the price of two products

//pre-processor directive
#include <stdio.h>

//main function provided the entry point to the program/application
int main()
{
    //Variables to be used in the program
    int amount, sugar, milk, change, cost;

    //Prompt the user for the amount
    printf("Please enter the amount:\n");
    scanf("%d",&amount);

    //Prompt the user for the variables to be added
    printf("Please enter the value of sugar:\n");
    //read in the value of the first number
    scanf("%d",&sugar);

    printf("Please enter the value of milk:\n");
    //read in the value of the second number
    scanf("%d",&milk);

    //Add the two numbers and assign the results to cost
    cost=sugar + milk;

    printf("\n%d + %d = %d\n",sugar,milk,cost);

    change=amount - cost;

    //add the two numbers and assign the change
    printf("\n%d - %d = %d\n",amount,cost,change);

    return 0;
}
