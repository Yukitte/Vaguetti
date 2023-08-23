#include <stdio.h>
/*Uma revendedora de carros usados paga a seus funcionários vendedores um salário fixo por mês, mais uma comissão também fixa para cada carro vendido e mais 5% do valor das vendas por ele efetuadas. Escrever um algoritmo que leia o número de carros por ele vendidos, o valor total de suas vendas, o salário fixo e o valor que ele recebe por carro vendido. Calcule e escreva o salário final do vendedor.*/
int main (){
    float fix,total,valor ,var ,par, bonus ;
    int car ;

printf("\n________________________________\n");

printf("Salário fixo:");
scanf("%f",&fix);

printf("\nBonus por carro vendido:");
scanf("%f",&bonus);

printf("\nValor total de vendas:");
scanf("%f",&valor);

printf("\nNumero de carros:");
scanf("%d",&car);



par = (bonus*car)/100;
var = (valor*5)/100;
total = fix + var + par;


printf("\n------------------------------");
printf("\nRecebe por carro : %.3f", var);
printf("\nSalário bruto : %.3f", total);
printf("\n________________________________\n");


    return 0;
}
