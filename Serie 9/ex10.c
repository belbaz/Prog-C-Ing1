#include<stdio.h>


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


    Individu individu;
    //Nom
    printf("Entrer un nom : ");
    scanf("%19s", individu.nom); // %19s pour éviter les débordements

    // Prénom
    printf("\nEntrer un prenom : ");
    scanf("%19s", individu.prenom);

    //date de naissance
    printf("\nEntrer une date de naissance (dd/mm/YYYY) : ");
    scanf("%d/%d/%d", &individu.date.day, &individu.date.month, &individu.date.year);

    //etat
    printf("Entrer un etat (0: célibataire, 1: marié, 2: pacsé, 3: divorcé) : ");
    scanf("%d", (int*)&individu.etat); // Cast en (int*) pour éviter les avertissements

    printf("\nNom : %s", individu.nom);
    printf("\nPrenom : %s", individu.prenom);
    printf("\nDate de naissance : %02d/%02d/%04d", individu.date.day, individu.date.month, individu.date.year);
    // Affichage de l'état
    const char* etatStr[] = {"célibataire", "marié", "pacsé", "divorcé"};
    printf("\nEtat : %s", etatStr[individu.etat]);

    return 0;
}
