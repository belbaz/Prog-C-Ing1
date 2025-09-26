#include <stdio.h>
//prototype pour dire que cette fontion prend sa en param
int somme(int*, int*);

int main()
{
    int a;
    int b;

    printf("Rentrer a : ");
    scanf("%d", &a);
    printf("Rentrer b : ");
    scanf("%d", &b);

    printf("La somme est : %d", somme(&a, &b));

    return 0;
}

int somme(int* a, int* b)
{
    return (*a + *b);
}
