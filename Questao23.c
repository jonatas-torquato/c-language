// Escreva um programa que leia um número e imprima se este número é ou não par.

#include <stdio.h>

int main(){
	int num;
	
	printf("Informe um numero inteiro positivo: ");
	scanf("%d", &num);
	
	if((num % 2)==0)
	    printf("PAR");
    
	else
	    printf("IMPAR");

}
