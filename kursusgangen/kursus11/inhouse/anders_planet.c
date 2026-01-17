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
void print_fil_planet(FILE *f,planet p);
planet indlaes_planet(void);
void print_planet(planet p);

int main(void){
    planet p1 = {"Earth", 12756/2, 1.08e12, 5.97e24};
    planet p2 = {"Mars", 6792/2, 1.63e11, 6.42e23};
    planet pA[2] = {};
    print_planet(p1);
    print_planet(p2);

    FILE *f = fopen("planet.txt","w");
    if(f==NULL){
      printf("Filen blev ikke aabnet! :-(\n");
      exit(EXIT_FAILURE);
    }
/*
    print_fil_planet(f,p1);
    print_fil_planet(f,p2);
*/
    laes_fil(f, pA, 2);

    fclose(f);
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

void print_fil_planet(FILE *f,planet p)
{
    fprintf(f,"%s %lf %lf \n",p.navn,p.radius,p.masse);
}

planet laes_fil(FILE *f, planet pA[], int length){
    for(int i = 0; i < length; i++){
        planet p;
        int succes = fscanf(f, "%s %lf %lf", p.navn, &p.radius, &p.masse);
        if(succes != 3){
            break;
        }
        pA[i] = p;
    }
}

/*
void laes_flere_kort_fra_fil(FILE *f, bilkort biler[], int length){
  for(int i = 0; i < length; i++){
     bilkort b;
     int succes = fscanf(f, "%s %d %d %d %d", b.navn, &b.top_fart, &b.hk, &b.acceleration, &b.ccm);
     if(succes != 5){
       break;
     }
     biler[i] = b;
  }
     */