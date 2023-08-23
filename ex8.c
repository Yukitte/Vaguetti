#include <stdio.h>
/*Escreva um algoritmo para ler o salário mensal atual de 
um funcionário e o percentual de reajuste.
 Calcular e escrever o valor do novo salário.*/
int main (){
    float atual,novo;
    int reaj;


printf("\n________________________________\n");
printf("Salário mensal atual:");
scanf("%f",&atual);
printf("Percentual de reajuste:");
scanf("%d",&reaj);

novo = atual + (reaj*atual )/100;

printf("\n------------------------------");
printf("\nNovo salário : %.3f", novo);
printf("\n________________________________\n");


    return 0;
}
