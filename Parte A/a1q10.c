#include <stdio.h>


int main() {
    int a;
    int b;

    printf("Digite dois números separados por 'Enter':");
    scanf("%d", &a);
    scanf("%d", &b);

    int quociente = a / b;
    int resto = a % b;

    printf("Quociente: %d\nResto: %d", quociente, resto);

    return 0;
}