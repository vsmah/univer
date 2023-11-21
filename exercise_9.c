#include <stdio.h>

int main() {
    int num1, num2;

    printf("Podaj pierwsze liczbe: \n");
    scanf("%d", &num1);

    printf("Podaj drugie liczbe: \n");
    scanf("%d", &num2);

    int product = 1;
    while (num1 > num2)
    {
        printf("Zle, podaj inne liczbe \n");
        printf("Podaj pierwsze liczbe: \n");
        scanf("%d", &num1);

        printf("Podaj drugie liczbe: \n");
        scanf("%d", &num2);
    }
        for (int i = num1; i <= num2; ++i)
        {
            if (i % 3 == 0) \
            {
                product *= i;
            }
        }
    printf("iloczyn [%d, %d] wynosi: %d \n", num1, num2, product);

    return 0;
}
