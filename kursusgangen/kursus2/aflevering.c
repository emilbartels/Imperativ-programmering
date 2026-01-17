#include <stdio.h>

int main(void) {
    int sekunder;
    int min, timer, dage, uger;
    int rest_sekunder, rest_min, rest_timer, rest_dage;

    printf("Indtast et helt antal sekunder du vil omregne: ");
    scanf("%d",&sekunder);

    min = sekunder / 60;
    timer = min / 60;
    dage = timer / 24;
    uger = dage / 7;

    rest_sekunder = sekunder % 60;
    rest_min = min % timer;
    rest_timer = timer % dage;
    rest_dage = dage % uger;


    printf("%d sekunder vil svare til:\n", sekunder);
    printf("%d uger\n", uger);
    printf("%d dage\n", rest_dage);
    printf("%d timer\n", rest_timer);
    printf("%d minuter\n", rest_min);
    printf("%d sekunder\n", rest_sekunder);

    return 0;
}