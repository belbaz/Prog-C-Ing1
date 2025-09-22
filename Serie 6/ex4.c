#include <math.h>
#include <stdio.h>

#define SIZE 1

int facto(int* tab, int size)
{
    int result = 0;

    for (int i = tab[0]; i > 0; i--)
    {
        result += tab[0] * (tab[0] - i);
    }
    return result;
};

int main(void)
{
    int entrie[SIZE];

    for (int i = 0; i < sizeof(entrie) / sizeof(int); i++)
    {
        printf("Enter factoriel : ");
        scanf("%d", &entrie[i]);
    }

    printf("Factoriel : %d", facto(entrie, sizeof(entrie) / sizeof(int)));
    return 0;
}
