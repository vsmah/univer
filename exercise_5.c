#include <stdio.h>
#include <math.h>

void aryfmetyczne ();
void geometryczne ();
int main () {
aryfmetyczne ();
geometryczne ();
return 0;
}
void aryfmetyczne()
{
printf("Podaj dwie liczby calkowite: ");
int a, b;
scanf("%d",&a);
scanf("%d",&b);
float s = (float)(a+b)/2;
printf("Wynik %f\n", s);
}
void geometryczne ()
{
 printf("Podaj dwie liczby calkowite: ");
int a, b;
scanf("%d",&a);
scanf("%d",&b);
float s = (float)sqrt(a*b);
printf("Wynik %f", s);
}
