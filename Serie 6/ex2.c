#include <math.h>
#include <stdio.h>

#define SIZE 2

int Puissance(int* tab, int size)
{
    int result = 0;

    for (int i = 0; i < tab[1] - 1; i++)
    {
        result += tab[0] * tab[0];
    }
    return result;
};

int main(void)
{
    int entrie[SIZE];
    char puissance[] = {'a', 'b'};

    for (int i = 0; i < sizeof(entrie) / sizeof(int); i++)
    {
        printf("Enter %c : ", puissance[i]);
        scanf("%d", &entrie[i]);
    }

    printf("Puissance : %d", Puissance(entrie, sizeof(entrie) / sizeof(int)));
    return 0;
}
