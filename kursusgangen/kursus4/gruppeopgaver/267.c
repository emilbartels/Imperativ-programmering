#include <stdio.h>

int main(void){

    int n, sum = 0;
    printf("Indtast en værdi n: \n");
    scanf(" %d", &n);

    for(int i = 0; i <= n; i++) {
        sum += i;
    }
    printf("%d\n", sum);

    return 0;
}