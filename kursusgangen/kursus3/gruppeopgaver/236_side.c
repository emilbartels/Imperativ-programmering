#include <stdio.h>

int main(void){
    int ph;

    printf("Indtast en ph-værdi: ");
    scanf(" %d",&ph);

    if (ph < 2)
        printf("Very acidic\n");
    else if (ph < 7)
        printf("Acidic\n");
    else if (ph == 7)
        printf("Neutral\n");
    else if (ph < 12)
        printf("Alkaline\n");
    else if (ph > 12)
        printf("Very alkaline\n");

    return 0;
}