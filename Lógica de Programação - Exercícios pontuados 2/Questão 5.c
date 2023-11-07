#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main ( ) {
    setlocale (LC_ALL, "portuguse");

// Declaração de variáveis

    int idioma;

// Solicitando dados

    printf ("Escolha um idioma\n");
    printf ("Digite 1 para Inglês\n");
    printf ("Digite 2 para Espanhol\n");
    printf ("Digite 3 para Francês\n\n");
    printf ("Selecione o idioma desejado: ");
    scanf ("%d", &idioma);

    switch (idioma) {
    case 1:
        printf ("Welcome!");
        break;
    
    case 2:
        printf ("Bienvenido!");
        break;
    
    case 3:
        printf ("Bienvenue!");
        break;
    
    default:
        printf ("Opção inválida!");
        break;
    }

    return 0;
}