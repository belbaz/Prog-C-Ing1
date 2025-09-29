#include <stdio.h>
#include <string.h>

struct BilletDeTrain
{
    int numbillet;
    float prix;
    int numtrain;
    int numvoiture;
    int numplace;
    char garedep[50];
    int jourdep;
    int heuredep;
    char garearr[50];
    int jourarr;
    int heurearr;
};

void afficheMaxBillet(struct BilletDeTrain billet[], int taille)
{
    float maxBilletPrice = 0;
    char maxGaredep[50];
    char maxGarearr[50];

    for (int j = 0; j < taille; j++)
    {
        if (billet[j].prix > maxBilletPrice)
        {
            maxBilletPrice = billet[j].prix;
            strcpy(maxGaredep, billet[j].garedep);
            strcpy(maxGarearr, billet[j].garearr);
        }
    }
    printf("Le billet le plus cher : %.2f, Gare de départ : %s, Gare d'arrivée : %s\n", maxBilletPrice, maxGaredep,
           maxGarearr);
}

int main()
{
    typedef struct BilletDeTrain BilletDeTrain;
    char buffer;
    int taille = 3;
    BilletDeTrain sonbillet[taille];

    for (int i = 0; i < taille; i++)
    {
        printf("saisisez un numéro de billet \n");
        scanf("%d", &sonbillet[i].numbillet);

        printf("saisisez un prix\n");
        scanf("%f", &sonbillet[i].prix);

        printf("saisisez le numero du train\n");
        scanf("%d", &sonbillet[i].numtrain);

        printf("saisisez le numero de voiture\n");
        scanf("%d", &sonbillet[i].numvoiture);

        printf("saisisez le numero de la place \n");
        scanf("%d", &sonbillet[i].numplace);

        printf("saisisez la gare de depart\n");
        scanf("%s", sonbillet[i].garedep);
        scanf("%c", &buffer);

        printf("saisisez le jour de depart \n");
        scanf("%d", &sonbillet[i].jourdep);

        printf("saisisez l'heure de depart \n");
        scanf("%d", &sonbillet[i].heuredep);

        printf("saisisez la gare d'arrive\n");
        scanf("%s", sonbillet[i].garearr);
        scanf("%c", &buffer);

        printf("saisisez le jour d'arrive\n");
        scanf("%d", &sonbillet[i].jourarr);

        printf("saisisez l'heure d'arrive \n");
        scanf("%d", &sonbillet[i].heurearr);
    }

    printf("\n\n************voici votre billet**********\n");
    afficheMaxBillet(sonbillet, taille);

    return 0;
}
