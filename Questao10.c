//Converter um inteiro informado menor que 32 para sua representação em binário//

#include <stdio.h>
int main (){
	int num;
	int resto1, resto2, resto3, resto4, resto5;
	int quo1, quo2, quo3, quo4, quo5, quo6;
	
	printf("Digite um numero menor que 32: ");
	scanf("%d", &num);
	
	resto1 = num % 2;
	quo1 = num / 2;
	
	resto2 = quo1 % 2;
	quo2 = quo1 / 2;
	
	resto3 = quo2 % 2;
	quo3 = quo2 / 2;
	
	resto4 = quo3 % 2;
	quo4 = quo3 / 2;
	
	resto5 = quo4 % 2;
	quo5 = quo4 / 2;
	
	quo6 = quo5 / 2;
	
	printf("O numero  digitado em binario: %d %d %d %d %d %d", quo6, resto5, resto4, resto3, resto2, resto1);
	
	
}
