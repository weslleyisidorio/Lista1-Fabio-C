#include <stdio.h>

//Este programa converte um horarioa de horas e minutos para total em minutos

int main() {
    int horasIniciais;
    int minutosIniciais;

    printf("Digite a hora: ");
    scanf("%d", &horasIniciais);

    printf("Digite os minutos: ");
    scanf("%d", &minutosIniciais);

    int minutosTotais = (horasIniciais * 60) + minutosIniciais;

    printf("O total de minutos é de: %d0", minutosTotais);

    return 0;

}
