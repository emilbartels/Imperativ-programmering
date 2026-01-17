#include <stdio.h>
#include <math.h>

int main(void){
  double p1_x, p1_y;
  double p2_x, p2_y;
  double p3_x, p3_y;
  double delta_x1, delta_y1;
  double delta_x2, delta_y2;
  double delta_x3, delta_y3;
  double laengde1, laengde2, laengde3;

  // Brugeren angiver et linjestykke som to punkter i planet. 
  // Indlæs punkt 1
  printf("Indtast punkt 1 (x-koordinat mellemrum y-koordinat -- efterfulgt af enter): \n");
  scanf("%lf %lf", &p1_x, &p1_y);
  // Indlæs punkt 2

  printf("Indtast punkt 2 (x-koordinat mellemrum y-koordinat -- efterfulgt af enter): \n");
  scanf("%lf %lf", &p2_x, &p2_y);

  // Indlæs punkt 3
  printf("Indtast punkt 3 (x-koordinat mellemrum y-koordinat -- efterfulgt af enter): \n");
  scanf("%lf %lf", &p3_x, &p3_y);


  // Vores program skal udregne længden mellem punkt 2 og punkt 1.
  delta_x1 = p2_x - p1_x;
  delta_y1 = p2_y - p1_y;
  laengde1 = sqrt(delta_x1 * delta_x1 + delta_y1 * delta_y1);

  // Programmet skriver længden mellem punkt 2 og punkt 1 ud
  printf("Laengden mellem punkt 2 og punkt 1 %lf\n", laengde1);


  // Vores program skal udregne længden mellem punkt 2 og punkt 3.
  delta_x2 = p3_x - p2_x;
  delta_y2 = p3_y - p2_y;
  laengde2 = sqrt(delta_x2 * delta_x2 + delta_y2 * delta_y2);

  // Programmet skriver længden mellem punkt 2 og punkt 3 ud
  printf("Laengden mellem punkt 3 og punkt 2 er %lf\n", laengde2);


   // Vores program skal udregne længden mellem punkt 2 og punkt 3.
  delta_x3 = p3_x - p1_x;
  delta_y3 = p3_y - p1_y;
  laengde3 = sqrt(delta_x3 * delta_x3 + delta_y3 * delta_y3);

  // Programmet skriver længden mellem punkt 2 og punkt 3 ud
  printf("Laengden mellem punkt 3 og punkt 1 er %lf\n", laengde3);

  return 0;
}
