//Faça um algoritmo para calcular a nota semestral de um aluno. A nota semestral é obtida
//pela média aritmética entre a nota de 2 bimestres. Cada nota de bimestre é composta por
//2 notas de provas. 
#include <stdio.h>
int main(){
	float n1, n2, n3, n4, media;
	printf("Informe as duas notas do 1o bimestre: ");
	scanf("%f %f", &n1, &n2);
	printf("Informe as duas notas do 2o bimestre: ");
	scanf("%f %f", &n3, &n4);
	
	media = (n1 + n2 + n3 + n4) / 4.0;

	printf("Nota semestral: %f", media);
	
}
