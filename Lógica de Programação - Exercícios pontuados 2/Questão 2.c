#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main ( ) {
    setlocale (LC_ALL, "portugeuse");

// Declaraç?o de variáveis

    float compra, novoValor = 0;
    int diaDecompra;

// Solicitando dados

    printf ("Informe que dia a compra foi realizada\n");
    printf ("Digite 1 para dia de semana\n");
    printf ("Digite 2 para fim de semana\n");
    printf ("Selecione a opç?o: ");
    scanf ("%d", &diaDecompra);

switch (diaDecompra) {
    
case 1:
    printf ("Informe o valor da compra: ");
    scanf ("%f", &compra);

    if (compra > 100) {
        novoValor = compra - (compra * 0.10);

    } else {
        novoValor = compra; }
    break;

case 2:
    printf ("Informe o valor da compra: ");
    scanf ("%f", &compra);

    if (compra > 100) {
        novoValor = compra - (compra * 0.15);

    } else {
        novoValor = compra; }
    break;

default:
    printf ("Opç?o selecionada é INVÁLIDA!");
    break; }

// Tela de resultado

system ("cls");

    printf ("Valor inicial da compra: %.2f\n", compra);
    printf ("Valor final da compra: %.2f\n", novoValor);

    return 0;
}