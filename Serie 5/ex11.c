#include <stdio.h>

int main(void)
{
    int tab[] = {1, 100, 200, 300, 400};
    int tabInverse[sizeof(tab) / sizeof(int)];
    int tampon = 0;

    for (int i = 0; i <= (sizeof(tab) / sizeof(int)) / 2; i++)
    {
        tampon = tab[i];
        tabInverse[i] = tab[(sizeof(tab) / sizeof(int)) - i - 1];
        tabInverse[(sizeof(tab) / sizeof(int)) - i - 1] = tampon;
    }

    for (int j = 0; j < sizeof(tabInverse) / sizeof(int); j++)
    {
        printf("TabInverse[%d] = %d\n", j, tabInverse[j]);
    }
    return 0;
}
