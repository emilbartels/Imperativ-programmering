#include <string.h>
#include <stdio.h>

//Laver vores struct planet
struct planet {
    char navn[20];
    long double volume;
    long double masse;
};
typedef struct planet planet;

//prototype:
long double get_massefylde(planet p);

int main(void){
    planet jorden = {"Jorden", 1083210000000000, 5.972E24};
    long double massefylde = get_massefylde(jorden);
    printf("Massefylde af %s er: %Lf \n", jorden.navn, massefylde);
}

long double get_massefylde(planet p){
    long double massefylde = p.masse / p.volume;
    return massefylde;
}