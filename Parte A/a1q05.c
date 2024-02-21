#include <stdio.h>

//Esse programa divide um numeri de 3 digitos em centena, dezena e unidade.

int main() {
    int numero;

    printf("Digite um número de 3 dígitos: ");
    scanf("%d", &numero);

    int centena = numero / 100;
    int dezena = (numero % 100) / 10;
    int unidade = (numero % 100) % 10;
    int soma = centena + dezena + unidade;

    printf("Centena: %d\nDezena: %d\nUnidade: %d\nSoma: %d", centena, dezena, unidade, soma);

    return 0;
}