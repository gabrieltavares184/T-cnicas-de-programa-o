/* Exercício 24: Faça um programa que leia o peso de uma pessoa em kg e a sua altura em metros (variáveis tipo float). Calcular e apresentar o
resultado do IMC (Índice de Massa Corpórea) da pessoa. Apresente o resultado com 1 casa decimal (%.1f).

   IMC = Peso / (Altura * Altura) */

//------------------------------------------------Bibliotecas------------------------------------------------------------//

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <conio.c>

//------------------------------------------------Funções----------------------------------------------------------------//

main()
{
	
	setlocale(LC_ALL, "Portuguese");
	textcolor(10);
	printf("> IMC (Índice de Massa Corpórea) <");
	textcolor(15);
	printf("\n\nDigite a sua massa (em quilogramas): ");
	float massa;
	textcolor(10);
	scanf("%f", &massa);
	textcolor(15);
	printf("Digite a sua altura (em metros): ");
	float altura;
	textcolor(10);
	scanf("%f", &altura);
	float imc = massa / (altura * altura);
	textcolor(15);
	printf("O seu IMC (Índice de Massa Corpórea) é: %.1f.\n\n", imc);
	system("pause");
	
}

//-----------------------------------------------------------------------------------------------------------------------//
