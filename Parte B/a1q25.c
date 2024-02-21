#include <stdio.h>

// Esse programa  converte um total de metros em Kilometros e metros

int main() {
    int totalMetros;

    printf("Digite uma quantidade de metros: ");
    scanf("%d", &totalMetros);

    int kilometros = totalMetros / 1000;
    int restoMetros = totalMetros % 1000;

    printf("%d equivalem a %d Kilometros e %d metros.", totalMetros, kilometros, restoMetros);

    return 0;
}