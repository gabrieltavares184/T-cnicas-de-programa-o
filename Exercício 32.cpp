/* Exercício 32: Num jogo de banco imobiliário, uma das opções do jogador é comprar ações de uma empresa petrolífera. Para saber quanto o jogador
que “cai” nesta propriedade deve pagar, multiplica o valor da soma dos dados pelo valor da ação da empresa que é de R$53,60. Faça um programa que
leia o valor do dado_1 e do dado_2 (variáveis tipo int), some estes valores e multiplique pelo valor da
ação. Mostre o valor monetário a pagar (apresente com duas casas decimais). */

//------------------------------------------------Bibliotecas------------------------------------------------------------//

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

//------------------------------------------------Funções----------------------------------------------------------------//

main()
{
	
	setlocale(LC_ALL, "Portuguese");
	int dado_1, dado_2;
	printf("Digite o valor do dado 1: ");
	scanf("%d", &dado_1);
	printf("\nDigite o valor do dado 2: ");
	scanf("%d", &dado_2);
	float valor = (dado_1 +dado_2) * 53.60;
	printf("\n\nO valor a ser pago pela ação da empresa petrolífera é de: R$ %.2f.\n\n", valor);
	system("pause");
	
}

//-----------------------------------------------------------------------------------------------------------------------//
