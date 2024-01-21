#include <stdio.h>
int dane(int arr[]);
main()
{
    int i;
    int arr[10];
    dane(arr);
    printf("ce maksymalne czyslo: %d \n", maximum(arr));
    printf("minmalne czyslo: %d \n", minimum(arr));
    printf("roznica wynosi: %d \n", maximum(arr)-minimum(arr));
}

int dane(int arr[])
{
    int max=10, val;
    for (val=0;val<max;val++)
    {
        printf("Enter int \t ");
        scanf("%d", &arr[val]);
    }
    return max;
}
int maximum(int arr[])
{
    int i = 0, maximum_value = arr[1];
    for (i; i < 10; i++)
    {
        if (arr[i] > maximum_value)
        {
            maximum_value = arr[i];
        }
    }
    return maximum_value;
}
int minimum(int arr[])
{
    int i = 0, minimum_value = arr[1];
    for (i; i < 10; i++)
    {
        if (arr[i] < minimum_value)
        {
            minimum_value = arr[i];
        }
    }
    return minimum_value;
}
