#include<stdio.h>
#include<stdlib.h>

int main () {

//Variaveis

float custototal;
int quantidadedemacas;
float valor;

//Solicitando dados

printf("Digite a quantidade de macas:");
scanf("%d", &quantidadedemacas);

//Operações

valor = quantidadedemacas < 12 ? 1.30 : 1.0;

custototal = quantidadedemacas * valor;

//Final

printf("Preco final: R$ %.2f \n", custototal);

return 0;
}