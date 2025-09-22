#include <stdio.h>


int main(void)
{
    char tab[] = {'a', 'e', 'i', 'o', 'u', 'y'};
    int taille = sizeof(tab) / sizeof(tab[0]);
    int indice;

    do
    {
        printf("quelle indice ?");
        scanf("%d", &indice);
    }
    while (indice < 0 || indice >= taille)
    {
        printf("erreur d'indice ?");
    };

    printf("%c", tab[indice]);
    return 0;
}
