#include <stdio.h>
#include <math.h>

int main (){
 int num1,mult ; 
 int num2 = 2;

//Pedido de dados
printf("________________________________\n");

printf("Digite o numero para dobrar:\n");
scanf("%i",&num1);
mult = num1 * num2 ;


printf("\n------------------------------");

printf("\nO dobro é :%i",mult);

printf("\n________________________________\n");
    return 0;
} 