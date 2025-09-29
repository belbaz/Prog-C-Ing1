#include<stdio.h>


int main()
{
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

    typedef struct BilletDeTrain BilletDeTrain;
    char buffer;
    BilletDeTrain sonbillet;
    printf("saisisez un numéro de billet \n");
    scanf("%d", &sonbillet.numbillet);

    printf("saisisez un prix\n");
    scanf("%f", &sonbillet.prix);

    printf("saisisez le numero du train\n");
    scanf("%d", &sonbillet.numtrain);

    printf("saisisez le numero de voiture\n");
    scanf("%d", &sonbillet.numvoiture);

    printf("saisisez le numero de la place \n");
    scanf("%d", &sonbillet.numplace);

    printf("saisisez la gare de depart\n");
    scanf("%s", sonbillet.garedep);
    scanf("%c", &buffer);

    printf("saisisez le jour de depart \n");
    scanf("%d", &sonbillet.jourdep);

    printf("saisisez l'heure de depart \n");
    scanf("%d", &sonbillet.heuredep);

    printf("saisisez la gare d'arrive\n");
    scanf("%s", sonbillet.garearr);
    scanf("%c", &buffer);

    printf("saisisez le jour d'arrive\n");
    scanf("%d", &sonbillet.jourarr);

    printf("saisisez l'heure d'arrive \n");
    scanf("%d", &sonbillet.heurearr);

    printf("\n\n************voici votre billet**********\n");
    printf("numbillet : %d \n prix :%f \n", sonbillet.numbillet, sonbillet.prix);
    printf("numtrain : %d \n numvoiture :%d\n", sonbillet.numtrain, sonbillet.numvoiture);
    printf("numplace : %d \n garedep :%s \n", sonbillet.numplace, sonbillet.garedep);
    printf("jourdep : %d \n heuredep :%d \n", sonbillet.jourdep, sonbillet.heuredep);
    printf("garearr : %s \n jourarr :%d \n", sonbillet.garearr, sonbillet.jourarr);
    printf("heurearr : %d \n ", sonbillet.heurearr);

    return 0;
}


