#include<stdio.h>

int main()
{
    int alpha = 500;
    int* P0 = NULL;         //pointeur
    P0 = &alpha;            //pointeur qui pointe vers l'addresse mémoire d'alpha
    int** P1 = NULL;        //pointeur de pointeur
    P1 = &P0;               //pointeur qui pointe vers l'adresse mémoire de P0
    int*** P2 = NULL;       //pointeur de pointeur de pointeur
    P2 = &P1;               //pointeur qui pointe vers l'adresse de P1

    printf("Pointeur 1 : %d", *P0);
    printf("\nPointeur 2 : %d", **P1);
    printf("\nPointeur 3 : %d", ***P2);
    return 0;
}
