#include <math.h>
#include <stdio.h>
#include <stdlib.h>

int SIZE;

char* plusGrand(int* tab, int size)
{
    int max = tab[0];
    int rang = 0;
    for (int i = 0; i < size; i++)
    {
        if (tab[i] > max)
        {
            max = tab[i];
            rang = i;
        }
    }
    char *result = malloc(50 * sizeof(char));
    sprintf(result, "%d rang au %d", max, rang);
    return result;
};

int main(void)
{
    printf("Enter le nombres d'éléments que vous voulez ? ");
    scanf("%d", &SIZE);
    int entrie[SIZE];

    for (int i = 0; i < sizeof(entrie) / sizeof(int); i++)
    {
        printf("Enter %llu chiffres : ", sizeof(entrie) / sizeof(int));
        scanf("%d", &entrie[i]);
    }
    char *result = plusGrand(entrie, sizeof(entrie) / sizeof(int));
    printf("Le plus grand est %s\n", result);

    return 0;
}
