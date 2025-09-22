#include <stdio.h>

int main(void)
{
    int tab[4], somme = 0, moyenne = 0;

    for (int i = 0; i < sizeof(tab) / sizeof(int); i++)
    {
        printf("Rentrer une note : ");
        scanf("%i", &tab[i]);
        moyenne += tab[i];
    }

    int max = tab[0];
    for (int i = 0; i < sizeof(tab) / sizeof(int); i++)
    {
        if (i > max)
        {
            max = tab[i];
        }
    }

    printf("Max : %.2d", max);

    return 0;
}
