#include <stdio.h>

int main(void)
{
    int tab[] = {1, 100, 200, 300, 400};
    int tampon = 0;

    //on divise par 2 pour juste changer les 2 premiers elements
    for (int i = 0; i < (sizeof(tab) / sizeof(int)) / 2; i++)
    {
        tampon = tab[i];
        tab[i] = tab[(sizeof(tab) / sizeof(int)) - i - 1];
        tab[(sizeof(tab) / sizeof(int)) - i - 1] = tampon;
    }

    for (int j = 0; j < sizeof(tab) / sizeof(int); j++)
    {
        printf("Tab[%d] = %d\n", j, tab[j]);
    }
    return 0;
}
