#include <stdio.h>

int main(void){
    double kasse[10]; //Det her er en type "double array"
    double rabat[10];
    double rabat_vare, pris;

    for(int i = 0; i < 10; i++){  //Loader pris ind i array
        printf("Indtast pris paa varen: ");
        scanf(" %lf", &pris);
        kasse[i] = pris;

        printf("Indtast rabaten paa vare %d som koster %.2lf: \n", i, pris);
        scanf(" %lf", &rabat_vare);
        if(rabat_vare >= 0 && rabat_vare < 1){
            rabat[i] = rabat_vare;
        }
        else{
            printf("Det er for forkert rabat bro?\n");
            rabat[i] = 0;
            printf("Haha ingen rabat :)\n");
        }
    }

    for(int i = 0; i < 10; i++){ //Printer index og pris
        printf("Index: %d, Value: %.2lf, Rabat: %.2lf", i, kasse[i], rabat[i]);
    }

    double samlet_pris = 0;
    for(int i = 0; i < 10; i++){
        samlet_pris = samlet_pris + kasse[i] * (1 - rabat[i]);
    }
    printf("Den samlede pris er: %.2lf\n", samlet_pris);
}
 