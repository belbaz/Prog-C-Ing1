#include<stdio.h>
#include<stdlib.h>

void affiche(char* Mot)
{
    printf("%s", Mot);
}

void modif(char* Mot)
{
    printf("Nouveau mot : ");
    scanf("%s", Mot);
}

int main()
{
    char Mot[50];
    printf("Entrer un mot : ");
    scanf("%s", Mot);
    affiche(Mot);
    modif(Mot);
    affiche(Mot);
    return 0;
}
