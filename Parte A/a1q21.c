#include <stdio.h>

// Esse programa converte graus Fahrenheit em Celsius

int main() {
    float fahrenheit;

    printf("Digite os graus em Fahrenheit: ");
    scanf("%f", &fahrenheit);

    float celsius = (5 * fahrenheit - 160) / 9;

    printf("%.1f ºF equivalem a %.1f ºC", fahrenheit, celsius);

    return 0;
}