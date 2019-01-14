#include<stdio.h>
#include<locale.h>

main()
{
	setlocale(LC_ALL, "Portuguese");
	
	int opcao;
	
	puts("*** Programa para verificação do estado cível *** \n \n");
	
	
	puts("Informe o seu estado cível, selecionando uma das opções abaixo:\n");
	
	puts("Seleção de opções: \n");
	puts("[1] - Casado");
	puts("[2] - Divorciado");
	puts("[3] - Solteiro");
	puts("[4] - Viúvo");
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
			puts("Viúvo."); 
			break;
		default: 
			puts("Estado cível não identificado!");
	}
}
