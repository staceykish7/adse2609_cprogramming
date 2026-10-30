/*This program demonstrates the 'if' selection construct. It accepts a letter of the alphabet from the user and checks if it's a vowel.*/

//Pre-processor directives
#include <stdio.h>
#include <ctype.h> //includs definition for the 'tolower()' function

int main()
{
    //character array to hold the user's name
    char userLetter;

    //prompt the user for a letter of the alphabet
    printf("Please enter a letter of the alphabet and I'll tell you whether it's vowel:\n");
    scanf("%c",&userLetter);

    //convert the user's input to lowercase
    userLetter = tolower(userLetter);

    //check whether the letter is a vowel
    if(userLetter == 'a' || userLetter == 'e' || userLetter == 'i' || userLetter == 'o' || userLetter == 'u')
        printf("\n%c is a vowel.", userLetter);

    return 0;
}
