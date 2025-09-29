#include<stdio.h>
#include <string.h>

struct Personne
{
    char Nom[15];
    char Prenom[15];
};

int main()
{
    struct Personne personne;
    printf("Rentrer un nom : ");
    scanf("%s", personne.Nom);

    printf("Rentrer un prenom : ");
    scanf(" %c", personne.Prenom);

    printf("Nom : %s", personne.Nom);
    printf("\nPrenom : %s", personne.Prenom);

    return 0;
}
