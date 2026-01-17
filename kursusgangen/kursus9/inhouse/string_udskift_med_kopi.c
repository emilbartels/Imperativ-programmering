#include <stdio.h>
#include <string.h>
#include <stdlib.h>

//prototype
char *udskift(char str[], char old_letter, char new_letter);

int main(void){
//lad os lave en streng
    char str[] = "Foodback";
    char *str2;
    str2 = udskift(str, 'o', 'e');
    
    printf("Her er den gamle streng: %s\n", str);
    printf("Her er den nye streng: %s\n", str2);
    free(str2);
    return 0;
}

char *udskift(char str[], char old_letter, char new_letter){
    int i = 0;
    char *str_ny = (char *) malloc((strlen(str) + 1) * sizeof(char));
    if (str_ny == NULL) {
        printf("Fejl: kunne ikke allokere hukommelse\n");
        exit(EXIT_FAILURE);
    }
    //Gør plads til alle bogstaver + 1 nulkarakter ^^
    while(str[i] != '\0'){
        if(str[i] == old_letter){
            str_ny[i] = new_letter;
        }
        else{
            str_ny[i] = str[i];
        }
        i++;
    }
    str_ny[i] = '\0';
    return str_ny;
}
