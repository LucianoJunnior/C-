#include<stdio.h>
#include<locale.h>

main()
{
	/*Alterado o idioma para o portugues */
	setlocale(LC_ALL,"Portuguese");
	
	/*Declara��o das vari�veis */
	int mes;

	printf("\n *** CONVERTER N�MERO EM M�S  ***  \n \n \n");
	
	/*Solicita��o dos dados para o usu�rio */
	printf("\n Digite o m�s (1 at� 12): ");
	scanf("%d",&mes);
	
	//Exemplo usando o switch
	switch(mes)
	 {
	 	case  1: printf("\n O m�s %d � JANEIRO!",mes); break; 
	 	case  2: printf("\n O m�s %d � FEVEREIRO!",mes); break; 
	 	case  3: printf("\n O m�s %d � MAR�O!",mes); break; 
	 	case  4: printf("\n O m�s %d � ABRIL!",mes); break; 
	 	case  5: printf("\n O m�s %d � MAIO!",mes); break; 
	 	case  6: printf("\n O m�s %d � JUNHO!",mes); break; 
	 	case  7: printf("\n O m�s %d � JULHO!",mes); break; 
		case  8: printf("\n O m�s %d � AGOSTO!",mes); break; 
	 	case  9: printf("\n O m�s %d � SETEMBRO!",mes); break; 
	 	case  10: printf("\n O m�s %d � OUTUBRO!",mes); break; 
		case  11: printf("\n O m�s %d � NOVEMBRO!",mes); break; 
	 	case  12: printf("\n O m�s %d � DEZEMBRO!",mes); break; 
		default: printf("\n Este m�s n�o existe!"); 
	 }
	

}
