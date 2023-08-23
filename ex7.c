#include <stdio.h>

int main (){
    int dia,mes,ano,total;


printf("\n________________________________\n");
printf("digite dia mes e ano do seu Nascimento:");
scanf("%d %d %d", &dia, &mes, &ano);


total = dia + mes*30 + ano*365;
printf("\n------------------------------");
printf("\nDias de vida: %d",total);
printf("\n________________________________\n");


    return 0;
}
