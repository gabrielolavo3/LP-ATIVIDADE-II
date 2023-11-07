#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main ( ) {
    setlocale (LC_ALL, "portuguese");

// Declaração de variáveis

    int numero, i = 0;

// Solicitando dados

    printf ("Informe um número: ");
    scanf ("%d", &numero);

    if (numero <= 1) {
    printf ("O número é primo");
    } else {
        
        for (i = 2; i <= numero; i++) {
            
        if (numero % i == 0) {
    printf ("O número não é primo"); }
 }

 }

    return 0;

}