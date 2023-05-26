//Escreva um programa que calcula o desconto previdenciário de um funcionário. Dado um 
//salário, o programa deve retornar o valor do desconto proporcional ao mesmo. O cálculo 
//segue a regra: o desconto é de 11% do valor do salário, entretanto, o valor máximo de 
//desconto é 334,29, o que seja menor.

#include <stdio.h>
int main(){
	float salario, desc;
	
	printf("Digite o valor do seu salario: ");
	scanf("%f", &salario);
	
	desc = salario * 11/100.0;
	
	if (desc <= 334.29){
		printf("Valor do desconto previdenciario: R$ %.2f", desc);}
	else
	    printf("Valor do desconto previdenciario: R$ 334,29");
	
}
