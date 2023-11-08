/* 
Descri��o  : Criar um menu de jogo para o usu�rio escolher a fun��o que quer e
executar, usando Switch Case. N menu exibir: 1 - Novo jogo, 2 - Carregar jogo, 3 - Configura��es! (fun��o)
Professor  : Carlos Anderson Santos de Jesus 
Autor(a)   : Gabriel S. Olavo
Data atual : 07/11/2023 */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <locale.h>

int main ( ) {
    setlocale (LC_ALL, "portuguese");

// Declara��o de vari�veis

    float numero;
    int menu;

// Solicitando dados

do {
    printf ("VODEX YELLOW & GREEN! Jogue e adivinhe\n\n");
    printf ("Selecione a a��o que deseja\n\n");
    printf ("C�digo | Descri��o das Fun��es\n");
    printf ("   1   | New Game\n");
    printf ("   2   | Load Game\n");
    printf ("   3   | Settings\n\n");
    printf ("Pressione o bot�o correspondente: ");
    scanf ("%d", &menu);

switch (menu) {
case 1:
    system ("cls || clear");
    printf ("VODEX YELLOW & GREEN! Jogue e adivinhe\n\n");
    printf ("NEW GAME SELECIONADO!\nAguarde, carregando a nova Gameplay\n\n");
    sleep (3);
    printf ("Welcome to the Jungle! Jogue e acerte um dos n�mero\n\n");

do {
    printf ("Digite um valor: ");
    scanf ("%f", &numero);

    if (numero <= 0) {
        printf ("Longe! Tente um valor maior\n\n");
       
    } else if (numero >= 1 && numero <= 5) {
        printf ("Insuficiente! Tente um valor maior\n\n");

    } else if (numero >= 6 && numero <= 9) {
        printf ("Indo pelo caminho certo! Tente um valor maior\n\n");
 
    } else if (numero >= 10 && numero <= 14) {
        printf ("Quase l�! Tente um valor um pouco maior\n\n");} 
    
    if (numero >= 15 && numero <= 20) {
        printf ("Parab�ns! Voc� acertou o valor\n"); }

} while (numero != 15);
    break;

case 2:
    system ("cls || clear");
    printf ("VODEX YELLOW & GREEN! Jogue e adivinhe\n\n");
    printf ("LOAD GAME SELECIONADO!\nAguarde, carregando ponto de salvamento");
    break;

case 3:
    system ("cls || clear");
    printf ("VODEX YELLOW & GREEN! Jogue e adivinhe\n\n");
    printf ("SETTINGS SELECIONADO!\n\n");
    printf ("   Y   | Controles do Joystick\n");
    printf ("   A   | �udio\n");
    printf ("   X   | Brilho e Contraste\n");
    printf ("   B   | Dificuldade de Gameplay\n\n");
break;

default:
    system ("cls || clear");
    printf ("\nERRO! ERRO! Sele��o incorreta.\n\n");
    break; }

} while (menu < 1 || menu > 3);

    return 0;
}