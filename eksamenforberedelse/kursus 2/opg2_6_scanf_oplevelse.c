#include <stdio.h>

int main(void) {

  int i1, i2,
      scanRes;

  printf("Enter input on the following line\n");

  scanRes = scanf("%d%d", &i1, &i2);
/*
      %d i scanf:
      - Springer automatisk al indledende whitespace over (mellemrum, tab, newline)
      - Læser et heltal bestående af evt. fortegn (+/-) efterfulgt af cifre
      - Stopper ved første tegn, der ikke kan være del af et heltal

      scanf returnerer:
      - Antallet af succesfuldt konverterede og tildelte input
      - Hvis en konvertering fejler, stoppes scanf øjeblikkeligt

      Vigtigt:
      - Variabler, som ikke får tildelt en værdi, har ubestemt (garbage) værdi
    */

  printf("i1 = %d, i2 = %d\n", i1, i2);
  printf("scanRes = %d\n", scanRes);

  return 0;
}



#include <stdio.h>

int main(void) {

  int i1, i2,
      scanRes;

  printf("Enter input on the following line\n");

  scanRes = scanf("%d;%d", &i1, &i2);
  //Jeg regner med at man skal skrive ; mellem 2 hel tal før det fungerere. Da scanf regner med at eder er en ;
/*
      Formatstrengen "%d;%d" betyder:
      - Først læses et heltal (%d), hvor al indledende whitespace ignoreres
      - Derefter forventes et bogstaveligt semikolon ';' i input
      - Derefter læses endnu et heltal (%d)

      Bemærk:
      - Tegnet ';' i formatstrengen matcher præcist ét tegn i input
      - Der springes IKKE whitespace over før eller efter ';'
      - Hvis input ikke matcher formatet nøjagtigt, stopper scanf

      Kun konverteringsspecifiers (%d, %f, %lf, osv.) ignorerer whitespace.
      Almindelige tegn i formatstrengen matcher input præcist.
 */   
  printf("i1 = %d, i2 = %d\n", i1, i2);
  printf("scanRes = %d\n", scanRes);

  return 0;
}



#include <stdio.h>

int main(void) {

  int i1, i2,
      scanRes;

  printf("Enter input on the following line\n");

  scanRes = scanf("%d abe %d", &i1, &i2);

/*
Jeg regner med at den skipper whitespaces mellem efter int og før abe og sammentidig efter abe og før int. 
Den er god så længe abe bare er i midten af 2 ints

Det sker fordi: 
Ethvert whitespace-tegn i scanf-formatstrengen matcher vilkårlig mængde whitespace i input (inkl. 0 tegn).

  I scanf-formatstrengen matcher whitespace vilkårlig mængde whitespace i input,
  inklusive ingen tegn. Derfor kan der være 0 eller flere mellemrum før og efter
  teksten "abe".

  Teksten "abe" skal matche input præcist. Hvis den ikke findes det rigtige sted,
  stopper scanf, og kun de tidligere variabler tildeles værdier.
*/

  printf("i1 = %d, i2 = %d\n", i1, i2);
  printf("scanRes = %d\n", scanRes);

  return 0;
}





#include <stdio.h>

int main(void) {

  double d1, d2;
  int scanRes;

  printf("Enter input on the following line\n");

  scanRes = scanf("%lf %lf", &d1, &d2);

  printf("d1 = %10.5f, d2 = %8.4f\n", d1, d2);
  printf("scanRes = %d\n", scanRes);

  return 0;
}
