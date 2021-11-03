/* Exerc�cio 24: Fa�a um programa que leia o peso de uma pessoa em kg e a sua altura em metros (vari�veis tipo float). Calcular e apresentar o
resultado do IMC (�ndice de Massa Corp�rea) da pessoa. Apresente o resultado com 1 casa decimal (%.1f).

   IMC = Peso / (Altura * Altura) */

//------------------------------------------------Bibliotecas------------------------------------------------------------//

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <conio.c>

//------------------------------------------------Fun��es----------------------------------------------------------------//

main()
{
	
	setlocale(LC_ALL, "Portuguese");
	textcolor(10);
	printf("> IMC (�ndice de Massa Corp�rea) <");
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
	printf("O seu IMC (�ndice de Massa Corp�rea) �: %.1f.\n\n", imc);
	system("pause");
	
}

//-----------------------------------------------------------------------------------------------------------------------//
