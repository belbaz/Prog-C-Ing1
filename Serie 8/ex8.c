#include<stdio.h>


void maFonction(int* x)
{
    printf("Valeur contenue a l'adresse ou pointe x avant modif dans la fonction : %d\n",
           *x);
    // Affectation de la valeur 5 à l'adresse pointée par P_2
    *x = 5;
    printf("Valeur contenue apres modif a l'adresse ou pointe P2 dans la fonction : %d\n",
           *x);
}

int main()
{
    int x = 10;

    printf("L'adresse de x avant l'appelle de la fonction est : %p\n", &x);
    printf("Contenue de x avant l'appelle de la fonction : %d\n", x);
    maFonction(&x);
    printf("Contenue de x apres l'appelle de la fonction : %d\n", x);
    printf("L'adresse de x apres l'appelle de la fonction : %p\n", &x);

    return 0;
}
