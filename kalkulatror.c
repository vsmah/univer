#include <stdio.h>
#include <math.h>

void Kalkulator();

int main()
{
    Kalkulator();
    return 0;
}

void Kalkulator()
{
    char znak;
    double x, y;
    printf("Podaj znak(+, -, *, /): \n");
    scanf("%c", &znak);
    printf("Podaj dwie liczby(po przecinku): \n");
    scanf("%lf, %lf", &x, &y);
    switch (znak)
    {
    case '+':
        printf("%lf + %lf = %lf", x, y, x+y);
        break;
    case '-':
        printf("%lf - %lf = %lf", x, y, x-y);
        break;
    case '*':
        printf("%lf * %lf = %lf", x, y, x*y);
        break;
    case '/':
        printf("%lf / %lf = %lf", x, y, x/y);
        break;
    default:
        printf("Error, nieprawdziwo podane dane");
        break;
    }

}


