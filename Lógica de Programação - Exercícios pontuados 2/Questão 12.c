#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main ( ) {
    setlocale (LC_ALL, "portuguese");

// Declara��o de vari�veis

    int a = 0, quantidade_de_Notas;
    float notas, soma_Nota, media;

// Solicitando dados

    printf ("Informe a quantiade de notas que deseja inserir: ");
    scanf ("%d", &quantidade_de_Notas);

    for (a = 1; a <= quantidade_de_Notas; a++) {
        printf ("Digite a %d� nota: ", a);
        scanf ("%f", &notas);
        
        soma_Nota += notas; }

    media = soma_Nota / quantidade_de_Notas;

// Tela de resultado

    printf ("|M�dia final: %.2f", media);

    return 0;
}