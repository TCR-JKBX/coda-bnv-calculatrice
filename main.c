#include <stdlib.h>
#include <stdio.h>

int main()
{
    int nombre_1;
    int nombre_2;
    char operateur;

    printf("Bonjour ! Bienvenue dans ma calculatrice.\n");

    printf("Choisissez un operateur (+, -, *, /, %%): ");
    scanf(" %c", &operateur);

    printf("Choisissez le premier nombre : ");
    scanf("%d", &nombre_1);

    printf("Choisissez le deuxieme nombre : ");
    scanf("%d", &nombre_2);

    return 0;
}
