#include<stdio.h>
#include <stdlib.h>

int SommeEntiers(int tab[], int indice, int sizeTab)
{
    if (indice == (sizeTab - 1)) //dernière case
        return tab[indice];
    else
        return (tab[indice] + SommeEntiers(tab, (indice + 1), sizeTab));
}

int main()
{
    int sizeTab = 0;
    printf("Saisir n, le nb d'entiers du tableau :\n");
    scanf("%d", &sizeTab);

    // Allocation dynamique du tableau
    int* tab = malloc(sizeTab * sizeof(int));
    int entre;
    for (int i = 0; i < sizeTab; i++)
    {
        printf("Saisir l'entier %d :\n", i);
        scanf("%d", &tab[i]);
    }
    printf("Affichage du tableau : \n");
    for (int i = 0; i < sizeTab; i++)
    {
        printf("%d\n", tab[i]);
    }
    printf("La somme des entiers du tableau est de : %d", SommeEntiers(tab, 0, sizeTab));
    return 0;
}
