#include <stdio.h>
#include <math.h>

//Escreva um programa que pergunte qual o raio de um círculo e imprima a sua área. 
//Variaveis
int main(){
    float raio,area;


//Coletando valor de variaveis 
printf("________________________________\n");

printf("Raio do circulo:");
scanf("%f",&raio);

//calculos
area = 3.14* (raio*raio);

//retorno 
printf("\n------------------------------");

printf("\nA area é :%.2f",area);

printf("\n________________________________\n");
    return 0;
} 
