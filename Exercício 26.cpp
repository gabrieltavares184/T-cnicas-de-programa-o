/* Exercício 26: Faça um programa que calcule para o cômodo do exercício anterior a potência de iluminação necessária para o ambiente. Sabe-se
que para cada metro quadrado são necessários 18W de potência. Apresente o resultado sem casa decimal (%.0f). */

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
	float iluminacao = area * 18;
	printf("\nA largura deste cômodo é de: %.1f m^2.", area);
	printf("\nA potência de iluminação necessária neste cômodo é de: %.0fW.\n\n", iluminacao);
	system("pause");
	
}

//-----------------------------------------------------------------------------------------------------------------------//
