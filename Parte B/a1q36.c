#include <stdio.h>

//Esse programa pega a idade de uma pessoa expressa em anos, meses e dias e converte para apaenas dias

int main(){
    int anos;
    int meses;
    int dias;

    printf("Digite sua idade em anos, meses e dias.\n");
    printf("Anos:");
    scanf("%d", &anos);
    printf("Meses: ");
    scanf("%d", &meses);
    printf("Dias: ");
    scanf("%d", &dias);

    int diasAno =  anos * 365;
    int diasmeses =  meses * 30;
    
    int totalDias = diasAno + diasmeses + dias;

    printf("%d anos, %d meses e %d dias equivalem a %d dias", anos, meses, dias, totalDias);

    return 0;
}