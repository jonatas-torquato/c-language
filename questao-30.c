//30. Um posto está vendendo combustíveis com a seguinte tabela de descontos:
//ÁLCOOL: 
//        - Até 25 litros, desconto de 2% por litro
//        - Acima de 25 litros, desconto de 4% por litro
//GASOLINA: 
//        - Até 25 litros, desconto de 3% por litro
//        -Acima de 25 litros, desconto de 5% por litro
//Escreva um algoritmo que leia o número de litros vendidos e o tipo de combustível 
//(codificado da seguinte forma: A-álcool, G-gasolina), calcule e imprima o valor a ser 
//pago pelo cliente sabendo-se que o preço do litro da gasolina é R$ 2,70 e o preço do litro 
//do álcool é R$ 1,90

#include <stdio.h>

int main(){
	char tipo; //tipo de combustivel
	float litro; //qtde de litros, 
	float desc1, desc2, desc3, desc4; //calculo desconto
	float valor1, valor2, valor3, valor4; //valor total combustivel com desconto
	
	printf("Digite o tipo de combustivel, sendo 'A' para Alcool e 'G' para Gasolina: ");
	scanf("%c", &tipo);
	printf("Digite a quantidade de litros do combustivel escolhido: ");
	scanf("%f", &litro);
	
	switch (tipo){
		case 'A':
			printf("ALCOOL \n\n");
			if (litro <= 25.0){
				desc1 = 1.90 - (1.90 * (2/100.0));
				valor1 = desc1 * litro;
				printf("Valor total com desconto: %.2f", valor1);
			}
			else if (litro > 25.0){
				desc2 = 1.90 - (1.90 * (4/100.0));
				valor2 = desc2 * litro;
				printf("Valor total com desconto: %.2f", valor2);
			}
			break;
		case 'G':
			printf("GASOLINA \n\n");
			if (litro <= 25.0){
				desc3 = 2.70 - (2.70 * (3/100.0));
				valor3 = desc3 * litro;
				printf("Valor total com desconto: %.2f", valor3);
			}
			else if (litro > 25.0){
				desc4 = 2.70 - (2.70 * (5/100.0));
				valor4 = desc4 * litro;
				printf("Valor total com desconto: %.2f", valor4);
			}
			break;
		default:
			printf("Tipo de combustivel invalido.");
			break;
	}
	

}
