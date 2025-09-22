#include <math.h>
#include <stdio.h>

int SIZE;

int moyenne(int* tab, int size)
{
    int result = 0;

    for (int i = 0; i < size; i++)
    {
        result += tab[i];
    }
    return result / size;
};

int main(void)
{
    printf("Enter le nombres de notes que vous voulez ? ");
    scanf("%d", &SIZE);
    int entrie[SIZE];

    for (int i = 0; i < sizeof(entrie) / sizeof(int); i++)
    {
        printf("Enter %llu notes : ", sizeof(entrie) / sizeof(int));
        scanf("%d", &entrie[i]);
    }

    printf("Moyenne : %d", moyenne(entrie, sizeof(entrie) / sizeof(int)));
    return 0;
}
