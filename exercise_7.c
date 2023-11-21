#include <stdio.h>

int main() {
    int n;
    printf("Podaj  ciag elementow: ");
    scanf("%d", &n);

    int pierwsze, drugie, roznica;

    printf("Podaj pierwsze: ");
    scanf("%d", &pierwsze);

    printf("Podaj drugie: ");
    scanf("%d", &drugie);

    roznica = drugie - pierwsze;

    int aryfmetyczne = 1;

    for (int i = 3; i <= n; i++) {
        int nastepne;
        printf("Podaj %de liczbe: ", i);
        scanf("%d", &nastepne);

        if (nastepne - drugie != roznica) {
            aryfmetyczne = 0;
            break;
        }

        pierwsze = drugie;
        drugie = nastepne;
    }

    if (aryfmetyczne) {
        printf("Jest ciagiem aryfmetycznym.\n");
    } else {
        printf("Nie jest ciagiem aryfmetycznym.\n");
    }

    return 0;
}
