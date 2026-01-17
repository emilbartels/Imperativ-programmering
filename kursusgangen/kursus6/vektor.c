#include <stdio.h>

//prototype af void
void add(int u1, int u2, int v1, int v2, int *w1, int *w2);

int main(void){
    int u1, u2;
    int v1, v2;
    int w1, w2;

    printf("Indtast 2 værdier for vektor 1: \n");
    scanf(" %d %d", &u1, &u2);

    printf("Indtast nu 2 værdier for vektor 2: \n");
    scanf(" %d %d", &v1, &v2);

    add(u1, u2, v1, v2, &w1, &w2);

    printf("Her har vi så summen af de 2 vektorer: \n%d\n%d\n", w1, w2);

    return 0;
}

void add(int u1, int u2, int v1, int v2, int *w1, int *w2){
    //Udregninger af vektorens værdier og smider dem i pointeren w1 og w2
    *w1 = u1 + v1;
    *w2 = u2 + v2;
}