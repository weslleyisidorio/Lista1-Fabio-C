#include <stdio.h>

//Leia 2 números, calcule e escreva a divisão da soma pela subtração dos números lidos

int main() {
    float a;
    float b;

    printf("Digite dois numeros separados por 'Enter':");
    scanf("%f", &a);
    scanf("%f", &b);

    float calc = (a + b) / (a - b);

    printf("O resultado da divisão da soma pela subtração dos números lidos é: %.2f", calc);

    return 0;
}
