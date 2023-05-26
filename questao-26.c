//Escreva um programa que leia 3 valores e escreva a soma dos 2 maiores.

#include <stdio.h>

int main(){
	float n1, n2, n3;
	float soma1, soma2, soma3, soma4, soma5, soma6;
	
	printf("Digite tres numeros: ");
	scanf("%f%f%f", &n1, &n2, &n3);
	
	if (n1 >= n2 && n2 >= n3){
		soma1 = n1 + n2;
		printf("A soma dos maiores numeros: %.2f", soma1);}
	else if (n1 >= n2 && n3 >= n2){
	    soma2 = n1 + n3;
		printf("A soma dos maiores numeros: %.2f", soma2);}
	else if (n2 >= n1 && n3 >= n1){
	    soma3 = n2 + n3;
		printf("A soma dos maiores numeros: %.2f", soma3);}
	else if (n2 >= n1 && n1 >= n3){
		soma4 = n2 + n1;
		printf("A soma dos maiores numeros: %.2f", soma4);}
	else if (n3 >= n1 && n1 >= n2){
	    soma5 = n3 + n1;
		printf("A soma dos maiores numeros: %.2f", soma5);}
	else if (n3 >= n1 && n2 >= n1){
	    soma6 = n3 + n2;
		printf("A soma dos maiores numeros: %.2f", soma6);}

system ("PAUSE");
return 0;
}
