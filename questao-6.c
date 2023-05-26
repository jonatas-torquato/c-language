#include <stdio.h>
int main(){
	int n1, n2, quo, resto;
	printf("CALCULE A DIVISAO \n\nInforme o primeiro numero (Dividendo): ");
	scanf("%d", &n1);
    printf("\nInforme o segundo numero (Divisor): ");
	scanf("%d", &n2);
	
	quo = n1 / n2;
	resto = n1 % n2;
	printf("Quociente da divisao: %d", quo);
	printf("\nResto da divisao: %d", resto);	
}
