//Dado que a fórmula para conversão de Fahrenheit para Celsius é C = 5/9 (F – 32), leu um
//valor de temperatura em Fahrenheit e exibi-lo em Celsius 

#include <stdio.h>
int main(){
	float fahr, celsius;
	printf("Informe a temperatura em Fahrenheit: ");
	scanf("%f", &fahr);
	celsius = (fahr - 32) * 1.8;
	printf("A temperatura em Celsius: %f", celsius);
}
