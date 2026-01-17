/*
Skriv et program som læser et heltal n. 
Programmet skal addere alle tal i intervallet fra n til 2 * n hvis n er ikke negativ. 
Hvis n er negativ, skal programmet addere tallene fra 2 * n til n.
Skriv først en version med for-løkker. Dernæst en version med while løkker.
*/
#include <stdio.h>
#include <math.h>

int main(void){

    int n;
    int interval_num, sum, i;

    printf("Indtal et hel tal n: ");
    scanf("%d", &n);
    
    interval_num = 2 * n;
    sum= 0;

    if(n >= 0){
    //For-løkke for positiv n
        for(i = n; 
            i >= 0 && i <= interval_num; 
            i = i + 1){
                sum += i;
                printf("%d\n", i);
        }
    }

    //For-løkke for negativ n
    else {
        for(i = interval_num; 
            i >= interval_num && i <= n ; 
            i = i + 1){
                sum += i;
                printf("%d\n", i);
        }
    }

    printf("Summen af alle tallene i intervallet mellem %d til 2 * %d (%d) er følgende: %d\n", n, n, interval_num, sum);
    return 0;
}