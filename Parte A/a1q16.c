#include <stdio.h>
#include<math.h>

//Esse programa calcula a área de um quadrado

int main() {
    float lado;

    printf("Digite o valor do lado do quadrado: ");
    scanf("%f", &lado);

    float area = pow(lado, 2);

    printf("A Área de um triângulo de área %.1f é %.1f", lado, area);

    return 0;
}