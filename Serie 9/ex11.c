#include<stdio.h>
#include <string.h>


int main()
{
    typedef enum Etat Etat; //enum c'est pour des constantes
    enum Etat
    {
        célibataire, marié, pacsé, divorcé
    };

    typedef struct Date Date; //stuct c'est pour stocker des données
    struct Date
    {
        int year;
        int month;
        int day;
    };

    typedef struct Individu Individu;
    struct Individu
    {
        char nom[20];
        char prenom[20];
        Date date;
        Etat etat;
    };

    Individu individu[4];

    for (int i = 0; i < 4; i++)
    {
        // Copie des chaînes de caractères avec strcpy
        sprintf(individu[i].nom, "Jean %d", i + 1);
        strcpy(individu[i].prenom, "Dupont");
        individu[i].date.day = i;
        individu[i].date.month = i;
        individu[i].date.year = 2000 + i;
        individu[i].etat = i;
    }

    for (int i = 0; i < 4; i++)
    {
        printf("\nNom : %s", individu[i].nom);
        printf("\nPrenom : %s", individu[i].prenom);
        printf("\nDate de naissance : %02d/%02d/%04d", individu[i].date.day, individu[i].date.month, individu[i].date.year);
        // Affichage de l'état
        const char* etatStr[] = {"célibataire", "marié", "pacsé", "divorcé"};
        printf("\nEtat : %s", etatStr[individu[i].etat]);
        printf("\n--------------------------------------------");
    }

    return 0;
}
