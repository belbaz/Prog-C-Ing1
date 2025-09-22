#include <stdio.h>

int main(void)
{
    int nombre = 0;
    printf("Entrer un nombre : ");
    scanf("%d", &nombre);

    for (int i = nombre; i > 0; i--)
    {
        printf("%.1f\n", (float)i + 0.1);
        printf("%.1f\n", (float)i + 0.2);
        printf("%.1f\n", (float)i + 0.3);
    }
    return 0;
}
