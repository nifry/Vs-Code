#include <stdio.h>
#include <stdlib.h>

int main() {

int i;
int numero;

printf("Digite um numero para a tabuada:");
scanf("%d", &numero);

for (i = 1; i <= 10; i++){
    printf("%d x %d = %d \n", numero, i, numero * i);
}

    return 0;
}