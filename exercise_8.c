#include <stdio.h>

void zad_5();
int main()
{
    zad_5();
    return 0;

}

void zad_5()
{
    printf("Podaj ile otrzymuje pracownik: \n");
    double n=0;
    double y;
    scanf("%lf", &n);
    if (n > 5000)
    {
        y = (n/100)*5;
        n = n + y;
    }
    else
    {
        y = (n/100)*10;
        n = n + y;
    }
    printf("Pracownik z podwyszka zarabia: %lf", n);
}
