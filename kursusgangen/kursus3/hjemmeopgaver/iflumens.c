#include <stdio.h>

int main(void){
    int watts, lumens;

    printf("enter a number of watts in your incandesent lightbuld: ");
    scanf("%d", &watts);

    if (watts < 15)
        printf("You entered a wrong amount of watt\n");
    else if (watts == 15)
        lumens = 125;

    else if (watts < 25)
        printf("You entered a wrong amount of watt\n");
    else if (watts == 25)
        lumens = 215;

    else if (watts < 40)
        printf("You entered a wrong amount of watt\n");
    else if (watts == 40)
        lumens = 500;
    
    else if (watts < 60)
        printf("You entered a wrong amount of watt\n");
    else if (watts == 60)
        lumens = 880;
    
    else if (watts < 75)
        printf("You entered a wrong amount of watt\n");
    else if (watts == 75)
        lumens = 1000;

    else if (watts < 100)
        printf("You entered a wrong amount of watt\n");
    else if (watts == 100)
        lumens = 1675;

printf("Your lightbuld with %d watts is emitting %d lumens\n", watts, lumens);

}