#include <stdio.h>

// Esse programa retorna 70% de um valor

int main(){
    float valor;

    printf("Digite um valor em R$:");
    scanf("%f", &valor);

    float valor70 = valor * 0.7;

    printf("70%% de R$%.2f eh R$%.2f", valor, valor70 );

    return 0;
}