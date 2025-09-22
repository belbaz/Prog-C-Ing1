#include <stdio.h>

int facto(int);

int sommeEntiers(int n)
{
    if (n == 1)
    {
        return 0;
    }
    else
    {
        return (n - 1) + sommeEntiers(n - 1);
    }
}

int main(void)
{
    int n;
    printf(" Saisir un entier n : \n");
    scanf("%d", &n);
    printf("La somme des %d premier(s) entier(s) vaut %d", n, sommeEntiers(n));
    return 0;
}
