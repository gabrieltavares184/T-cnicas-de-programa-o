/* Exerc�cio 4: Escreva um programa que apresente no v�deo 5 estados do Brasil e suas capitais. Cada informa��o deve estar em uma linha. */

//------------------------------------------------Bibliotecas------------------------------------------------------------//

#include <stdio.h>
#include <locale.h>
#include <conio.c>
#include <stdlib.h>

//------------------------------------------------Fun��es----------------------------------------------------------------//

main()
{	

	setlocale(LC_ALL, "Portuguese");
	textcolor(10);
	printf("Estados\t\tCapitais");
	textcolor(7);
	printf("\n\nMato Grosso\tCuiab�");
	printf("\nS�o Paulo\tS�o Paulo");
	printf("\nParan�\t\tCuritiba");
	printf("\nBahia\t\tSalvador");
	printf("\nAcre\t\tRio Branco\n\n");
	system("pause");
		
} 

//-----------------------------------------------------------------------------------------------------------------------//
