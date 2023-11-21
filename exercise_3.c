#include <stdio.h>
#include <math.h>

int main() {
int a, b, x, y;
printf ("input horse power a:");
scanf ("%d", &a);
printf ("input kilometer per hour b:");
scanf ("%d", &b);
x = a*735;
y = b/3.6;
printf ("%d Horse power = %d watt\n", a, x);
printf ("%d km/h = %d m/s", b, y);
return 0;
}

