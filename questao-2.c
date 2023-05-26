#include <stdio.h>
int main(){
	float raio, area, perimetro;
	
	printf("Informe o raio da cincurferencia de um circulo: ");
	scanf("%f", &raio);
	
	area = (raio * raio) * 3.14;  
	perimetro = 2 * 3.14 * raio;
	
	printf("Area do circulo: %f", area);
	printf("\nPerimetro do circulo: %f", perimetro);
	
}
