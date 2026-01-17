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

    //Sætter i = n, for at jeg ikke ændre brugerindtastet værdi i while-loopet
    int i = n;

    while(i >= 1) {
        if (i % 10 == c) {
            printf("n: %d indeholder c: %d\n", n, c);
            break;
        }
        else {
        i = i / 10;
        }
    }

/*
    for (int i = 0; i > 10; i ++){
        if (n % 10 == c) {
            printf("n: %d indeholder c: %d\n", n, c);
        }

        int smaller_n = n / 10;

        if(smaller_n % 10 == c) {
            printf("n: %d indeholder c: %d\n", n, c);
        }
        int smaller2_n = smaller_n / 10;

        if(smaller2_n % 10 == c) {
            printf("n: %d indeholder c: %d\n", n, c);
        }
    }  
        */



    /*
    if (n % 10 == c) {
        printf("n: %d ender på c: %d\n", n, c);
    }

    else if (n % 10 != 10) {
        printf("n: %d ender ikke på c: %d\n", n, c);
    }
    */
    return 0;
}