#include <stdio.h>

int main(void){
  //Brugerne taster haender ind
  // 'r': rock
  // 'p': paper
  // 's': scissor
  char spiller1, spiller2;
  printf("Indtast spiller 1 haand (r, p, s):\n");
  scanf(" %c", &spiller1);

  printf("Indtast spiller 2 haand (r, p, s):\n");
  scanf(" %c", &spiller2);

  printf("%c %c\n", spiller1, spiller2);

  //Se om det er valid input
  int valid_input_spiller1 = 
    (spiller1 == 'r' || spiller1 == 's' || spiller1 == 'p');
  int valid_input_spiller2 = 
    (spiller2 == 'r' || spiller2 == 's' || spiller2 == 'p');

  //Beregne om spiller 1 har vundet.
  int spiller1vandt =
    ((spiller1 == 'r') && (spiller2 == 's')) || 
    ((spiller1 == 's') && (spiller2 == 'p')) ||
    ((spiller1 == 'p') && (spiller2 == 'r'));

  //Beregne om det er uafgjort
  int uafgjort = 
    ((spiller1 == 'r') && (spiller2 == 'r')) || 
    ((spiller1 == 'p') && (spiller2 == 'p')) ||
    ((spiller1 == 's') && (spiller2 == 's'));

  if (valid_input_spiller1 == 0 || valid_input_spiller2 == 0)
    printf("Du har indtastet de forkerte inputs\n");

  else if (spiller1vandt == 1)
    printf("Spiller1 vandt!\n");
    
  else if (uafgjort == 1)
    printf("Det blev uafgjort!\n");

  else 
    printf("Spiller 2 vandt!\n");
    
  return 0;
}
