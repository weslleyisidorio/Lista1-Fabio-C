#include <stdio.h>

// Esse programa le um quantidade de meses e transforma em anos e meses

int main() {
    int totalMeses;

    printf("Digite uma quantidade de meses: ");
    scanf("%d", &totalMeses);

    int anos = totalMeses / 12;
    int meses = totalMeses % 12;

    printf("%d meses correspondem a %d ano(s) e %d mes(es).", totalMeses, anos, meses);

    return 0;
}