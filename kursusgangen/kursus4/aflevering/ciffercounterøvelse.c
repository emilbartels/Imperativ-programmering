#include <stdio.h>

int main(void){
    int c, n;

    printf("Indtast to cifre. N som skal være >= 1, og c som er mellem 0-9: ");
    scanf(" %d %d", &n, &c);

    if (!(n >= 1))
        printf("Du har indtastet %d, som er ugyldig værdi\n", n);
    if (!(c >= 0 && c <= 9))
        printf("Du har indtastet %d, som er ugyldig værdi\n", c);
    
    if (n % 10 == c) {
        printf("n: %d ender på c: %d\n", n, c);
    }

    else if (n % 10 != 10) {
        printf("n: %d ender ikke på c: %d\n", n, c);
    }
    return 0;
}