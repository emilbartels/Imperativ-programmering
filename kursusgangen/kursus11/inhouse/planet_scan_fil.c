#include <stdio.h>
#include <stdlib.h>

typedef struct {
    char navn[30];
    double radius;
    double volumen;
    double masse;
} planet;

void print_planet(planet p);
void laes_planeter(FILE *f, planet p[], int length); 

int main(void){
    planet planets[20]; 

    FILE *f = fopen("planet.txt","r"); 
    if(f == NULL){ 
        printf("Filen kunne ikke aabnes.\n"); 
        exit(EXIT_FAILURE); 
    }

    laes_planeter(f, planets, 2); 
    
    print_planet(planets[0]);
    print_planet(planets[1]);

    fclose(f); 

    return 0; 
}

void print_planet(planet p){
    printf("Navn: %s\n", p.navn);
    printf("Radius: %lf\n", p.radius);    
    printf("Volumen: %lf\n", p.volumen);
    printf("Masse: %lf\n\n", p.masse);
}

void laes_planeter(FILE *f, planet p[], int length){
    for(int i = 0; i < length; i++){
        fscanf(f, "%s %lf %lf", p[i].navn, &p[i].radius, &p[i].masse); 
        p[i].volumen = 0.0; 
    }
}