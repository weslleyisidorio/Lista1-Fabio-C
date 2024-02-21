#include <stdio.h>

// Esse Programa transforma um total de horas e em semanas, dias e horas correspondente

int main() {
    int totalHoras;

    printf("Digite um quantidade de horas: ");
    scanf("%d", &totalHoras);

    int semanas = totalHoras / 168;
    int dias = (totalHoras % 168) / 24;
    int horas = (totalHoras % 168) % 24;

    printf("%d horas correspondem a %d semana(s), %d dia(s) e %d hora(s)", totalHoras, semanas, dias, horas);

    return 0;

}