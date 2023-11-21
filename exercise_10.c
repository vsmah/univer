#include <stdio.h>

void zad_5();
int main()
{
    zad_5();
    return 0;
}
 void zad_5()
 {
     int n;
     int i=0;
     int s;
     int iloczyn=1;
    printf("Podaj  n liczb: \n");
    scanf("%d", &n);
    while (i < n)
    {
        printf("Podaj liczbe: \n");
        scanf("%d", &s);
        if (s % 2==0)
        {
            iloczyn =iloczyn * s;
        }
        i++;
    }
    printf("Iloczyn wynosi: %d \n", iloczyn);
 }
