#include <stdio.h>
#include<stdlib.h>

int main (){

//Variaveis
int primeironumero;
int segundonumero;
int terceironumero;
int maior, menor;

//Selecionando dados

printf("Digite o Primeiro Numero:");
scanf("%d", &primeironumero);

printf("Digite o Segundo Numero:");
scanf("%d", &segundonumero);

printf("Digite o Terceiro Numero:");
scanf("%d", &terceironumero);

//Operaçao 

maior = primeironumero > segundonumero ? primeironumero: segundonumero;
maior = maior > terceironumero ? maior : terceironumero;

menor = primeironumero < segundonumero ? primeironumero : segundonumero;
menor = menor < terceironumero ? menor: terceironumero;

//Final

printf("Maior Numero: %d \n", maior);
printf("Menor Numero: %d \n", menor);

return 0;

}