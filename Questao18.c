//Escreva um programa que permute o valor de duas variáveis inteiras.

#include <stdio.h>

int main(){
	int a, b, aux1, aux2;
	
	printf("Digite o primeiro numero: ");
	scanf("%d", &a);
	printf("Digite o segundo numero: ");
	scanf("%d", &b);
	
	aux1 = a;
	aux2 = b;
	a = aux2;
	b = aux1;
	
	printf("Primeiro: %d \nSegundo: %d", a, b);

}
