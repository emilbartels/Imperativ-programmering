#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char *flertal(char str[]);

int main(void){
    char navneord[50] = "";
    printf("Indtast et navneord: \n");
    scanf(" %s", navneord);
    char *flertalsarray = flertal(navneord);
    printf("Navneord i flertal: %s\n", flertalsarray);
    printf("Navneord i ental: %s\n", navneord);
    return 0;
}

char *flertal(char navneord[]){
    int laengde = strlen(navneord);
    int i = 0;
    //allokering af hukommelse.
    char *flertalarray = (char *) malloc((laengde + 15) * sizeof(char));
    if (flertalarray == NULL) {
        printf("Fejl: kunne ikke allokere hukommelse\n");
        exit(EXIT_FAILURE);
    }
    //Kopi af string:
    while(navneord[i] != '\0'){
        flertalarray[i] = navneord[i];
        i++;
    }
    //check for y og erstat
    if(navneord[laengde - 1] == 'y'){
        flertalarray[laengde - 1] = 'i';
        flertalarray[laengde] = 'e';
        flertalarray[laengde + 1] = 's';
        flertalarray[laengde + 2] = '\0';
    }

    else if(navneord[laengde - 1] == 's' || 
        (navneord[laengde - 2] == 's' && navneord[laengde - 1] == 'h') ||
        (navneord[laengde - 2] == 'c' && navneord[laengde - 1] == 'h')){
        flertalarray[laengde] = 'e';
        flertalarray[laengde + 1] = 's';
        flertalarray[laengde + 2] = '\0';
    }
    else{
        flertalarray[laengde] = 's';
        flertalarray[laengde + 1] = '\0';
    }
    return flertalarray;
}