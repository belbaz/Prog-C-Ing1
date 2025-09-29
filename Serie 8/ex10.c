#include<stdio.h>

const char* max_min(float tab[], int sizeTab, float* max, float* min)
{
    for (int i = 0; i < sizeTab; i++)
    {
        if (tab[i] > *max)
        {
            *max = tab[i];
        }
        if (tab[i] < *min)
        {
            *min = tab[i];
        }
    }
    return 0;
}

int main()
{
    float tab[5] = {1, 2, 3, 4, 5};
    float max, min;
    min = max = tab[0];
    max_min(tab, sizeof(tab) / sizeof(int), &max, &min);
    printf("Le min est : %.2f", min);
    printf("\nLe max est : %.2f", max);
    return 0;
}
