#include <stdio.h>

// Esse programa calcula a soma de um numero de 3 digitos por seu inverso

int main() {
    int numero;

    printf("Digite um numero de 3 digitos: ");
    scanf("%d", &numero);
    
    //Decompondo número
    int centena = numero / 100;
    int dezena = (numero % 100) / 10;
    int unidade = (numero % 100) % 10;

    //invertendo número
    int inverso = unidade * 100 + dezena * 10 + centena;

    //calculando a soma
    int soma = numero + inverso;

    printf("A diferenca entre %d e %d eh %d", numero, inverso, soma);

    return 0;
}