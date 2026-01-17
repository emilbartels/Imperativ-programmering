/*
Skriv et program som læser et heltal n. 
Programmet skal addere alle tal i intervallet fra n til 2 * n hvis n er ikke negativ. 
Hvis n er negativ, skal programmet addere tallene fra 2 * n til n.
Skriv først en version med for-løkker. Dernæst en version med while løkker.
*/
#include <stdio.h>
#include <math.h>

int main(void){

    int n, i;
    int interval_num, sum;

    printf("Indtal et hel tal n: ");
    scanf("%d", &n);
    
    interval_num = 2 * n;
    sum= 0;
    if(n < 0){
        i = interval_num;
        while(i<=n)
        {
            printf("%d\n", i);
            sum += i;
            i = i + 1;
        }
        
    }
    
    else if(n >= 0){
        i = n;
        while(i>=0 && i<=interval_num)
        {
            printf("%d\n", i);
            sum += i;
            i = i + 1;
        }
    }

    printf("Summen af alle tallene i intervallet mellem %d til 2 * %d (%d) er følgende: %d\n", n, n, interval_num, sum);
    return 0;
}   