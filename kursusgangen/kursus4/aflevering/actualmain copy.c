#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main(void){
    int c, n;

    //Indtaster n og c
    printf("Indtast to cifre. N som skal være >= 1, og c som er mellem 0-9: ");
    scanf(" %d %d", &n, &c);

    //Error outputs til useren hvis man indtaster forkerte tal
    if (!(n >= 1))
        printf("Du har indtastet %d, som er ugyldig værdi\n", n);
    if (!(c >= 0 && c <= 9))
        printf("Du har indtastet %d, som er ugyldig værdi\n", c);

    //counteren for hvor mange tal der indeholder c fra 0 til n.
    int antal_tal = 0;
    int i = 1;

    //Function fundet i stackoverflow og finder antal cifre i n
    int nDigits = floor(log10(abs(n))) + 1;

    //for loop der kører alle tal mellem 0 og 100 og tjekker dem for c.
    for(int j = 0; j <= n; j++) {
    //For loop der tjekker alle cifre for c i et tal.
        for(i = 1; i <= nDigits; i++) {
            int t = j;
            if (t % 10 == c)
                antal_tal++;
            else
                t = t / 10;
        }
    }
    printf("for alle tal fra 0 til og med %d, er %d i %d af dem\n", n, c, antal_tal);


    return 0;
}