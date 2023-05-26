//Escreva um programa que leia 3 números e calcule a média ponderada entre eles. 
//Considere que o maior número recebe peso 5 e os outros dois recebem peso 2,5.

#include <stdio.h>

int main(){
	float n1, n2, n3;
	float media1, media2, media3;
	
	printf("Digite tres numeros: ");
	scanf("%f%f%f", &n1, &n2, &n3);
	
	if (n1 > n2 && n1 > n3){
		media1 = (n1 * 5) + (n2 * 2.5) + (n3 * 2.5) / 10; 
		printf("A media ponderada: %f", media1);}
	else if (n2 > n1 && n2 > n3){
		media2 = (n2 * 5) + (n1 * 2.5) + (n3 * 2.5) / 10; 
		printf("A media ponderada: %f", media2);}
	else if (n3 > n1 && n3 > n2){
		media3 = ((n3 * 5) + (n1 * 2.5) + (n2 * 2.5)) / 10; 
		printf("A media ponderada: %f", media3);}
}
