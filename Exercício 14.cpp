/* Exerc�cio 14: Fa�a um programa que receba o anode nascimento de uma pessoa e o ano atual (vari�veis do tipo int), calcule e mostre:

- a idade dessa pessoa em anos;
- quantos dias esta pessoa j� viveu;
- quantos anos essa pessoa ter� em 2025. */

//------------------------------------------------Bibliotecas------------------------------------------------------------//

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

//------------------------------------------------Fun��es----------------------------------------------------------------//

main()
{
	
	setlocale(LC_ALL, "Portuguese");
	printf("Digite o seu ano de nascimento: ");
	int ano_nasc;
	scanf("%d", &ano_nasc);
	printf("Digite o ano atual: ");
	int ano_atual;
	scanf("%d", &ano_atual);
	int idade = ano_atual - ano_nasc;
	printf("\nVoc� possui: %d anos.", idade);
	int dias_vividos = idade * 365;
	printf("\nVoc� j� viveu: %d dias.", dias_vividos);
	int idade_2025 = 2025 - ano_nasc;
	printf("\nEm 2025, voc� ter�: %d anos.\n\n", idade_2025);
	system("pause");
	
}

//-----------------------------------------------------------------------------------------------------------------------//
