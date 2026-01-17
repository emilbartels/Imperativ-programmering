#include <stdio.h>

int main(void) {

  double d, e, f;

  printf("Enter three real numbers: ");
  scanf("%f %f %f", &d, &e, &f); 
    //Type float for %f, mens variablerne der skrives til er double altså %lf

  printf("The average is: %d\n", (d + e + f) / 3.0); 
    //Type int %d i printf statement, men det vør være en double altså %lf
  return 0;
}

