#include <stdio.h>
#include <stdlib.h>

int double_compare(const void *p1, const void *p2);

int main(void){
  double kasse[10];

  //Vi printer arrayet
  printf("Her er arrayet:\n");
  for(int i = 0; i < 10; i++){
    printf("Index: %d, Værdi: %.2lf\n", i, kasse[i]);
  }

  //Vi indlæser varerne
  for(int i = 0; i < 10; i++){
    double pris;

    printf("Indtast pris paa vare: ");
    scanf("%lf", &pris);
    kasse[i] = pris;
  }

  //Vi printer arrayet
  printf("Her er arrayet:\n");
  for(int i = 0; i < 10; i++){
    printf("Index: %d, Værdi: %.2lf\n", i, kasse[i]);
  }

  //Vi sorterer arrayet
  printf("\n\nVi sorterer arrayet!\n\n");
  qsort(kasse, 10, sizeof(double), double_compare);

  //Vi printer arrayet
  printf("Her er arrayet:\n");
  for(int i = 0; i < 10; i++){
    printf("Index: %d, Værdi: %.2lf\n", i, kasse[i]);
  }

  //Vi beregner den samlede pris
  double samlet_pris = 0;
  for(int i = 0; i < 10; i++){
    samlet_pris = samlet_pris + kasse[i];
  }
  printf("Her er den samlede pris: %.2lf\n", samlet_pris);

  return 0;
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
  } else if(d2 < d1){
    return 1;
  } else {
    return 0;
  }
} 
