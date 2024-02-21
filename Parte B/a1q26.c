#include <stdio.h>
 
 // Esse programa converte dias em semanas e dias.

int main() {
    int totalDias;
    
    printf("Digite o total de dias a serem convertidos: ");
    scanf("%d", &totalDias);

    int semanas = totalDias / 7;
    int restoDias = totalDias % 7;

    printf("%d equivalem a %d semnana(s) e %d dia(s).", totalDias, semanas, restoDias);

    return 0;
}