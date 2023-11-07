#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main ( ) {
    setlocale (LC_ALL, "portuguse");

// Declaração de variáveis

    int idade;

// Solicitando dados

    printf ("Informe a sua idade: ");
    scanf ("%d", &idade);

    if (idade >= 18) {
        printf ("Acesso permitido!");
    
    } else {
        printf ("Acesso negado!"); }
    

    return 0;
}