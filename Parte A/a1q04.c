#include <stdio.h>

// Esse programa faz a conversão de dolar em reais, passando-se a cotação em dolar

int main() {
    float valorDolar;
    float quantidadeDolares;
    
    printf("Digite o cambio do dólar em Reais: R$");
    scanf("%f", &valorDolar);

    printf("Digite o valor a ser convertido: US$");
    scanf("%f", &quantidadeDolares);

    float reais = valorDolar * quantidadeDolares;

    printf("US$%.2f convertidos são R$%.2f.",quantidadeDolares , reais);

    return 0;
}