#include <stdio.h>

// Esse programa converte minutos em dias, horas e minutos

int main() {
    int totalMinutos;

    printf("Digite a quantidade de minutos: ");
    scanf("%d",&totalMinutos);

    int dias = totalMinutos / 1440;
    int horas = (totalMinutos % 1440) / 60;
    int minutos = (totalMinutos % 1440) % 60;

    printf("%d minutos correspondem a %d dia(s) %d hora(s) e %d minuto(s)", totalMinutos, dias, horas, minutos);

    return 0; 
}