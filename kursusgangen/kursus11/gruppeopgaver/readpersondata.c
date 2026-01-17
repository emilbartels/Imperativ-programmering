#include <string.h>
#include <stdio.h>
#define MAX_NAME_LGT 50
#define LENGTH 11

struct person{
    char fornavn[MAX_NAME_LGT];
    char efternavn[MAX_NAME_LGT];
    char vejnavn[MAX_NAME_LGT];
    int vejnummer;
    int postnummer;
    char bynavn[MAX_NAME_LGT];
  };
typedef struct person person;

void read_file(FILE *f, person personer[],int length);
int sortingsvin(const void *p1, const void* p2);

int main(void){
    person personer[LENGTH];
    FILE *f = fopen("input.txt", "r");
    read_file(f, personer, LENGTH);

    qsort(personer, LENGTH, sizeof(person), sortingsvin);
    
    for(int i = 0; i < LENGTH; i++){
        printf("%s: %s\n", personer[i].bynavn, personer[i].efternavn);
    }


}
//Hadsten: Jensen
void read_file(FILE *f, person personer[],int length){
    for(int i = 0; i < length; i++){
        fscanf(f, " %49[A-Za-z] %49[A-Za-z], %[^0-9] %d, %d %49[A-Za-z]. ", 
            personer[i].fornavn, 
            personer[i].efternavn, 
            personer[i].vejnavn, 
            &personer[i].vejnummer, 
            &personer[i].postnummer, 
            personer[i].bynavn);
    }
}

//Lars Jensen, Engtoften 23, 7182 Bredsten.

int sortingsvin(const void *p1, const void* p2){
    return strcmp(((person*)p1)->efternavn, ((person*)p2)->efternavn);
}