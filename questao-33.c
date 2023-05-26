//Escreva um algoritmo que leia 2 valores (x e y), que devem representar as coordenadas 
//de um ponto em um plano. A seguir, determine qual o quadrante ao qual pertence o 
//ponto, ou se está sobre um dos eixos cartesianos ou na origem (x=y=0)

#include <stdio.h>
int main(){
	float x, y;
	
	printf("Digite o valor de x e y, respectivamente: ");
	scanf("%f %f", &x, &y);
	
	if (x == 0 && y == 0){
		printf("ORIGEM");}
	if (y == 0 && x != 0){
	    printf("EIXO X");}
	if (x == 0 && y != 0){
		printf("EIXO Y");}
	if (x > 0 && y > 0){
		printf("PRIMEIRO QUADRANTE");}
	if (x < 0 && y > 0){
		printf("SEGUNDO QUADRANTE");}	
	if (x < 0 && y < 0){
		printf("TERCEIRO QUADRANTE");}
	if (x > 0 && y < 0){
	    printf("QUARTO QUADRANTE");}
		
}
