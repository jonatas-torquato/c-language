#include <stdio.h>
int main(){ 
	int idade, anos, resto_anos, mes, dias; 
	
	printf("Informe a sua idade em dias: ");
	scanf("%d", &idade);
	
	anos = idade / 360;
	resto_anos = idade % 360;
	mes = resto_anos / 30;
	dias = resto_anos % 30; 
	
	printf("Anos: %d", anos);
	printf("\nMeses: %d", mes);
	printf("\nDias: %d", dias);
	
}
