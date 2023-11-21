#include <stdio.h>
#include <math.h>

int main() {
int a, s, p;
printf ("input square side a:");
scanf("%d", &a);
p = 4*a;
s = a*a;
printf("Area of the square = %d\n", s);
printf("Perimeter of the square = %d", p);
return 0;
}

/*int main() {
int a, b, s, p;
printf ("input long side of the rectangle a:");
scanf("%d", &a);
printf ("input short side of the rectangle b:");
scanf("%d", &b);
s = a*b;
p = 2*(a+b);
printf("Area of the rectangle = %d\n", s);
printf("Perimeter of the rectangle = %d", p);
return 0;
}*/

/*int main() {
int a, b, c, h, s, p;
printf("input base of the triangle a:");
scanf("%d", &a);
printf ("input side of triangle b:");
scanf("%d", &b);
printf ("input side of triangle c:");
scanf("%d", &c);
printf("input height of the triangle h:");
scanf("%d", &h);
s = (a*h)/2;
p = a+b+c;
printf("Area of the triangle = %d\n", s);
printf("Perimeter of the triangle = %d", p);
return 0;
}*/

/*int main() {
int a, b, c, d, h, s, p;
printf("input upper base of the trapezium a:");
scanf("%d", &a);
printf ("input down base of trapezium b:");
scanf("%d", &b);
printf ("input side of trapezium c:");
scanf("%d", &c);
printf ("input side of trapezium d:");
scanf("%d", &d);
printf("input height of the trapezium h:");
scanf("%d", &h);
s = ((a+b)/2)*h;
p = a+b+c+d;
printf("Area of the trapezium = %d\n", s);
printf("Perimeter of the trapezium = %d", p);
return 0;
}*/
