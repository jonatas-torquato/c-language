#include <stdio.h>
int main(){
	float raio, altura, vol;
	printf("Informe o valor do Raio da lata de oleo: ");
	scanf("%f", &raio);
	printf("Informe o valor da Altura da lata de oleo: ");
	scanf("%f", &altura);
	
	vol = (raio * raio) * 3.14 * altura;
	
	printf("%2.f", vol);
	
}
