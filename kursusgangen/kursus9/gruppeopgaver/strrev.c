#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void) {
    char str[] = "string";
    printf("Normal: %s\n", str);

    char omvendt_str[strlen(str)];
    strcpy(omvendt_str, str);


    printf("Omvendt: %s\n", strrev(omvendt_str));

    return 0;
}