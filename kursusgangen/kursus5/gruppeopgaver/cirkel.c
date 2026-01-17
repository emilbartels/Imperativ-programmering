#include <stdio.h>
#include <math.h>

#define PI 3.1415

//Vi laver en prototype så vi kan have selve functionen nede under main. 
double omkreds(double r);

//prototype af areal
double areal(double r);

int main(void){
    double radius;
    double omkr_svar, areal_svar;
    int valg;

    //vælge enten areal eller omkreds
    do{
    printf("Vil du udregne areal (1) eller omkreds (2)?\n");
    scanf(" %d", &valg);

    printf("Indtast radius: \n");
    scanf(" %lf", &radius);
    if (valg == 1){
        areal_svar = areal(radius);
        printf("Arealet af en cirkel med %lf radius er: %lf\n", radius, areal_svar);
    }

    else if (valg == 2){
        omkr_svar = omkreds(radius);
        printf("Omkredsen af en cirkel med %lf radius er: %lf\n", radius, omkr_svar);
    }
    else {
        printf("Du har skrevet en forkert værdi for enten areal (1) eller omkreds (2). Prøv igen :)\n");
    }
    }
    
    while(valg != 1 && valg != 2);
    
    return 0;
}

double omkreds(double r){
    double om = 2 * PI * r;
    return om;
}

double areal(double r){
    double a = PI * pow(r,2);
    return a;
}