/* Exerc�cio 21: Uma empresa resolveu cobrar o uso de games em seu site por horas de acesso. Fa�a um programa que acesse o n�mero de horas que
um jogador quer utilizar, calcule e mostre o valor sabendo que a hora de jogo custa R$2,59. Apresente o resultado com 2 casas decimais
porque � valor monet�rio na moeda local R$ (%.2f). */

//------------------------------------------------Bibliotecas------------------------------------------------------------//

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

//------------------------------------------------Fun��es----------------------------------------------------------------//

main()
{
	
	setlocale(LC_ALL, "Portuguese");
	printf("Digite o n�mero de horas que voc� deseja utilizar: ");
	float horas;
	scanf("%f", &horas);
	float valor = horas * 2.59; // Esta vari�vel � respons�vel pelo armazenamento e c�lculo do valor que o usu�rio dever� pagar.
	printf("\nValor total: R$ %.2f.\n\n", valor);
	system("pause");
	
}

//-----------------------------------------------------------------------------------------------------------------------//
 
