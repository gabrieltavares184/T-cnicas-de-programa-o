/* Exerc�cio 32: Num jogo de banco imobili�rio, uma das op��es do jogador � comprar a��es de uma empresa petrol�fera. Para saber quanto o jogador
que �cai� nesta propriedade deve pagar, multiplica o valor da soma dos dados pelo valor da a��o da empresa que � de R$53,60. Fa�a um programa que
leia o valor do dado_1 e do dado_2 (vari�veis tipo int), some estes valores e multiplique pelo valor da
a��o. Mostre o valor monet�rio a pagar (apresente com duas casas decimais). */

//------------------------------------------------Bibliotecas------------------------------------------------------------//

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

//------------------------------------------------Fun��es----------------------------------------------------------------//

main()
{
	
	setlocale(LC_ALL, "Portuguese");
	int dado_1, dado_2;
	printf("Digite o valor do dado 1: ");
	scanf("%d", &dado_1);
	printf("\nDigite o valor do dado 2: ");
	scanf("%d", &dado_2);
	float valor = (dado_1 +dado_2) * 53.60;
	printf("\n\nO valor a ser pago pela a��o da empresa petrol�fera � de: R$ %.2f.\n\n", valor);
	system("pause");
	
}

//-----------------------------------------------------------------------------------------------------------------------//
