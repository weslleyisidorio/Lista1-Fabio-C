#include <stdio.h>

//Esse programa decompõe um numero de 4 digitos e soma as unidades

int main() {
    int numero;

    printf("Digite um numero de 4 digitos: ");
    scanf("%d", &numero);

    //decompondo

    int num1 = numero/1000;
    int num2 = (numero % 1000) / 100;
    int num3 = ((numero % 1000) % 100) / 10;
    int num4 = ((numero % 1000) % 100) % 10;

    int soma = num1 + num2 + num3 + num4;

    printf("A soma de %d + %d + %d + %d = %d", num1, num2, num3, num4, soma);

    return 0;
}