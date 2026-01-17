#include <stdio.h>

int main(void){
  int n;
  
  printf("Indtast et tal: \n");
  scanf(" %d", &n);

  for(int j = 0; j <= n; j++){
    printf("%d", j);

    for (int spacing = j + 1; spacing <= n; spacing++){
        printf(" ");
    }
    
    for(int i = 0; i < j; i++){
        printf("*");
    }
    printf("\n");
  }

  return 0;
}
