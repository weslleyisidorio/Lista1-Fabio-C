#include <stdio.h>

// Esse programa calcula a média de  3 numeros

int main() {
    int num1;
    int num2;
    int num3;

    printf("Digite o primeiro numero: ");
    scanf("%d", &num1);
    printf("Digite o sengundo numero: ");
    scanf("%d", &num2);
    printf("Digite o terceiro numero: ");
    scanf("%d", &num3);

    float media = (num1 + num2 + num3) / 3;

    printf("A media eh %.1f", media);

    return 0;
}