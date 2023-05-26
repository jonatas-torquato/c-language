#include <stdio.h>

int main (){
	int b, h, area, perimetro;
    
	printf("Informe o tamanho da base de um retangulo: ");
	scanf("%d", &b);
	printf("Informe o tamanho da altura de um retangulo: ");
	scanf("%d", &h);
	
	area = b * h;
	perimetro = (b+h) * 2;
	
	printf("Area do retangulo: %d", area);	
	printf("\nPerimetro do retangulo: %d", perimetro);
}
