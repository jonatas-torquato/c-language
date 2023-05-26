// Escreva um programa que calcule a raiz de uma equação do primeiro grau.

#include <stdio.h>
int main(){
	float a, b, raiz;
	
	printf("Calcule a Raiz de uma equacao do 1o grau \n\nDigite o valor de A: ");
	scanf("%f", &a);
	printf("Digite o valor de B: ");
	scanf("%f", &b);
	
	raiz = (- b) / a;
	
	printf("A raiz da equacao: %.2f", raiz);
}


