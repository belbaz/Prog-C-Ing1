#include<stdio.h>

const char* affiche(int tab[])
{
    int* P = NULL; // on déclare un pointeur sur des réels
    for (int i = 0; i < 5; i++)
    {
        P = &tab[i]; // on fait pointer P sur le contenu de T [i]
        // on affiche le contenu présent où pointe P :
        printf("Element %d du tableau : %d \n", (i + 1), *P);
    }
    return 0;
}

int main()
{
    int tab[5] = {1, 2, 3, 4, 5};
    printf(affiche(tab));
    return 0;
}
