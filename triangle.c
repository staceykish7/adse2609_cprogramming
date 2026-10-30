
/* this program accepts three numbers from the user and displays the largest and smallest numbers.*/

#include <stdio.h>



// pre-processor directives


int main()

{
    //variables to be used in the program
    double a, b, c;
    double laregst, smallest;

    //prompt the user to enter three numbers
    printf("please enter the three numbers");
    scanf("%f %f %f", &a, &b, &c) !=3;

    //find the largest using only comparison and logical operators
     largest = (a > b) ? ((a > c) ? a : c) : ((b > c) ? b :c );

   //find the smallest using only comparison andlogical operators
   smallest = (a < b) ? ((a < c) ? a : c) : ((b < c) ? b : c);


    //Display the results
    printf("Largest number: %.2f\n", largest);
    printf("Smallest number: %.2f\n", smallest);


    return 0 ;
}

