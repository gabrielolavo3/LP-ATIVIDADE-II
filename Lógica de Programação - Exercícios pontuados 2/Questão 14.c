#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main ( ) {
    setlocale (LC_ALL, "portuguese");

// Declara��o de vari�veis

    int a = 1, numeros, par = 0, impar = 0, somaPar = 0, somaImpar = 0;
    float mediaPar = 0, mediaImpar = 0;

// Solicitando dados

    do {

        printf ("Informe o %d� n�mero: ", a);
        scanf ("%d", &numeros);
        a++;

        if (numeros % 2 == 0) {
            par++;
            somaPar += numeros;
            
        } else {
        impar++; 
        somaImpar += numeros; }
            
    } while (numeros >= 0);

        mediaPar = somaPar / par;
        mediaImpar = somaImpar / impar;

        printf ("M�dia de pares: %f\n", mediaPar);
        printf ("M�dia de �mpares: %f\n", mediaImpar);

    return 0;

}