/*
Hvis et navneord ender i et "y" fjernes "y" og der tilføjes "ies".
Hvis et navneord ender i et "s", "ch" eller "sh" tilføjes et "es".
I alle andre tilfælde tilføjes et "s" til navneordet.

Navneord:
chair dairy boss circus fly dog church clue dish
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void flertal(char *navneord);

int main(void) {
    char navneord[20] = "";
    printf("Indtast engelsk navneord: \n");
    scanf("%s", navneord);

    printf("Navneord i ental: %s\n", navneord);

    //flertal
    flertal(navneord);


    return 0;
}

void flertal(char *navneord) {
//regler :
/*
Hvis et navneord ender i et "y" fjernes "y" og der tilføjes "ies".
Hvis et navneord ender i et "s", "ch" eller "sh" tilføjes et "es".
I alle andre tilfælde tilføjes et "s" til navneordet.
*/

    int length = strlen(navneord);

    char flertal_str[length + 2];
    strcpy(flertal_str, navneord);

    if(navneord[length - 1] == 'y') {       
        flertal_str[length - 1] = '\0';     // dair\0
        strcat(flertal_str, "ies");          // dairies\0
    } else if(navneord[length - 1] == 's' || (navneord[length - 1] == 'h' && navneord[length - 2] == 'c') || (navneord[length - 1] == 'h' && navneord[length - 2] == 's')) {
        flertal_str[length] = '\0';
        strcat(flertal_str, "es");
    } else {
        strcat(flertal_str, "s");
        }

    printf("%s", flertal_str);

}