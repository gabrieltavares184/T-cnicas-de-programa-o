/* Exerc�cio 26: Fa�a um programa que calcule para o c�modo do exerc�cio anterior a pot�ncia de ilumina��o necess�ria para o ambiente. Sabe-se
que para cada metro quadrado s�o necess�rios 18W de pot�ncia. Apresente o resultado sem casa decimal (%.0f). */

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
	float iluminacao = area * 18;
	printf("\nA largura deste c�modo � de: %.1f m^2.", area);
	printf("\nA pot�ncia de ilumina��o necess�ria neste c�modo � de: %.0fW.\n\n", iluminacao);
	system("pause");
	
}

//-----------------------------------------------------------------------------------------------------------------------//
