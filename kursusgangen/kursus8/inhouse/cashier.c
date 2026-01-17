#include <stdio.h>

int main(void){
    double kasse[10]; //Det her er en type "double array"


    for(int i = 0; i < 10; i++){
        double pris;

        printf("Indtast pris paa varen: ");
        scanf(" %lf", &pris);
        kasse[i] = pris;
    }

        for(int i = 0; i < 10; i++){
        printf("Index: %d, Value: %.2lf\n", i, kasse[i]);
    }

    double samlet_pris = 0;
    for(int i = 0; i < 10; i++){
        samlet_pris = samlet_pris + kasse[i];
    }
    printf("Den samlede pris er: %.2lf\n", samlet_pris);
}
 