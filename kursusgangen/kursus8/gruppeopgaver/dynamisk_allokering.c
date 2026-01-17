#include <stdio.h>
#include <stdlib.h>
#include <time.h>

//Prototyper
double* dynamisk_allokering(int length);
void random_tal(int length, double *array);
int double_compare(const void *p1, const void *p2);

int main(void){
    srand(time(NULL));
    int length = 100;
    double *array;

    array = dynamisk_allokering(length);
    random_tal(length, array);

    //sortering af array
    qsort(array, length, sizeof(double), double_compare);

    for(int i = 0; i < length; i++){
        printf("indeks: %d, value: %lf\n", i, array[i]);
    }

    free(array);
    return 0;
}

double* dynamisk_allokering(int length){
    double *array = (double *) malloc(sizeof(double)*length);
    if (array == NULL) {
        printf("Fejl: kunne ikke allokere hukommelse\n");
        exit(1);
    }
    return array;
}

void random_tal(int length, double *array){
    double value;
    for(int i = 0; i < length; i++){
        value = (double)rand() / RAND_MAX;
        array[i] = value;
    }
}

int double_compare(const void *p1, const void *p2){
    double *dp1;
    double *dp2;
    dp1 = (double *) p1;
    dp2 = (double *) p2;
    double d1 = *dp1;
    double d2 = *dp2;

    if(d1 < d2){
        return -1;
    } 
    else if(d2 < d1){
        return 1;
    } 
    else {
        return 0;
    }
}
