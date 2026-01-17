#include<stdio.h>

#define RIGTIG 9

int main(void){
  int gaet;
  int antal_gaet = 0;
  
  do{
    printf("Gaet et tal:\n");
    scanf("%d", &gaet);
    if (gaet >= 1 && gaet <= 20) {
        antal_gaet++;
        }
    else {
        printf("Du har gaettet på %d, hvilket er en ugyldig værdi\n", gaet);
    }

    printf("Du har gaettet %d gange.\n", antal_gaet);

    if(gaet == RIGTIG){
      printf("Hurra! Rigtigt!\n");
    } else {
      printf("Forkert!\n");
    }
  } while(gaet != RIGTIG);

  printf("Du brugte %d gaet.\n", antal_gaet);

  return 0;
}
