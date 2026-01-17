#include <stdio.h>

int main(void){
    int x, y;

    printf("Enter 2 values for your x-y coordinate: ");
    scanf("%d%d", &x, &y);

    if (x > 0 && y > 0)
        printf("(%d, %d) is in quadrant I\n", x, y);
    else if (x > 0 && y < 0)
        printf("(%d, %d) is in quadrant IV\n", x, y);
    else if (x < 0 && y < 0)
        printf("(%d, %d) is in quadrant III\n", x, y);
    else if (x < 0 && y > 0)
        printf("(%d, %d) is in quadrant II\n", x, y);
    else if (x == 0)
    printf("(%d, %d) is on the y-axis\n", x, y);
    else if (y == 0)
    printf("(%d, %d) is on the x-axis\n", x, y);
}