#include<stdio.h>

double HauteurDernierRebond(double h, double rebond)
{
    if (h / 2 - rebond > 0)
        return h;
    else
        return HauteurDernierRebond(h / 2, rebond - 1);
}

int main()
{
    double h;
    double rebond;
    printf("Saisir une hauteur :\n");
    scanf("%lf", &h);
    printf("Saisir un nb de rebond :\n");
    scanf("%lf", &rebond);
    printf("La hauteur du dernier rebond positif est : %.2lf", HauteurDernierRebond(h, rebond));

    return 0;
}
