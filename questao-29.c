//Escreva um programa que calcula o desconto previdenci�rio de um funcion�rio. Dado um 
//sal�rio, o programa deve retornar o valor do desconto proporcional ao mesmo. O c�lculo 
//segue a regra: o desconto � de 11% do valor do sal�rio, entretanto, o valor m�ximo de 
//desconto � 334,29, o que seja menor.

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
