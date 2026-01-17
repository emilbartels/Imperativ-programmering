#include <string.h>
#include <stdio.h>

struct bilkort_t {
    char navn[21];
    int topfart;
    int hestekraft;
    int acc;
    int miy;
};

typedef struct bilkort_t bilkort_t;

void print_kort(bilkort_t b);
bilkort_t hurtigst(bilkort_t b1, bilkort_t b2);

int main(void){
    bilkort_t Lotus = {"Lotus", 200, 110, 8, 1973};
    bilkort_t Mercedes = {"Mercedes", 300, 400, 4, 2000};
    print_kort(Lotus);
    print_kort(Mercedes);

    bilkort_t bil = hurtigst(Lotus, Mercedes);
    printf("Den hurtigeste bil ud af de 2 er: %s\n", bil.navn);
    return 0;
}

void print_kort(bilkort_t b){
    char name[21];
    strcpy(name, b.navn);

    printf("Navn = %s\n", name);

    int tf = b.topfart;
    printf("Topfart = %d\n", tf);

    int hk = b.hestekraft;
    printf("Hestekrafter = %d\n", hk);

    int accel = b.acc;
    printf("Acceleration = %d\n", accel);

    int madeiy = b.miy;
    printf("Produktions år = %d\n\n\n\n", madeiy);


}

bilkort_t hurtigst(bilkort_t b1, bilkort_t b2){
    //Beregn om b1 eller b2 er hurtigt
    bilkort_t h;

    if (b1.topfart > b2.topfart){
        h = b1;
    }
    else if (b1.topfart < b2.topfart){
        h = b2;
    }
    else {
        printf("De 2 biler er lige hurtige");
    }
    //returner navnet på den hurtigeste
    return h;
}