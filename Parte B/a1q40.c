#include <stdio.h>

//Esse programa calcula o valor gasto por um fumante durante um perio de tempo

int main() {
    int tempo, qtdCigDia;
    float preco;

    printf("Digite o tempo em anos que você fuma: ");
    scanf("%d", &tempo);
    printf("Digite a quantidade de cigarros fumados por dia: ");
    scanf("%d", &qtdCigDia);
    printf("Digite o valor da carteira de cigarros: ");
    scanf("%f", &preco);

    int totalCigarros = (tempo * 365) * qtdCigDia;
    float valorTotal = (totalCigarros / 20) * preco;

    printf("Em %d anos voce fumou %d cigarros e gastou R$%.2f.", tempo, totalCigarros, valorTotal);

    return 0;


}