#include<stdio.h>
#include<stdlib.h>

int main()
{
    char lettre;
    FILE* fic = NULL;
    printf("Saisir une lettre : ");
    scanf("%c", &lettre);
    fic = fopen("ex1.txt", "a");
    if (fic != NULL)
    {
        fputc(lettre, fic);
        fclose(fic);
        printf("Lettre ecrite");
    }
    else
        printf("Ouverture impossible");
    return 0;
}
