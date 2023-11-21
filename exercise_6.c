#include <stdio.h>
#include <math.h>

 void pole ();
 int main () {
 pole();
 return 0;
 }
 void pole()
 {
     float x1, y1, x2, y2, x3, y3;
     float ab, bc, ac, p, pole1;
     printf("podaj wspolrzedne pierwszego wierzcholka trojkata: \n");
     scanf("%f", &x1);
     scanf("%f", &y1);
     printf("podaj wspolrzedne drugiego wierzcholka trojkata: \n");
     scanf("%f", &x2);
     scanf("%f", &y2);
     printf("podaj wspolrzedne trzeciego wierzcholka trojkata: \n");
     scanf("%f", &x3);
     scanf("%f", &y3);
     ab = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
     bc = sqrt(pow(x3 - x2, 2) + pow(y3 - y2, 2));
     ac = sqrt(pow(x3 - x1, 2) + pow(y3 - y1, 2));
     p = (ab + bc + ac)/2;\
     pole1 = sqrt(p*(p-ab)*(p-bc)*(p-ac));
     printf("Pole takiego trojkata = %f", pole1);
 }
