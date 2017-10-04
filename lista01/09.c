#include <stdio.h>

int main (void){
	
	double temperatura, F, C;
	int opcao;
	
	printf("Digite a temperatura\n");
	scanf("%lf", &temperatura);
	printf("Digite a opção 1 para C-F e 2 para F-C\n");
	scanf("%d", &opcao);
	
	while (opcao <1 || opcao>2){
	printf("Digite a opção 1 para C-F e 2 para F-C\n");
	scanf("%d", &opcao); 
	}

	if (opcao==1) {
	F= (1.8*temperatura)+32;
	printf("A temperatura em Fareheit é:%.2lf\n",F);
	}
	else {
	C= (temperatura-32)/1.8;
	printf ("A temperatura em Celusis é: %.2lf\n", C);
	
	}
	
}
