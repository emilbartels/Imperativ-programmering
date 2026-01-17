/*
Write assignment statements for the following:

a. Assign a value of 0 to between if n is less than −k or greater than +k; other-
wise, assign 1.

b. Assign a value of 1 to divisor if digit is a divisor of num; otherwise,
assign a value of 0.

c. Assign a value of 1 to lowercase if ch is a lowercase letter; otherwise,
assign a value of 0.
*/

#include <stdio.h>
#include <math.h>

int main(void){

    int k, n;
    int digit, num;
    char ch;
    int between, divisor, lowercase;

    printf("Indtast værdier for k og n: \n");
    scanf(" %d %d", &k, &n);

    between = !(n < -k || n > +k);
    printf("%d\n", between);

    printf("\nIndtast værdier for digit og num: \n");
    scanf(" %d %d", &digit, &num);

    divisor = ((digit % num) == 0);
    printf("%d\n", divisor);

    return 0;
}