//24. Escreva um programa que leia três números e mostre o maior entre eles.

#include <stdio.h>
int main(){
	float n1, n2, n3;
	
	printf("Digite tres numeros: ");
	scanf("%f%f%f", &n1, &n2, &n3);
	
	if (n1 > n2 && n1 > n3){
		printf("O maior numero entre os tres: %.2f", n1);}
	else if (n2 > n1 && n2 > n3){
		printf("O maior numero entre os tres: %.2f", n2);}
	else if (n3 > n1 && n3 > n2){
	    printf("O maior numero entre os tres: %.2f", n3);}

system ("PAUSE");	    
return 0;
}
