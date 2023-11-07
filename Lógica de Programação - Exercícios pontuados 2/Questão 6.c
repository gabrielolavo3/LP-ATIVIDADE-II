#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main ( ) {
    setlocale (LC_ALL, "portuguese");


// Declaração de variáveis

    int produto;

// Solicitando dados

    printf ("Escolha o produto\n");
    printf ("Digite 1 para camisa\n");
    printf ("Digite 2 para calça\n");
    printf ("Digite 3 para sapato\n\n");
    printf ("Selecione o produto desejado: ");
    scanf ("%d", &produto);

    switch (produto) {
    case 1:
        system ("cls");
        printf ("Produto selecionado: Camisa!\n");
        printf ("Valor do produto: R$ 85,50");
        break;

    case 2:
        system ("cls");
        printf ("Produto selecionado: Calça!\n");
        printf ("Valor do produto: R$ 102,00");
        break;

    case 3:
        system ("cls");
        printf ("Produto selecionado: Sapato!\n");
        printf ("Valor do produto: R$ 152,60");
        break;
    
    default:
        printf ("Opção selecionada é inválida!");
        break;
    }

    return 0;
}