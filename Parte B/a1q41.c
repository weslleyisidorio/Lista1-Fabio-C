#include <stdio.h>

//Esse programa calcula o susto de uma carro para o consumidor

int main() {
    float precoFabrica;

    printf("Digite o valor do carro a custo de fábrica: ");
    scanf("%f", &precoFabrica);

    float percDistribuidor =  precoFabrica * 0.28;
    float impostos = precoFabrica * 0.45;

    float precoFinal = precoFabrica + percDistribuidor + impostos;

    printf("Tabela:\n-----------------\n");
    printf("Preço Fábrica: R$%.2f\n", precoFabrica);
    printf("Valor Distribuidora: R$%.2f\n", percDistribuidor);
    printf("Impostos: R$ %.2f\n", impostos);
    printf("-------------------------\n");
    printf("Total: R$%.2f", precoFinal);
}
