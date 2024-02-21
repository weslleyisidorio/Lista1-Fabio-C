#include <stdio.h>
#include <math.h>

//Esse programa calcula a distancia entre duas retas

int main() {
    float x1,y1,x2,y2;

    printf("Digite X1 do ponto 1: ");
    scanf("%f", &x1);
    printf("Digite Y1 do ponto 1: ");
    scanf("%f", &y1);
    printf("Digite X2 do ponto 2: ");
    scanf("%f", &x2);
    printf("Digite Y2 do ponto 2: ");
    scanf("%f", &y2);

    float d = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));

    printf("A distancia entre os pontos é de %.1f", d);

    return 0;
}