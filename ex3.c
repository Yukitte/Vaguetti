#include <stdio.h>
#include <math.h>

//determinando variaveis
int main(){
int comp,larg,mult;
//pedindo variaveis
printf("________________________________\n");

printf("Para saber área da casa\n");
printf("Digite o Comprimento:\n");
scanf("%i",&comp);

printf("Largura:\n");
scanf("%i",&larg);

mult = comp * larg ;

//retomando
printf("\n------------------------------");

printf("\nA área da casa é:%i",mult);

printf("\n________________________________\n");
    return 0;
} 