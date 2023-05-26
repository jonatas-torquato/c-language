//Escreva um programa que leia um número inteiro de 1 a 7 e informe o dia da semana
//correspondente, sendo domingo o dia de número 1. Se o número não corresponder a um
//dia da semana, mostre um erro.

#include <stdio.h>
int main(){
	int num;
	
	printf("Digite um numero inteiro correspondente ao dia da semana: \n");
	scanf("%d", &num);
	
	switch(num){
		case 1: 
		    printf("DOMINGO");
		    break;
		case 2:
			printf("SEGUNDA");
			break;
		case 3: 
		    printf("TERÇA");
		    break;
		case 4:
			printf("QUARTA");
			break;
		case 5: 
		    printf("QUINTA");
		    break;
		case 6:
			printf("SEXTA");
			break;
		case 7: 
		    printf("SABADO");
		    break;
		default:
			printf("NUMERO INVALIDO");
			break;
				
	}
}

