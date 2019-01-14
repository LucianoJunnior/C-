#include<stdio.h>
#include<locale.h>

main()
{
	/*Alterado o idioma para o portugues */
	setlocale(LC_ALL,"Portuguese");
	
	/*Declaração das variáveis */
	int mes;

	printf("\n *** CONVERTER NÚMERO EM MÊS  ***  \n \n \n");
	
	/*Solicitação dos dados para o usuário */
	printf("\n Digite o mês (1 até 12): ");
	scanf("%d",&mes);
	
	//Exemplo usando o switch
	switch(mes)
	 {
	 	case  1: printf("\n O mês %d é JANEIRO!",mes); break; 
	 	case  2: printf("\n O mês %d é FEVEREIRO!",mes); break; 
	 	case  3: printf("\n O mês %d é MARÇO!",mes); break; 
	 	case  4: printf("\n O mês %d é ABRIL!",mes); break; 
	 	case  5: printf("\n O mês %d é MAIO!",mes); break; 
	 	case  6: printf("\n O mês %d é JUNHO!",mes); break; 
	 	case  7: printf("\n O mês %d é JULHO!",mes); break; 
		case  8: printf("\n O mês %d é AGOSTO!",mes); break; 
	 	case  9: printf("\n O mês %d é SETEMBRO!",mes); break; 
	 	case  10: printf("\n O mês %d é OUTUBRO!",mes); break; 
		case  11: printf("\n O mês %d é NOVEMBRO!",mes); break; 
	 	case  12: printf("\n O mês %d é DEZEMBRO!",mes); break; 
		default: printf("\n Este mês não existe!"); 
	 }
	

}
