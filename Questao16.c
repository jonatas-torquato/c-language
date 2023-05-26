//Faça um algoritmo que calcule e apresente o valor do volume de uma lata de óleo, dado
//seu raio e sua altura.

#include <stdio.h>
int main() {
    int num, quo1, quo2, resto1, resto2;
    int num2;
    
    printf("Escreva um numero de tres algarismos: ");
    scanf("%d",  &num);
    
    quo1 = num / 100;
    resto1 = num % 100;
    
    quo2 = resto1 / 10;
    resto2 = resto1 % 10;
    
    num2 = (resto2*100) + (quo2*10) + quo1;
	 
	 printf("Invertido: %d", num2);
}
