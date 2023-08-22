#include <stdio.h>
#include <math.h>

//determinando variaveis
int main(){
float real;
float dolar;

printf("________________________________\n");

printf("Converta o valor de Dolar para real\n");
printf("Valor em real:");
scanf("%f",&real);

dolar = real/ 4.95;


printf("\n------------------------------");

printf("\nO valor em dolar é :$%.2f",dolar);

printf("\n________________________________\n");
    return 0;
} 