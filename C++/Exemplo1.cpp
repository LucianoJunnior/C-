#include<stdio.h>
#include<locale.h>

main()
{
	setlocale(LC_ALL, "Portuguese");
	
	int opcao;
	
	puts("*** Programa para verifica��o do estado c�vel *** \n \n");
	
	
	puts("Informe o seu estado c�vel, selecionando uma das op��es abaixo:\n");
	
	puts("Sele��o de op��es: \n");
	puts("[1] - Casado");
	puts("[2] - Divorciado");
	puts("[3] - Solteiro");
	puts("[4] - Vi�vo");
	puts("");
	scanf("%d", &opcao);
	
	switch(opcao)
	{
		case 1: 
			puts("Casado."); 
			break;
		case 2: 
			puts("Divorciado."); 
			break;
		case 3: 
			puts("Solteiro."); 
			break;
		case 4: 
			puts("Vi�vo."); 
			break;
		default: 
			puts("Estado c�vel n�o identificado!");
	}
}
