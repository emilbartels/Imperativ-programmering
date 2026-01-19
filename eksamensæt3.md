opgave 1
Hvad udskriver programmet?
#include <stdio.h>

void update(int *p) {
    *p = *p + 5;
}

int main(void) {
    int x = 3;
    update(&x);
    printf("%d", x);
    return 0;
}

Svar: 8

opgave 2
Hvad udskriver programmet?
#include <stdio.h>

void f(int a, int *b) {
    a = 10;
    *b = 20;
}

int main(void) {
    int x = 1, y = 2;
    f(x, &y);
    printf("%d %d", x, y);
    return 0;
}

Svar: 1 20


opgave 3
#include <stdio.h>

struct S {
    int x;
};

void g(struct S *p) {
    p->x = 7;
}

int main(void) {
    struct S s;
    s.x = 3;
    g(&s);
    printf("%d", s.x);
}

Svar: 7

Opgave 4 
Hvilken af følgende linjer er korrekt, hvis p er en pointer til en struct?
A) p.x = 5;
B) (*p).x = 5;
C) p->x = 5;


Svar: B C 

Opgave 5 
Funktionen skal returnere 1 hvis p ikke er NULL og *p == 0, ellers 0.
int h(int *p);
A)
return p != NULL && *p == 0;
B)
return *p == 0 && p != NULL;
C)
return p == NULL ? 0 : *p == 0;
D)
return p == NULL || *p == 0;
E)
return p != NULL ? *p == 0 : 0;
Svar: A C E

Opgave 6 
int *p = malloc(sizeof(int));
*p = 5;

A) p ligger på stacken
 B) *p ligger på heapen
 C) p skal frigives med free(p)
 D) *p skal frigives med free(*p)
 E) Programmet har memory leak hvis free(p) mangler
Svar B C E

Opgave 7 
Hvad returnerer funktionen?
int *f(int *p) {
    if (p == NULL)
        return NULL;
    return p + 1;
}

Svar: det returnerer en pointer p med den næste addresse.

Opgave 8 – Struct + dynamisk hukommelse (10 point)
Udfyld de manglende linjer så programmet:
allokerer en struct dynamisk


sætter x = 4


udskriver værdien


ikke har memory leaks


#include <stdio.h>
#include <stdlib.h>

struct S {
    int x;
};

int main(void) {
    struct S *p = malloc(sizeof(int));
    p->x = 4;
    printf("%d", p->x);
    free(p);
    return 0;
}
FORKERT IKKE sizeof(int) men sizeof struct s

Opgave 9 – Farlig pointer (6 point)
Hvad er problemet med følgende kode?
int *f(void) {
    int x = 5;
    return &x;
}

Svar: Vi returnerer en addresse. Ikke en pointer. 
DET ER FORKERT
Returnerer adressen på en lokal variabel, som ikke eksisterer efter funktionen afslutter (dangling pointer)
Fiks det med dynamisk memory allokation

Opgave 10 – TRUE / FALSE (11 point)
Marker T eller F.
*p betyder “værdien p peger på”  TRUE
&x giver adressen på x TRUE
-> bruges kun ved dynamisk allokering FALSE
En pointer kan være NULL TRUE


free(NULL) er en fejl FALSE


malloc kan returnere NULL TRUE


str[0] og *str er altid det samme FALSE


En struct kan indeholde pointere TRUE
sizeof(pointer) afhænger af hvad den peger på FALSE
(*p).x og p->x er ækvivalente TRUE


En pointer skal altid pege på heapen FALSE




