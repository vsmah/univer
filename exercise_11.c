#include <stdio.h>
float dane(float war[]);
main()
{
    int i, mm;
    float war[10];
    mm=dane(war);
    for(i=0;i<mm;i++)
    {
        printf("%.2f\n", war[i]);
    }
}

float dane(float war[])
{
    float val;
    int max=5, value;
    for (value=0;value<max;value++)
    {
        printf("Enter int \t ");
        scanf("%f", &war[value]);
    }
    return max;
}
