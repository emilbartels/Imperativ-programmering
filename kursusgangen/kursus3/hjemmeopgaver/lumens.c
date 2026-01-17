#include <stdio.h>

int main(void){
    int watts, lumens;

    printf("enter a number of watts in your incandesent lightbuld: ");
    scanf("%d", &watts);


switch(watts) 
{
    case 15:
        lumens = 125;
        break;

    case 25:
        lumens = 215;
        break;

    case 40:
        lumens = 500;
        break;

    case 60:
        lumens = 880;
        break;

    case 75:
        lumens = 1000;
        break;
        
    case 100:
        lumens = 1675;
        break;
    
    default:
        printf("You entered a wrong amount of watt\n");
        lumens = 0;
        break;
}

    printf("Your lightbuld with %d watts is emitting %d lumens\n", watts, lumens);
}