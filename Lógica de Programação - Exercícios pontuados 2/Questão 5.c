#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main ( ) {
    setlocale (LC_ALL, "portuguse");

// Declara��o de vari�veis

    int idioma;

// Solicitando dados

    printf ("Escolha um idioma\n");
    printf ("Digite 1 para Ingl�s\n");
    printf ("Digite 2 para Espanhol\n");
    printf ("Digite 3 para Franc�s\n\n");
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
        printf ("Op��o inv�lida!");
        break;
    }

    return 0;
}