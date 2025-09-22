#include <stdio.h>

int facto(int);

int Facto(int n)
{
    return n > 1 ? n * Facto(n - 1) : 1;
}

int main(void)
{
    int x;
    printf(" Saisir un entier x \n");
    scanf("%d", &x);
    printf(" %d! = %d", x, Facto(x));
    return 0;
}
