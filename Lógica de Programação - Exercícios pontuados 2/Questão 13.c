#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main ( ) {
    setlocale (LC_ALL, "portuguese");

// Declara��o de vari�veis

    int Primeiro_numero, Segundo_numero, maior = 0, menor = 0;

// Solicitando dados

    printf ("Informe o 1� n�mero: ");
    scanf ("%d", &Primeiro_numero);
    printf ("Informe o 2� n�mero: ");
    scanf ("%d", &Segundo_numero);

    maior = Primeiro_numero > Segundo_numero ? Primeiro_numero : Segundo_numero;
    menor = Primeiro_numero < Segundo_numero ? Primeiro_numero : Segundo_numero;

// Tela de resultados

    printf ("Maior n�mero: %d\n", maior);
    printf ("Menor n�mero: %d", menor);

    return 0;
}