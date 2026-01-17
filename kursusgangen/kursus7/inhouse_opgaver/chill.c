#include <stdio.h>

int main(void){
  char spiller1_input, spiller2_input;
 
  //Tag imod input fra spillerne
  printf("Spiller 1 indtast din haand (r/p/s): \n");
  scanf(" %c", &spiller1_input);

  printf("Spiller 2 indtast din haand (r/p/s): \n");
  scanf(" %c", &spiller2_input);

  //Udskriv hænderne
  printf("\nspiller1: %c, spiller2: %c\n", spiller1_input, spiller2_input);

  //Regn ud om spiller 1 har vundet
  int spiller1_vandt = (spiller1_input == 's' && spiller2_input == 'p') ||
                       (spiller1_input == 'p' && spiller2_input == 'r') ||
                       (spiller1_input == 'r' && spiller2_input == 's');

  int uafgjort = (spiller1_input == spiller2_input);

  //Skriv på skærmen hvem der vandt eller om det blev uafgjort
  if(spiller1_vandt){
    printf("Spiller 1 vandt.\n");
  } else if(uafgjort){
    printf("Det blev uafgjort.\n");
  } else {
    printf("Spiller 2 vandt.\n");
  }

  return 0;
}