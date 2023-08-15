#include <stdio.h>

int main (){

//declaraçao de vetores de variaveis de texto 
//Chamada em c de vetores de caracteres 

 char nome [20] = "Ana da Silva";
 char endereco [50]; 
 char matricula [50];

printf("\n Nome: %s", nome );
 
 //recebendo os dados com scanf
printf("\ndigite o endereço :");
scanf("%s", endereco);
printf("\nO endereço é : %s", endereco);
fflush(stdin);

//recebendo os dados com fgets
printf("_\n");
printf("\ndigite a matricula:");
fgets(matricula,12,stdin);
printf("\nA matricula é: %s", matricula);

return 0;
}