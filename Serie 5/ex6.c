#include <stdio.h>

int main(void)
{
    float notes[4], somme = 0, moyenne = 0;

    for (int i = 0; i < sizeof(notes) / sizeof(float); i++)
    {
        printf("Rentrer une note : ");
        scanf("%f", &notes[i]);
        moyenne += notes[i];
    }

    printf("Moyenne : %.2f", moyenne / (sizeof(notes) / sizeof(float)));

    return 0;
}
