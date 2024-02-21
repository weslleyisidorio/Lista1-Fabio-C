#include <stdio.h>
#include <math.h>

// esse programa tranfosrma uma binário de 4 digitos em um equivalente em base decimal
int main() {
    int binario;

    printf("Digite um numero binário de 4 digitos: ");
    scanf("%d", &binario);

    int n3 = binario / 1000;
    int n2 = (binario % 1000) / 100;
    int n1 = ((binario % 1000) % 100) / 10;
    int n0 = ((binario % 1000) % 100) % 10;

    int decimal = n3*pow(2,3) + n2*pow(2,2) + n1*pow(2,1) + n0*pow(2,0);

    printf("%4d  binário em decimal equivale a %d", binario, decimal);

    return 0;
}