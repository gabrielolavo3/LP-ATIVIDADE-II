#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

int main ( ) {
    setlocale (LC_ALL, "portuguese");

// Declaração de variáveis

    float temperatura;
    char resultado [250];

// Solicitando dados

    printf ("Informe a temperatura atual do jogo: ");
    scanf ("%f", &temperatura);

    if (temperatura > 25 ) {
    strcpy (resultado, "Clima ensolarado!");
    
    } else if (temperatura >= 15 && temperatura <= 25) {
    strcpy (resultado, "Clima nublado!");

    } else {
    strcpy (resultado, "Clima chuvoso!"); }

// Tela de resultado

system ("cls");
    printf ("%s", resultado);
    
    return 0;

}