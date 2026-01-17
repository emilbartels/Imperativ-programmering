#include <stdio.h>
#define KM_TO_MILES 1.609

int main(void) {
    double miles, km;

    printf("Indtast hvor mange miles vi skal convert til kilometer:");
    scanf("%lf",&miles);

    km = KM_TO_MILES * miles;

    printf("\n%lf miles er lig med %lf km\n", miles, km);

    return 0;

    
}