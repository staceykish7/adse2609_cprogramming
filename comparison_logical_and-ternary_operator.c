
/* this program accepts the radious of a ciecle from the user, calculators and displays its area, and circumference.*/



// pre-processor directives


#include <stdio.h>
#define MYPI3.141593//Define pi as a constant

//main function provides the entry point to the program

int main()

{
    //variables to be used in the program
    float radius, area, circumference;

    //prompt the user for the circle's radius
    printf("please enter the radius of the circle in cm.\n");
    scanf("%f",&radius);

    //calculate the area and circumference of the circle
    area = MYPI * radius * radius;
    circumference=MYPI*(radius*2);

    //Display the circles dimentions
    printf("\nCircle's Dimentions");
    printf("\n------------------------------------------");
    printf("\n%-13s:%6.2f cmm.","Radius", radius);
    printf("\n%-13s:%6.2f cm².","Area",area);
    printf("\n%-13s:%6.2f cm.","Circumference",circumference);
    printf("\n------------------------------------------");


    return 0 ;
}

