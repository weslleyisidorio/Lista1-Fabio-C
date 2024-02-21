#include <stdio.h>


int main() {
    int numero;

    printf("Digite um número de 3 dígitos: ");
    scanf("%d", &numero);

    int centena = numero / 100;
    int dezena = (numero % 100) / 10;
    int unidade = (numero % 100) % 10;

    printf("%d%d%d", unidade, dezena, centena);
    
    return 0;
}