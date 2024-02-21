#include <stdio.h>

//Esse progrtama recalcula sário com aumento de 25%

int main() {
    float salario;

    printf("Digite o salário atual: R$");
    scanf("%f", &salario);

    float novoSalario = salario * 1.25;
    
    printf("Salário reajustado: R$%.2f", novoSalario);

    return 0;

}