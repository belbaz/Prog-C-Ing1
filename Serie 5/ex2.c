#include <stdio.h>

#define TAILLE 10
int main(void)
{
    int tab[TAILLE];
    for (int i = 0; i < 10; i++)
    {
        tab[i] = i * 5;
    }

    for (int i = 0; i < TAILLE; i++)
    {
        printf("%d ", tab[i]);
    }
    return 0;
}
