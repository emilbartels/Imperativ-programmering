#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char *alvor(char str[]);

int main(void){
    char str[] = "Emil er super flot";
    char *str2;
    str2 = alvor(str);
    
    printf("Her er den gamle streng: %s\n", str);

    printf("Vi tilføjer!!!! '!'\n");
    printf("Her er den nye streng for alvor!: %s\n", str2);
    free(str2);
    return 0;
}

char *alvor2(char str[]){
    char *str_ny;
    strcpy(str_ny, str);
}


char *alvor(char str[]){
    int i = 0;
    char *str_ny = (char *) malloc((strlen(str) + 2) * sizeof(char));
    if (str_ny == NULL) {
        printf("Fejl: kunne ikke allokere hukommelse\n");
        exit(EXIT_FAILURE);
    }
    //Gør plads til alle bogstaver + 1 nulkarakter + 1 !^^
    while(str[i] != '\0'){
        str_ny[i] = str[i];
        i++;
    }
    str_ny[i] = '!';
    i++;
    str_ny[i] = '\0';
    return str_ny;
}

