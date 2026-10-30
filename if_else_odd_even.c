/*This program accepts the user's score in an exam and tell whether they've passed or not. Passmark is 55%. Extra credit: reject score above 100 or less than 0*/



#include <stdio.h>

int main()
{
    //variables to be used in the program
    int score;

    //prompt and read the user's score
    printf("Please enter your score:\n");
    scanf("%d",&score);

    //use the 'if...else' construct to determine the user has passed or failed
    if(score >= 55 && score <= 100)
        printf("\n%d you have passed the exam",num);
    else if(score <55)
        printf("\n%d you have failed the exam",num);

    return 0;
}
