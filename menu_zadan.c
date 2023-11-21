#include <stdio.h>
#include <math.h>

void menu();
void Zad_1();
void Zad_2();
void Zad_3();

int main()
{
    menu();
    return 0;
}

void menu()
{
    int zad;
    printf("1.Rozwiazanie funkcji \n");
    printf("2.Znajde punkt \n");
    printf("3.Rozwiazanie kwadratowego rownania \n");
    printf(" Podaje zadanie(1, 2, 3): \n");
    scanf("%d", &zad);
    switch (zad)
    {
    case 1:
        Zad_1();
        break;
    case 2:
        Zad_2();
        break;
    case 3:
        Zad_3();
        break;
    }
}
void Zad_1()
{
    printf("Podaj zmienne X i Y \n");
    int x, y;
    scanf("%d %d", &x, &y);
    if(x<0 && y<0)
    {
        printf("Wynik funkcji w przypadku 1 wynosi : %d", ((x*x)+(y*y)));
    }
    else if (x*y<=0)
    {
        printf("Wynik funkcji w przypadku 2 wynosi : %d", 0);
    }
    else
    {
        printf("Wynik funkcji w przypadku 3 wynosi : %f", sqrt(x+y));
    }
}

void Zad_2()
{
    printf("Podaj polozenie x i y: \n");
    int x, y;
    scanf("%d %d", &x, &y);
    if (x>0 && y>0)
    {
        printf("Punkt A znajduje sie w pierwszej cwiartce");
    }
    else if(x<0 && y>0)
    {
        printf("Punkt A znajduje sie w drugiej cwiartce");
    }
    else if(x<0 && y<0)
    {
        printf("Punkt A znajduje sie w trzeciej cwiartce");
    }
    else
    {
        printf("Punkt A znajduje sie w czwartej cwiartce");
    }
}

void Zad_3()
{
    printf("Podaj dane a, b, c: \n");
    int a, b, c, d;
    scanf("%d %d %d", &a, &b, &c);
    d = pow(b, 2)-(4*a*c);
    if (d==0)
    {
        printf("x = %d", (-1*b)/(2*a));
    }
    else if(a>0)
    {
       printf("x1 = %f, x2 = %f", ((-1*b)-sqrt(d))/(2*a), ((-1*b)+sqrt(d))/(2*a));
    }
    else if(a==0)
    {
        printf("Nie jest kwadratowe rownanie");
    }
    else if(b==0)
    {
        printf("Nie jest kwadratowe rownanie");
    }
    else if(c==0)
    {
        printf("x1 = 0, x2 = %d", b);
    }
    else if(a<0)
    {
        printf("x1 = %f, x2 = %f", (-b-sqrt(d))/(-2*a), (-b+sqrt(d))/(-2*a));
    }
}
