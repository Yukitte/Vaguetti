#include <stdio.h>
#include <math.h>

//Faça um programa em que o usuário digite o custo de uma determinada mercadoria, em seguida, adiciona-se ao custo o valor do frete e despesas eventuais (também solicitadas pelo teclado). Para concluir, o programa pergunta qual o valor de venda e indica a percentagem de lucro da mercadoria.
//Variaveis
int main(){
float merc,frete,desp,custo,venda;
float mod;

//Coletando valor de variaveis 
printf("________________________________\n");

printf("Custos:");
printf("\nMercadoria:R$");
scanf("%f",&merc);

printf("\nFrete:R$");
scanf("%f",&frete);

printf("\nDespesas eventuais:R$");
scanf("%f",&desp);
fflush(stdin);

printf("\nValor da venda:R$");
scanf("%f",&venda);

//calculos
custo = merc + frete + desp;
mod = ((venda - custo)/custo)*100 ;

//retorno 
printf("\n------------------------------");

printf("\nPorcentagem de lucro:%.2f%% ",mod);

printf("\n________________________________\n");
    return 0;
} 
