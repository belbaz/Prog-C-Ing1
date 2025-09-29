#include <stdio.h>
#include <string.h>

int nbVoyelle(char mot[])
{
    int nbVoyelle = 0;

    for (int i = 0; i < strlen(mot); i++)
    {
        if (mot[i] == 'a' || mot[i] == 'e' || mot[i] == 'i' || mot[i] == 'o' || mot[i] == 'u')
        {
            nbVoyelle++;
        }
    }
    return nbVoyelle;
}

int main()
{
    char mot[20];
    printf("Saisisez un mot : \n");
    scanf("%s", mot);
    printf("Le nb de voyelle est de : %d et le nb de caractere est de %llu", nbVoyelle(mot), strlen(mot));
    return 0;
}
