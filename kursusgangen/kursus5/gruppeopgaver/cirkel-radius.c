#include <stdio.h>

#define PI 3.1415

//Vi laver en prototype så vi kan have selve functionen nede under main. 
double omkreds(double r);

int main(void){
    double radius;
    double omkr;

    printf("Indtast radius: \n");
    scanf(" %lf", &radius);

    omkr = omkreds(radius);
    printf("Her er omkredsen: %lf\n", omkr);

    return 0;
}

double omkreds(double r){
    double om = 2 * PI * r;
    return om;
}