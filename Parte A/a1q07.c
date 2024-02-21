#include <stdio.h>

// Esse programa lê 3 números, calcula e escreve a soma dos 2 primeiros e a diferença entre os 2 últimos.

int main() {
    float primeiro;
    float segundo;
    float terceiro;
    
    printf("Digite 3 numeros separados por 'Enter': ");
    scanf("%f", &primeiro);
    scanf("%f", &segundo);
    scanf("%f", &terceiro);

    float soma = primeiro + segundo;
    float diferenca = segundo - terceiro;

    printf("A soma dos dois primeiros (%.1f + %.1f) = %.1f", primeiro, segundo, soma);
    printf("A diferença entr os dois últimos (%.1f - %.1f) = %.1f", segundo, terceiro, diferenca);

    return 0;

}