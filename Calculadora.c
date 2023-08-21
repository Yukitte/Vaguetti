#include <stdio.h>

int main (){
//Coleta de dados
 float numero1;
 float numero2;

//Pedido de dados

printf("---------------//---------------\n");
printf("Digite os numeros para somar:\n");
printf("Numero1:");
scanf("%f",&numero1);

printf("Numero2:");
scanf("%f",&numero2);

//somando
float soma = numero1 + numero2;

//Puxando o resultado
printf("---------------//---------------\n");
printf("\nResultado:");
printf("%.0f + %.0f = %.0f",numero1 ,numero2, soma);    


    return 0;
}