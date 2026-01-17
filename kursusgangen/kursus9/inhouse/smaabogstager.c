#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>

int antal_smaa_bogstaver(char string[]);

int main(void){
    char str[] = "Rasmus er en flot mand";

    printf("Her er vores streng: %s\n", str);

    int counter = antal_smaa_bogstaver(str);
    printf("Der er %d små bogstaver i vores string\n", counter);
}


//lav en function der tæller små bogstaver i en streng
//brug af islower(char c), fra ctype.h. Returnere true hvis char er lille bogstav
int antal_smaa_bogstaver(char string[]){
    int counter = 0;
    int i = 0;

    while(string[i] != '\0'){
        if(islower(string[i])){
            counter++;
        }
        i++;
    }
\
    return counter;
}

