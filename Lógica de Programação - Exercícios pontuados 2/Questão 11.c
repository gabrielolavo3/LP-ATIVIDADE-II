#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

int main ( ) {
    setlocale (LC_ALL, "portuguese");

// Declaração de variáveis

    char senhadeAcesso [250] = "Senai522";
    char senhaDigitada [250];

// Solicitando dados

    do {
        printf ("Informe a senha de acesso: ");
        gets (senhaDigitada);

        if (strcmp (senhadeAcesso, senhaDigitada) != 0) {
            printf ("\nSenha INVÁLIDA! Insira novamente...\n");  
        } else {
            printf ("\nAcesso permitido. BEM-VINDO!\n"); }

    } while (strcmp (senhadeAcesso, senhaDigitada) != 0);
    

    return 0;
}