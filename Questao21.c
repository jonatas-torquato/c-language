// Escreva um programa que leia um numero e exiba se ele é positivo ou negativo.

#include <stdio.h>

int main(){
	int num;
	printf("Digite um numero inteiro: ");
	scanf("%d", &num);
	
	if (num==0)
	    printf("ZERO");
	else if (num > 0)
	        printf("POSITIVO");
	else
	        printf("NEGATIVO");
    
}
