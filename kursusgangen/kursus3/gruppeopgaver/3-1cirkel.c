#include <stdio.h>
#include <math.h>

int main(void){
    double r, x, y, afstand;
    double x1, y1;
    int inde_i_cirkel, ude_fra_cirkel, på_periferi;
    x1 = 0;
    y1 = 0;

 //Programmet skal afgøre om punktet (x, y) er placeret inden i cirklen, på cirkelperiferien, 
 //eller uden for cirklen. Der er altså tre tilfælde. I bedes have tre logiske udtryk, assignet til tre logiske variable, 
 //som afspejler de tre forskellige situationer.

    printf("Indtast r, x, y: ");
    scanf(" %lf %lf %lf", &r, &x, &y);

    afstand = hypot((x - x1), (y - y1));

    inde_i_cirkel = (afstand < r);
    ude_fra_cirkel = (afstand > r);
    på_periferi = (afstand == r);

    if (inde_i_cirkel == 1)
        printf("Punktet (%lf, %lf) er inde i cirklen\n", x, y);
    else if (ude_fra_cirkel == 1)
        printf("Punktet (%lf, %lf) er ude af cirklen\n", x, y);
    else
        printf("Punktet (%lf, %lf) er lige på cirkel periferien", x, y);
}