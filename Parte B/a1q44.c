#include <stdio.h>

//Esse progrma calcula a quantidade de cobre e zinco necessários para formar a quantidade de latão informada pelo usuário.

int main() {
    float qtdLatao;

    printf("Digite a quantidaed de latão a ser formado (Kg): ");
    scanf("%f", &qtdLatao);

    float cobre = qtdLatao * 0.7;
    float zinco = qtdLatao * 0.3;

    printf("Para formar %.1fKg de Latão é preciso %.1fKg de Cobre e %.1fKg de Zinco.", qtdLatao, cobre, zinco);

    return 0;
}