#include <stdio.h>

int main(void)
{
    int montant = 0;
    int code;
    printf("Entrer le code de la carte : ");
    scanf("%d", &code);
    if (code != 4700)
    {
        for (int i = 0; i < 2; i++)
        {
            printf("Code mauvais réesayer ! ");
            printf("Entrer le code de la carte : ");
            scanf("%d", &code);
        }
        printf("3 entré invalide carte avalée!");
    }
    else
    {
        printf("Code bon");
        printf("Entrer le montant : ");
        scanf("%d", &montant);
        if (montant < 350)
        {
            printf("Retirer vos billets");
        }
        else
        {
            printf("Montant trop elevées");
        }
    }

    return 0;
}
