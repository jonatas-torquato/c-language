// Escreva um programa que leia um n�mero e imprima se este n�mero � ou n�o par.

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
