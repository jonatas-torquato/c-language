//Escreva um programa que leia o n�mero equivalente ao m�s e imprima a quantidade de dias deste m�s

#include <stdio.h>

int main(){
	int mes;
	
	printf("Digite um numero inteiro correspondente ao mes entre Janeiro e Dezembro: ");
	scanf("%d", &mes);
	
	switch (mes){
		case 1:
			printf("JANEIRO");
			break;
		case 2:
			printf("FEVEREIRO");
			break;
		case 3:
			printf("MAR�O");
			break;
		case 4:
			printf("ABRIL");
			break;
		case 5:
			printf("MAIO");
			break;
		case 6:
			printf("JUNHO");
			break;
		case 7:
			printf("JULHO");
			break;
		case 8:
			printf("AGOSTO");
			break;
		case 9:
			printf("SETEMBRO");
			break;
		case 10:
			printf("OUTUBRO");
			break;
		case 11:
			printf("NOVEMBRO");
			break;
		case 12:
			printf("DEZEMBRO");
			break;
		default:
			printf("NUMERO INVALIDO");
			break;
	}
}
