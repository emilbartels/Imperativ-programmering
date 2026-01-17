#include <stdio.h>
#include <math.h>
#define CMTOINCH 0.3937

/*
Write a program to display a centimeters-to-inches conversion table. The smallest
and largest number of centimeters in the table are input values. Your table should
give conversions in 10-centimeter intervals. One centimeter equals 0.3937 inch.
*/

int main(void){
    int small_cm_input, large_cm_input;
    int i;
    double inch;

    printf("Input 2 values of centimeters you want to convert to inches. Every 10 centimeters will be converted.\n");
    printf("Enter the smaller number first then bigger bigger number): ");
    scanf("%d%d", &small_cm_input, &large_cm_input);

    //Printing the table
    printf("\nHere is the table:\n");
    i = small_cm_input;

    while(i >= small_cm_input && i <= large_cm_input) {
        inch = (i * CMTOINCH);
        printf("%d centimeters is equal to %lf inches\n", i, inch);
        i = i + 10;
    }
    return 0;
}
