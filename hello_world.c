
/* this program demonstarte the various comparison and logical  operators in c ,to compare two integers and display the results

NB:comparison operators produce 1 for "true" and "0" for false
*/

// pre-processor directives
// emoji windows + .

#include <stdio.h>

int main()

{
    // variables to be used in the program

    int firstNum=10 , secondNum=7;

    // display the values of the above variables
    printf("Value  of 'firstNum' and  'secondNum' are %d and %d respectively.",firstNum,secondNum);

    // demonstrate the various comparison operators
    printf("\nCOMPARISON OPERATORS");
    printf("\n========================================================");

    // EQUAL TO '==' OPERATOR
    printf("\n%d equal to (==) %d ? %s",firstNum,secondNum,(firstNum == secondNum)==1?"true":"false");

    // NOT EQUAL TO '!=' OPERATO
    printf("\n%d not equal to (!=) %d ? %s",firstNum,secondNum,(firstNum == secondNum)==1?"true":"false");

       // NOT EQUAL TO '!=' OPERATO
    printf("\n%d equal to (!=) %d ? %s",firstNum,secondNum,(firstNum != secondNum)==1?"true":"false");

      // Greater than  '>' OPERATO
    printf("\n%d greater than (>) %d ? %s",firstNum,secondNum,(firstNum >secondNum)==1?"true":"false");


      // less  than  '>' OPERATO
    printf("\n%d greater than (<) %d ? %s",firstNum,secondNum,(firstNum <secondNum)==1?"true":"false");

       // Greater than or equal to '>=' OPERATOr
    printf("\n%d greater than or equal to (>=) %d ? %s",firstNum,secondNum,(firstNum != secondNum)==1?"true":"false");

      // less than or equal to '>=' OPERATOr
    printf("\n%d greater than or equal to (<=) %d ? %s",firstNum,secondNum,(firstNum != secondNum)==1?"true":"false");

    printf ("\n logical operators");
    printf("\n============================================================");

    // logical and : Evalutates to true when all the commnad are true

    printf ("\n logical AND (&&)");
    printf("\n(%d > %d) && (%d > 0) is %s", firstNum,secondNum, firstNum,((firstNum>secondNum) && (firstNum > 0))==1?"true":"false";

    printf("\n============================================================");

    // logical or  : Evalutates to true one  all the commnad is  true

    printf ("\n logical or (&&)");
    printf("\n(%d > %d) || (%d > 0) =%d" ,firstNum,secondNum, firstNum,(firstNum>secondNum) || (firstNum > 0));
    printf("\n============================================================");

    // logical not  : Evalutates to true one  all the commnad is  true

    printf ("\n logical not  (!)");
    printf("\n(%d < %d) \n!  (%d < %d ) =%d", firstNum,secondNum,  (firstNum < secondNum ),firstNum,secondNum, !(firstNum<secondNum));
    return 0 ;
}

