#include <stdio.h>

float nombre, somme, x, moyenne;

int main() 
{
    nombre = 0;
    somme = 0;

    printf("Entrez un entier positif: ");
    scanf("%f", &x);

    while (x >= 0) 
    {
        nombre++;
        somme = somme + x;

       printf("Entrez un entier positif: ");
        scanf("%f", &x);
    }

    printf("la moyenne est : %f\n", somme / nombre);

    return 0;
}