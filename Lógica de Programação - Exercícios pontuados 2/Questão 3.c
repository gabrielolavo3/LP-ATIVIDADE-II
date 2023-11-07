#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

int main ( ) {
    setlocale (LC_ALL, "portuguese");

// Declaração de variáveis

    float nota;
    char resultado [250];

// Solicitando dados

    printf ("Informe a nota: ");
    scanf ("%f", &nota);

    if (nota >= 9) {
    strcpy (resultado, "Excelente!");
        
    } else if (nota >= 7 && nota <= 8.9) {
    strcpy (resultado, "Bom!");

    } else if (nota >= 5 && nota <= 6.9) {
    strcpy (resultado, "Razoável!");

    } else if (nota < 5) {
    strcpy (resultado, "Insuficiente!"); }

// Tela de resultado

system ("cls");

    printf ("Nota informada: %.2f\n", nota);
    printf ("Situação estudantil: %s", resultado);

    return 0;
}