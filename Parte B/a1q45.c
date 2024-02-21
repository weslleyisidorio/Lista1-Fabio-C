#include <stdio.h>

//Esse programa simula um caixa eletronico

int main() {
    int valor;

    printf("Digite o valor a ser sacado: ");
    scanf("%d", &valor);

    int nota50 = valor / 50;
    int nota10 = (valor % 50) / 10;
    int nota5 = ((valor % 50) % 10) / 5;
    int nota1 = ((valor % 50) % 10) % 5;

    printf("%d notas de 50\n", nota50);
    printf("%d notas de 10\n", nota10);
    printf("%d notas de 5\n", nota5);
    printf("%d notas de 1", nota1);

    return 0;
}