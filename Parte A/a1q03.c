#include <stdio.h>

// Esse programa converte minutos em horas e minutos

int main() {
    int totalMinutos;

    printf("Digite o total de minutos: ");
    scanf("%d", &totalMinutos);

    int horas = totalMinutos / 60;
    int minutos = (totalMinutos % 60);

    printf("%d minutos convertido são %d hora(s) e %d minuto(s).", totalMinutos, horas, minutos);

    return 0;

}