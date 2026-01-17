#include <stdio.h>
#include <stdlib.h>
#include <time.h>

//Laver vores 3 enums for hhv. forret, hovedret og dessert
enum forret{guacamole, tarteletter, lakserulle, graeskarsuppe};
enum hovedret{gyldenkael, hakkebøf, gullash, forloren_hare};
enum dessert{pandekager_med_is, gulerodskage, choklademousse, citronfromage};

//definerer enums så jeg ikke skriver enum hver gang
typedef enum forret forret;
typedef enum hovedret hovedret;
typedef enum dessert dessert;

//prototype af maaltid function
void maaltid(int *rand_forret, int *rand_hovedret, int *rand_dessert);

//prototype af print_forret, print_hovedret, print_dessert
void print_forret(forret mad);
void print_hovedret(hovedret mad);
void print_dessert(dessert mad);



int main(void){
//generer et seed for random, baseret på sekunder gået siden 1970, så altid nyt seed hver gang man kører programmet.
    srand(time(NULL));
    int rand_forret, rand_hovedret, rand_dessert;
    int i;

    //printer 25 random forretter
    printf("Nu har vi fundet dine 25 forskellige maaltider til dig: \n");
    for(i = 1; i <= 25; i++){
        maaltid(&rand_forret, &rand_hovedret, &rand_dessert);
        printf("Meny %d: ", i);
        print_forret(rand_forret); print_hovedret(rand_hovedret); print_dessert(rand_dessert);
        printf("\n");
    };

    return 0;
}

void maaltid(int *rand_forret, int *rand_hovedret, int *rand_dessert){
    *rand_forret = rand() % 4 + 1;
    *rand_hovedret = rand() % 4 + 1;
    *rand_dessert = rand() % 4 + 1;
}


void print_forret(enum forret mad){
  switch(mad){
    case 1:
      printf("guacamole ");
      break;
    case 2:
      printf("tarteletter ");
      break;
    case 3:
      printf("lakserulle ");
      break;
    case 4:
        printf("graeskarsuppe ");
        break;
  }
}

void print_hovedret(hovedret mad){
  switch(mad){
    case 1:
      printf("gyldenkael ");
      break;
    case 2:
      printf("hakkeboef ");
      break;
    case 3:
      printf("gullash ");
      break;
    case 4:
        printf("forloren_hare ");
        break;
  }
}
void print_dessert(dessert mad){
  switch(mad){
    case 1:
      printf("pandekager med is ");
      break;
    case 2:
      printf("gulerodskage ");
      break;
    case 3:
      printf("choklademousse ");
      break;
    case 4:
        printf("citronfromage ");
        break;
  }
}
