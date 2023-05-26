//Um programa para gerenciar os saques de um caixa eletrônico deve possuir algum
//mecanismo para decidir o número de notas de cada valor que deve ser disponibilizado
//para o cliente que realizou o saque. Um possível critério seria o da "distribuição ótima"
//no sentido de que as notas de menor valor fossem distribuídas em número mínimo
//possível. Por exemplo, se a quantia solicitada fosse R$ 87,00, o programa deveria indicar
//uma nota de R$ 50,00, três notas de R$ 10,00, uma nota de R$ 5,00 e duas notas de R$
//1,00. Escreva um programa que receba o valor da quantia solicitada e retorne a
//distribuição das notas de acordo com o critério da distribuição ótima (considere existir
//notas de R$1,00; R$2,00; R$5,00; R$10,00; R$20,00; R$50,00 e R$100,00).

// REVISAR !!!
#include <stdio.h>
int main(){
	int valor;
	int div100, div50, div20, div10, div5, div2, div1;
	int resto100, resto50, resto20, resto10, resto5, resto2;
	
	scanf("%d", &valor);
	
	div100 = valor / 100;
	resto100 = valor % 100;
	div50 = resto100 / 50;
	resto50 = resto100 % 50;
	div20 = resto50 / 20;
	resto20 = resto50 % 20;
	div10 = resto20 / 10;
	resto10 = resto20 % 10;
	div5 = resto10 / 5;
	resto5 = resto10 % 5;
	div2 = resto5 / 2;
	resto2 = resto5 % 2;
	div1 = resto2 / 1;
	
	printf("%d notas de 100,00 \n%d notas de 50,00 \n%d notas de 20,00 \n%d notas de 10,00 \n%d notas de 5,00 \n%d notas de 2,00 \n%d notas de 1,00.", div100, div50, div20, div10, div5, div2, div1);
	
}
