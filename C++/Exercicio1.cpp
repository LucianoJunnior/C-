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
	
	//Declara��o das vari�veis
	int numero;

	//Solicita o n�mero para o usu�rio
	printf("\n\n Informe um n�mero de 0 a 5. N�meros diferentes, ser� solicitado novo valor: ");
	scanf("%d",&numero);
	
	//Faz o la�o de repeti��o. Este la�o s� ser� quebrado, quando um n�mero igual a 1 e 5 for digitado
	while(numero < 1 || numero >5)
	{
		printf("\n O valor do n�mero est� incorreto. Por favor, digite um novo n�mero: ");
		scanf("%d",&numero);
	}
	
	printf("\n\n O n�mero digitado pelo usu�rio foi :%d",numero);
	
	system("pause");
}
