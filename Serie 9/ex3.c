#include<stdio.h>
#include <string.h>

int main()
{
    char Ch1[20];
    printf("Rentrer un mot (max 20) : ");
    scanf("%s", &Ch1);                           //%s tout le mot
    printf("Il y a %llu lettre(s) dans %s\n \n ", strlen(Ch1), Ch1);
    return 0;
}
