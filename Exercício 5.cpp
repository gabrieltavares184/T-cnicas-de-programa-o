/* Exerc�cio 5: Fa�a um programa que d� a execu��o do c�digo abaixo. Acrescente mais 3 palavras. */

//------------------------------------------------Bibliotecas------------------------------------------------------------//

#include <stdio.h>
#include <locale.h>
#include <conio.c>
#include <stdlib.h>

//------------------------------------------------Fun��es----------------------------------------------------------------//

main()
{
	
	setlocale(LC_ALL, "Portuguese");
	textbackground(15); // Exibe os caracteres com a cor de fundo escolhida.
	clrscr(); // Limpa a tela ou pinta da cor definida em textbackground(), apagando qualquer texto vis�vel.
	textcolor(13);
	printf("Espanhol\t\tPortugu�s");
	textcolor(0);
	printf("\n\nLibro\t\t\tLivro");
	printf("\nPrueba\t\t\tTeste");
	printf("\nSilla\t\t\tCadeira");
	printf("\nFiesta\t\t\tFesta");
	printf("\nPerro\t\t\tCachorro");
	printf("\nL�piz\t\t\tL�pis");
	printf("\nCuaderno\t\tCaderno\n\n");
	system("pause");
	
}

//-----------------------------------------------------------------------------------------------------------------------//
