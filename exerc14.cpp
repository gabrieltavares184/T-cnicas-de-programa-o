/* Exercício 14: Faça um programa que receba o anode nascimento de uma pessoa e o ano atual (variáveis do tipo int), calcule e mostre:

- a idade dessa pessoa em anos;
- quantos dias esta pessoa já viveu;
- quantos anos essa pessoa terá em 2025. */

//------------------------------------------------Bibliotecas------------------------------------------------------------//

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

//------------------------------------------------Funções----------------------------------------------------------------//

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
	printf("\nVocê possui: %d anos.", idade);
	int dias_vividos = idade * 365;
	printf("\nVocê já viveu: %d dias.", dias_vividos);
	int idade_2025 = 2025 - ano_nasc;
	printf("\nEm 2025, você terá: %d anos.\n\n", idade_2025);
	system("pause");
	
}

//-----------------------------------------------------------------------------------------------------------------------//
