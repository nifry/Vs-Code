#include<stdio.h>
#include<stdlib.h>



//Variaveis

int main (){

int idade;

//Solicitando dados 
printf("Digite sua idade:");
scanf("%d", &idade);

//Consideraçoes

if (idade >= 18  && idade <= 65) {
    printf("Obrigado a votar");
} else {
 printf("Nao e obrigado  VOTAR");
}


return 0;
}