/* Exerc�cio 25: Escreva um programa para informar a largura e o comprimento de um c�modo em metros (vari�veis do tipo float). Apresente sua �rea
em metros quadrados. Apresentar o resultado com uma casa decimal. */

//------------------------------------------------Bibliotecas------------------------------------------------------------//

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

//------------------------------------------------Fun��es----------------------------------------------------------------//

main()
{
	
	setlocale(LC_ALL, "Portuguese");
	printf("Digite a largura de um determinado c�modo (em metros): ");
	float largura;
	scanf("%f", &largura);
	printf("Digite o comprimento de um determinado c�modo (em metros): ");
	float comprimento;
	scanf("%f", &comprimento);
	float area = largura * comprimento;
	printf("\n\nA �rea deste c�modo � de: %.1f m^2.\n\n", area);
	system("pause");
	
}

//-----------------------------------------------------------------------------------------------------------------------//
