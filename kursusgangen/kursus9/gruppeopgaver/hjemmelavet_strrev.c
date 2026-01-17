#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void reversestring(char str[]);

int main(void) {
    char str[] = "";
    printf("Indtast en nice sætning eller ord: \n");
    scanf("%s", str);
    printf("Normal: %s\n", str);
    reversestring(str);
    return 0;
}

void reversestring(char str[]){
    int length = strlen(str);
    char tmp[20] = "";
    int i = length - 1;
    int d = 0;
    for(int d = 0; d < length; d++){
        tmp[d] = str[i];
        i--;
    }

    for(int g = 0; g < length; g++){
        str[g] = tmp[g];
    }
    printf("Reversed: %s\n", str);
}