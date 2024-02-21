#include <stdio.h>

// Esse programa calcula a média ponderada de um aluno

int main() {
    float nota1;
    int peso1;
    float nota2;
    int peso2;
    float nota3;
    int peso3;

    printf("Digite a 1ª nota: ");
    scanf("%f", &nota1);
    printf("Digite o peso da nota: ");
    scanf("%d", &peso1);

    printf("Digite a 2ª nota: ");
    scanf("%f", &nota2);
    printf("Digite o peso da nota: ");
    scanf("%d", &peso2);

    printf("Digite a 3ª nota: ");
    scanf("%f", &nota3);
    printf("Digite o peso da nota: ");
    scanf("%d", &peso3);

    float mediaP = (nota1*peso1 + nota2*peso2 + nota3*peso3) / (peso1 + peso2 + peso3);

    printf(" A média ponderada é: %.2f", mediaP);

    return 0;
}
