/* Exercício 21: Uma empresa resolveu cobrar o uso de games em seu site por horas de acesso. Faça um programa que acesse o número de horas que
um jogador quer utilizar, calcule e mostre o valor sabendo que a hora de jogo custa R$2,59. Apresente o resultado com 2 casas decimais
porque é valor monetário na moeda local R$ (%.2f). */

//------------------------------------------------Bibliotecas------------------------------------------------------------//

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

//------------------------------------------------Funções----------------------------------------------------------------//

main()
{
	
	setlocale(LC_ALL, "Portuguese");
	printf("Digite o número de horas que você deseja utilizar: ");
	float horas;
	scanf("%f", &horas);
	float valor = horas * 2.59; // Esta variável é responsável pelo armazenamento e cálculo do valor que o usuário deverá pagar.
	printf("\nValor total: R$ %.2f.\n\n", valor);
	system("pause");
	
}

//-----------------------------------------------------------------------------------------------------------------------//
 
