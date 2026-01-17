#include <stdio.h>

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
   

    //selve loopet
    for (int i = 1; i <= n; i++) {
        int t = i;
        while(t > 0) {
            if (t % 10 == c) {
            antal_tal++;
            break;
            }
        t = t / 10;
        }
        }
    printf("for alle tal til og med %d, er %d i %d af dem\n", n, c, antal_tal);


    return 0;
}