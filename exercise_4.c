#include <stdio.h>
#include <math.h>

int main() {
int a, b, x;
double res1, res2;
printf ("input variable x:");
scanf ("%d", &x);
printf ("input variable a:");
scanf ("%d", &a);
printf ("input variable b:");
scanf ("%d", &b);
res1 = (double)(1+pow(x, 2))+(double)sqrt(1+pow(x, 2));
res2 = (double)(fabs(a+b*x))+pow(x, 100)+(double)cbrt(1+x);
printf ("result of first expression = %.6f\n", res1);
printf ("result of second expression = %.6g", res2);
return 0;
}
