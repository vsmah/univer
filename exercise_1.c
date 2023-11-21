#include <stdio.h>
#include <math.h>

int main() {
int a, b, sum, sub1, sub2, mult, mod1, mod2;
float div1, div2;
printf("input a:");
scanf("%d", &a);
printf("input b:");
scanf("%d", &b);
sum = a+b;
sub1 = a-b;
sub2 = b-a;
mult = a*b;
div1 = (float)a/b;
div2 = (float)b/a;
mod1 = a%b;
mod2 = b%a;
printf("Answer is %d + %d = %d\n", a, b, sum);
printf("Answer is %d - %d = %d\n", a, b, sub1);
printf("Answer is %d - %d = %d\n", b, a, sub2);
printf("Answer is %d * %d = %d\n", a, b, mult);
printf("Answer is %d / %d = %3.6f\n", a, b, div1);
printf("Answer is %d / %d = %3.6f\n", b, a, div2);
printf("Answer is %d modulo %d = %d\n", a, b, mod1);
printf("Answer is %d modulo %d = %d", b, a, mod2);
return 0;
}
