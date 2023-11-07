#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main ( ) {
    setlocale (LC_ALL, "portuguese");

int a = 0;

    for (a = 10; a >= 0; a--) {
        printf ("%d\n", a); }

    return 0;
}