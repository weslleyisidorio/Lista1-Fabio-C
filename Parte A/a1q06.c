#include <stdio.h>

//Esse progrma conversa Km/h para m/s.

int main() {
    float velocidadeKmH;

    printf("Digite um velocidade em Km/h: ");
    scanf("%f", &velocidadeKmH);

    float velocidadeMS = velocidadeKmH /3.6;

    printf("%.1fKm/h são %.1fm/s.", velocidadeKmH, velocidadeMS);
    
    return 0;
}