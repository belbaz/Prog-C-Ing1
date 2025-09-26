#include<stdio.h>

int main()
{
    int a = 44;
    int* P = NULL;

    P = &a;
    a = 45;

    *P = 46;    //ICI on modifie la valeur de l'adresse du pointeur
                //du coup on a modifier a !!

    printf(" le contenu de a vaut maintenant : %d\n ", a);
    return 0;
}
