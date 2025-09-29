#include<stdio.h>
#include <string.h>

int main()
{
    char Ch1[20];
    printf("Rentrer un mot (max 20) : ");
    scanf("%s", Ch1);
    char search;
    printf("caractere rechercher : ");
    scanf(" %c", &search);

    for (int i = 0; i < strlen(Ch1); i++)
    {
        if (Ch1[i] == search)
        {
            return printf("le caractere %c a était trouvé !", &Ch1[i]);
        }
    }

    return printf("Caractere introuvable");
}
