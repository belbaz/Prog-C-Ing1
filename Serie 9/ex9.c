#include<stdio.h>


int main()
{
    enum Boolean
    {
        true = 1,
        false = 0
    };

    enum Boolean var;
    var = true;

    if (var == true)
    {
        printf("Valeur : %d ", var);
    }
    else
    {
        printf("Valeur : %d ", var);
    }
    return 0;
}
