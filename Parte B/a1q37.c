#include <stdio.h>

//Esse programa converte a idade de total de dias em anos, meses e dias;

int main() {
    int idadeDias;

    printf("Digite a sua idade em dias: ");
    scanf("%d", &idadeDias);

    int anos = idadeDias / 365;
    int meses = (idadeDias % 365) / 30;
    int dias = (idadeDias % 365) % 30;

    printf("%d dias de idade equivalem a %d anos, %d meses e %d dias", idadeDias, anos, meses, dias);
    
    return 0;
}