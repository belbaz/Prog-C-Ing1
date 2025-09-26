#include<stdio.h>

// Fonction Permut
void Permut(int* VAR1, int* VAR2)
{
    int tampon;
    tampon = *VAR1;
    *VAR1 = *VAR2;
    *VAR2 = tampon;
}

int main()
{
    int A, B;
    printf("Valeur de a ?");
    scanf("%d", &A);
    printf("Valeur de b ?");
    scanf("%d", &B);
    Permut(&A, &B);
    printf("A vaut : %d\n ", A);
    printf("B vaut : %d\n ", B);
    return 0;
}
