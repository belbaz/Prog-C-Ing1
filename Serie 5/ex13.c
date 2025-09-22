#include <stdio.h>

int main(void)
{
    int tab2D[2][3] = {};

    for (int i = 0; i <  sizeof(tab2D) / sizeof(tab2D[0]); i++)
    {
        for (int j = 0; j <  sizeof(tab2D) / sizeof(tab2D[0][0]); j++)
        {
            tab2D[i][j] = j;
        }
    }

    for (int i = 0; i <  sizeof(tab2D) / sizeof(tab2D[0]); i++)
    {
        for (int j = 0; j <  sizeof(tab2D) / sizeof(tab2D[0][0]); j++)
        {
            printf("%d, ", tab2D[i][j]);
        }
        printf("\n");
    }

    return 0;
}
