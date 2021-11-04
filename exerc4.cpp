/* Exercício 4: Escreva um programa que apresente no vídeo 5 estados do Brasil e suas capitais. Cada informação deve estar em uma linha. */

//------------------------------------------------Bibliotecas------------------------------------------------------------//

#include <stdio.h>
#include <locale.h>
#include <conio.c>
#include <stdlib.h>

//------------------------------------------------Funções----------------------------------------------------------------//

main()
{	

	setlocale(LC_ALL, "Portuguese");
	textcolor(10);
	printf("Estados\t\tCapitais");
	textcolor(7);
	printf("\n\nMato Grosso\tCuiabá");
	printf("\nSão Paulo\tSão Paulo");
	printf("\nParaná\t\tCuritiba");
	printf("\nBahia\t\tSalvador");
	printf("\nAcre\t\tRio Branco\n\n");
	system("pause");
		
} 

//-----------------------------------------------------------------------------------------------------------------------//
