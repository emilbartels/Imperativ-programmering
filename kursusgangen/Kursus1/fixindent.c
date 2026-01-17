#include <stdio.h>  

int main(void){
float first_number, andet_tal, sidste_tal;
printf("Give me three: ");
scanf("%f %f %f", &first_number, &andet_tal, &sidste_tal);   
printf("The result: %f\n", (first_number+andet_tal+sidste_tal) / 3.0);  
return 0;
}