#include <string.h>
#include <stdio.h>

//Laver vores struct planet
struct planet {
    char navn[20];
    long double radius;
    long double volume;
    long double masse;
};
typedef struct planet planet;

//prototype:
long double get_massefylde(planet p);

int main(void){
    planet jorden = {};
    get_info(jorden);
    long double massefylde = get_massefylde(jorden);
    printf("Massefylde af %s er: %Lf \n", jorden.navn, massefylde);
}

void get_info(planet p){
    printf("Skriv navnet på planeten: (jorden) \n");
    scanf("%s", p.navn);
    printf("Indtast radius på planeten: \n");
    scanf("%Lf", p.radius);
    printf("Indtast massen på planeten: \n");
    scanf("%Lf", p.masse);
}

long double get_volume(planet p){
    
}