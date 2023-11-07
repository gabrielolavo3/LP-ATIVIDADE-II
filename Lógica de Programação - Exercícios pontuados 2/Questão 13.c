#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main ( ) {
    setlocale (LC_ALL, "portuguese");

// Declaração de variáveis

    int Primeiro_numero, Segundo_numero, maior = 0, menor = 0;

// Solicitando dados

    printf ("Informe o 1º número: ");
    scanf ("%d", &Primeiro_numero);
    printf ("Informe o 2º número: ");
    scanf ("%d", &Segundo_numero);

    maior = Primeiro_numero > Segundo_numero ? Primeiro_numero : Segundo_numero;
    menor = Primeiro_numero < Segundo_numero ? Primeiro_numero : Segundo_numero;

// Tela de resultados

    printf ("Maior número: %d\n", maior);
    printf ("Menor número: %d", menor);

    return 0;
}