/*
side1 = m2 - n2
side2 = 2mn
hypotenuse = m2 + n2
*/

/*Program til at udregne pythagoras*/
#include <stdio.h>
int side1, side2, side3;
int m, n;

int main(void){
/*Spørg efter values for m og n*/
printf("Indtast 2 value for retvinklet trekant for at udregne den sidste ukendte side\n");
printf("Her er første tal større end andet tal: ");
scanf("%d%d", &m, &n);
side1 = m * m - n * n;
side2 = 2 * m * n;
side3 = m * m + n * n;

printf("Her har vi de 3 sider af trekanten: %d, %d, %d\n", side1, side2, side3);
return 0;
}