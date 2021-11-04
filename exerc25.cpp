/* Exercício 25: Escreva um programa para informar a largura e o comprimento de um cômodo em metros (variáveis do tipo float). Apresente sua área
em metros quadrados. Apresentar o resultado com uma casa decimal. */

//------------------------------------------------Bibliotecas------------------------------------------------------------//

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

//------------------------------------------------Funções----------------------------------------------------------------//

main()
{
	
	setlocale(LC_ALL, "Portuguese");
	printf("Digite a largura de um determinado cômodo (em metros): ");
	float largura;
	scanf("%f", &largura);
	printf("Digite o comprimento de um determinado cômodo (em metros): ");
	float comprimento;
	scanf("%f", &comprimento);
	float area = largura * comprimento;
	printf("\n\nA área deste cômodo é de: %.1f m^2.\n\n", area);
	system("pause");
	
}

//-----------------------------------------------------------------------------------------------------------------------//
