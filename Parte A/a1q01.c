#include <stdio.h>

//Este programa converte m/s para Km/h

int main() {
    float velocidadeMS;;

    printf("Velocidade em m/s: ");
    scanf("%f", &velocidadeMS);


    float velocidadeKmS = velocidadeMS * 3.6;

    printf("A Velocidade convertidca é de: %.2f Km/h", velocidadeKmS);

    return 0;
}