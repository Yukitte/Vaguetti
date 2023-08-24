#include <stdio.h>

int main (){
    int dia,mes,ano,dia1,mes1,ano1,total1,total,resultado ;


printf("\n________________________________\n");
printf("digite dia mes e ano do seu Nascimento:");
scanf("%d %d %d", &dia, &mes, &ano);
printf("Atual :");
scanf("%d %d %d", &dia1, &mes1, &ano1);

total = dia + mes*30 + ano*365;
total1 = dia1 + mes1*30 + ano1*365;
resultado = total1 -total;

printf("\n------------------------------");
printf("\nDias de vida: %d",total);
printf("\nDias de vida: %d",resultado);
printf("\n________________________________\n");


    return 0;
}
