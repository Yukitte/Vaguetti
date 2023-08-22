
#include <stdio.h>

int main (){
    /*Operadores aritmeticos 
    soma(+)
    subtração (-)
    divisão(/)
    multiplicação(*)
    modulo(%) */
    
//Declaraçao de variaveis
 int num1, num2, soma, sub, mult, mod, pot;
 float div;

//Pedido de dados

printf("________________________________\n");
printf("Digite os numeros para somar:\n");
printf("Numero1:");
scanf("%d",&num1);

printf("Numero2:");
scanf("%d",&num2);

//somando
soma = num1 + num2;
sub = num1 - num2;
mult = num1 * num2;
mod = num1 % num2;
pot = pow(num1,num2);

div = (float)num1/(float)num2;

//Puxando o resultado
printf("--------------------------------\n");
printf("\nResultado:");
printf("\nSoma:%d",soma);
printf("\nDivisão:%.0f",div);
printf("\nSubtração:%d",sub);
printf("\nModulo:%d%",mod);
printf("\nMultiplicação:%d",mult);
printf("\nPotência:%d",pot);



printf("\n________________________________\n");
    return 0;
} 
