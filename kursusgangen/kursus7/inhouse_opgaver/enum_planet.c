#include <stdio.h>
#include <stdlib.h>

//laver enum for planter
enum planeter {Merkur = 1, Venus, Jorden, Mars, Jupiter, Saturn, Uranus, Neptun};
typedef enum planeter planeter;

//prototype af circumference
void circumference(planeter p);

//Prototype af planet_of_int
planeter planet_of_int(int c);

int main(void){
    int valg_af_planet;
    planeter p;

    printf("Position fra solen: \n 1: Merkur \n 2: Venus \n 3: Jorden \n 4: Mars \n 5: Jupiter \n 6: Saturn \n 7: Uranus \n 8: Neptun \n");
    printf("Skriv hvilken planet du gerne vil have omkredsen af ift. positionen fra solen: \n");
    scanf(" %d", &valg_af_planet);

    planeter valgt_planet = planet_of_int(valg_af_planet);
    circumference(valgt_planet);
    return 0;
}

void circumference(planeter p){
    switch(p){
        case Merkur:
            printf("Merkur har en omkreds på 15329km\n");
            break;
        case Venus:
            printf("Venus har en omkreds på 37600km\n");
            break;
        case Jorden:
            printf("Jorden har en omkreds på 40075km \n");
            break;
        case Mars:
            printf("Mars har en omkreds på 21340km \n");
            break;
        case Jupiter:
            printf("Jupiter har en omkreds på 449000km \n");
            break;
        case Saturn:
            printf("Saturn har en omkreds på 365800km\n");
            break;
        case Uranus:
            printf("Uranus har en omkreds på 159350km\n");
            break;
        case Neptun:
            printf("Neptun har en omkreds på 155600km\n");
            break;
    }

    }



planeter planet_of_int(int c){
    planeter p;

    switch(c){
        case 1:
            p = Merkur;
            break;
        case 2:
            p = Venus;
            break;
        case 3:
            p = Jorden;
            break;
        case 4:
            p = Mars;
            break;
        case 5:
            p = Jupiter;
            break;
        case 6:
            p = Saturn;
            break;
        case 7:
            p = Uranus;
            break;
        case 8:
            p = Neptun;
            break;
        default:
            printf("Forkert planet nummer!\n");
            exit(EXIT_FAILURE);
    };
    return p;
    }