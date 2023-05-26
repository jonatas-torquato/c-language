#include <Stdio.h>
int main(){
	float rendaMensal, valorEmprestimo;
	float maximoEmprestimo, maximoRenda, maximoPrestacao;
    int qtdePrestacoes;
	
	printf("Digite o valor da renda mensal: ");
	scanf("%f", &rendaMensal);
	printf("Digite o valor do emprestimo que deseja solicitar: ");
	scanf("%f", &valorEmprestimo);
	printf("Digite o numero de prestacoes: ");
	scanf("%d", &qtdePrestacoes);
	
	maximoEmprestimo = rendaMensal * 10;
    maximoRenda = rendaMensal * 0.3;
    maximoPrestacao = valorEmprestimo / qtdePrestacoes;
	
	if ((maximoEmprestimo >= valorEmprestimo) && (maximoRenda >= maximoPrestacao)){
		printf("O EMPRESTIMO PODE SER CONCEDIDO.");}
	else{
	    printf("O EMPRESTIMO NAO PODE SER CONCEDIDO.");}
	
}
