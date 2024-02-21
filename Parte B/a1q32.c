#include <stdio.h>

// esse programa calcula a diferença do valor de um numero com seu inverso.

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

    //calculando diferença
    int diferenca = numero - inverso;

    printf("A diferenca entre %d e %d eh %d", numero, inverso, diferenca);

    return 0;
}