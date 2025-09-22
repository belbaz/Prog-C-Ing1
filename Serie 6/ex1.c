#include <stdio.h>

#define SIZE 3

int Produit(int* tab, int size)
{
    int result = 0;

    for (int i = 0; i < size; i++)
    {
        result += tab[i];
    }
    return result;
};

int main(void)
{
    int entrie[SIZE];

    for (int i = 0; i < sizeof(entrie) / sizeof(int); i++)
    {
        printf("Enter a number : ");
        scanf("%d", &entrie[i]);
    }

    printf("Produit : %d", Produit(entrie, sizeof(entrie) / sizeof(int)));
    return 0;
}
