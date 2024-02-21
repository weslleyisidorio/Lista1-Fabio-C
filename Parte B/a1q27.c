#include <stdio.h>

// Esse programa transforma um total de segundos em horas, minutos e segundos

int main() {
    int totalSegundos;

    printf("Digite um total de segundos: ");
    scanf("%d", &totalSegundos);

    int horas = totalSegundos/ 3600;
    int minutos = (totalSegundos % 3600) / 60;
    int segundos = (totalSegundos % 3600) % 60;

    printf("%d segundos equivlem a %d horas, %d minutos e %d segundos",totalSegundos, horas, minutos, segundos);

    return 0;
}