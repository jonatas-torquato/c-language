// Escreva um programa que leia uma letra e mostre se ela é vogal ou consoante.

#include <stdio.h>
int main(){
	char letra;
	
	printf("Digite uma letra do alfabeto: ");
	scanf("%c", &letra);
	
	switch (letra){
		case 'a':
			printf("VOGAL");
			break;
		case 'b':
			printf("CONSOANTE");
		    break;
		case 'c':
			printf("CONSOANTE");
			break;
		case 'd':
			printf("CONSOANTE");
			break;
		case 'e':
			printf("VOGAL");
			break;
		case 'f':
			printf("CONSOANTE");
			break;
		case 'g':
			printf("CONSOANTE");
			break;
		case 'h':
			printf("CONSOANTE");
			break;
		case 'i':
			printf("VOGAL");
			break;
		case 'j':
			printf("CONSOANTE");
			break;
		case 'k':
			printf("CONSOANTE");
			break;
		case 'l':
			printf("CONSOANTE");
			break;
		case 'm':
			printf("CONSOANTE");
			break;
		case 'n':
			printf("CONSOANTE");
			break;
		case 'o':
			printf("VOGAL");
			break;
		case 'p':
			printf("CONSOANTE");
			break;
		case 'q':
			printf("CONSOANTE");
			break;
		case 'r':
			printf("CONSOANTE");
			break;
		case 's':
			printf("CONSOANTE");
			break;
		case 't':
			printf("CONSOANTE");
			break;
		case 'u':
			printf("VOGAL");
			break;
		case 'v':
			printf("CONSOANTE");
			break;
		case 'w':
			printf("CONSOANTE");
			break;
		case 'x':
			printf("CONSOANTE");
			break;
		case 'y':
			printf("CONSOANTE");
			break;
		case 'z':
			printf("CONSOANTE");
			break;
		default:
			printf("Valor invalido. Informe uma letra do alfabeto.");
			break;
	}
	system ("PAUSE");
	return 0;
}
