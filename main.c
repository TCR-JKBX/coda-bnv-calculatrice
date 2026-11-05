
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

    if (operateur == '+')
    {
        int resultat = nombre_1 + nombre_2;
        printf("%d %c %d = %d\n", nombre_1, operateur, nombre_2, resultat);
    }
    else if (operateur == '-')
    {
        int resultat = nombre_1 - nombre_2;
        printf("%d %c %d = %d\n", nombre_1, operateur, nombre_2, resultat);
    }
    else if (operateur == '*')
    {
        int resultat = nombre_1 * nombre_2;
        printf("%d %c %d = %d\n", nombre_1, operateur, nombre_2, resultat);
    }
    else if (operateur == '/')
    {
        if (nombre_2 == 0)
        {
            printf("Impossible de diviser par zero\n");
        }
        else
        {
            double resultat = (double)nombre_1 / nombre_2;
            printf("%d %c %d = %.2f\n", nombre_1, operateur, nombre_2, resultat);
        }
    }
    else if (operateur == '%')
    {
        if (nombre_2 == 0)
        {
            printf("Impossible de faire un modulo par zero\n");
        }
        else
        {
            int resultat = nombre_1 % nombre_2;
            printf("%d %c %d = %d\n", nombre_1, operateur, nombre_2, resultat);
        }
    }
    else
    {
        printf("Operateur non reconnu\n");
    }

    return 0;
}

