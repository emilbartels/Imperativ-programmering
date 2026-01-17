#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

#define PI 3.14159
#define MAX_LENGTH 20

struct planet{
    char navn[30];
    double radius;
    double volumen;
    double masse;
};
typedef struct planet planet;

planet indlaes_planet(void);
void print_planet(planet p);
void gem_planet_i_fil(FILE *f, planet p);
void gem_alle_i_fil(FILE *f, planet pArray[], int length);
planet laes_fil(FILE *f, planet pA[], int length);

int main(void){
    planet p1 = {"Earth", 12756/2, 1.08e12, 5.97e24};
    planet p2 = {"Mars", 6792/2, 1.63e11, 6.42e23};
    planet pArray[2] = {p1, p2};
    planet pA[MAX_LENGTH];
    //print_planet(p1);
    //print_planet(p2);

    /*
    I en fil udsrkiv som: Navn Radius Masse
    */

    FILE *f = fopen("planet.txt", "w");
    if (f == NULL){
        printf("VI kunne ikke printe til en fil :(");
        exit(EXIT_FAILURE);
    }
    int length = 2;
    //gem_planet_i_fil(f, p1);
    gem_alle_i_fil(f, pArray, length);

    return 0;
}

planet indlaes_planet(void){
    planet min_planet;

    printf("Her: %lf\n", 4.0/3.0);

    printf("Indtast et navn: \n");
    scanf("%s", min_planet.navn);
    printf("Indtast radius: \n");
    scanf("%lf", &(min_planet.radius));
    printf("Indtast masse: \n");
    scanf("%lf", &(min_planet.masse));
    min_planet.volumen =(4.0/3.0)*PI*pow(min_planet.radius,3);

    return min_planet;
}

void print_planet(planet p){
    printf("Navn: %s\n", p.navn);
    printf("Radius: %lf\n", p.radius);    
    printf("Volumen: %lf\n", p.volumen);
    printf("Masse: %lf\n\n", p.masse);
}

void gem_planet_i_fil(FILE *f, planet p){

    fprintf(f,"\n Navn: %s", p.navn);
    fprintf(f, "\n Radius: %lf", p.radius);
    fprintf(f, "\n Masse: %lf\n", p.masse);
}

void gem_alle_i_fil(FILE *f, planet pArray[], int length){
    for(int i = 0; i < length; i++){
        gem_planet_i_fil(f, pArray[i]);
        fprintf(f, "\n\n");
    }
}