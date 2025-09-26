#include<stdio.h>
#include<stdlib.h>

int main()
{
    int a = 44;
    int* p = &a;

    printf("Contenu de a : %d\n", a);
    printf("Adresse de a : %p\n", &a);
    printf("Contenu du pointeur : %p\n", p);
    printf("Adresse du pointeur : %p\n", &p);
    printf("Contenu a l'adresse du pointeur : %d\n", *p);

    return 0;
}
