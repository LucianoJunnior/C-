/* 
Aula: 6 	
*/

#include <stdio.h>
#include<stdlib.h>
#include <locale.h>

int main()
{
	//Alterado o idioma para o portugues
	setlocale(LC_ALL,"Portuguese");
	
	//Declaração das variáveis
	int numero;

	//Solicita o número para o usuário
	printf("\n\n Informe um número de 0 a 5. Números diferentes, será solicitado novo valor: ");
	scanf("%d",&numero);
	
	//Faz o laço de repetição. Este laço só será quebrado, quando um número igual a 1 e 5 for digitado
	while(numero < 1 || numero >5)
	{
		printf("\n O valor do número está incorreto. Por favor, digite um novo número: ");
		scanf("%d",&numero);
	}
	
	printf("\n\n O número digitado pelo usuário foi :%d",numero);
	
	system("pause");
}
