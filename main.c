#include <stdio.h>
#include <math.h>

int main(void)
{
    int a, b, c;
    float primoRisultatoEquazione = 0;
    float secondoRisultatoEquazione = 0;

    printf("Inserisci il valore di a\n");
    scanf("%d", &a);
    printf("Inserisci il valore di b\n");
    scanf("%d", &b);
    printf("Inserisci il valore di c\n");
    scanf("%d", &c);

    int delta = pow(b,2) - 4*a*c;
    if (delta > 0)
    {
        primoRisultatoEquazione = (-b + sqrt(delta))/(2*a);
        secondoRisultatoEquazione = (-b - sqrt(delta))/(2*a);
    }
    else if (delta == 0)
    {
        primoRisultatoEquazione = -b/(2*a);
        secondoRisultatoEquazione = -b/(2*a);
    }
    else if (delta < 0)
    {
        printf("L'equazione di secondo grado è impossibile\n");
    }

    printf("Il primo risultato dell'equazione di secondo grado è %f\n", primoRisultatoEquazione);
    printf("Il secondo risultato dell'equazione di secondo grado è %f\n", secondoRisultatoEquazione);

    return 0;
}