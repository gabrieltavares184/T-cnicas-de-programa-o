/* Exercício 5: Faça um programa que dê a execução do código abaixo. Acrescente mais 3 palavras. */

//------------------------------------------------Bibliotecas------------------------------------------------------------//

#include <stdio.h>
#include <locale.h>
#include <conio.c>
#include <stdlib.h>

//------------------------------------------------Funções----------------------------------------------------------------//

main()
{
	
	setlocale(LC_ALL, "Portuguese");
	textbackground(15); // Exibe os caracteres com a cor de fundo escolhida.
	clrscr(); // Limpa a tela ou pinta da cor definida em textbackground(), apagando qualquer texto visível.
	textcolor(13);
	printf("Espanhol\t\tPortuguês");
	textcolor(0);
	printf("\n\nLibro\t\t\tLivro");
	printf("\nPrueba\t\t\tTeste");
	printf("\nSilla\t\t\tCadeira");
	printf("\nFiesta\t\t\tFesta");
	printf("\nPerro\t\t\tCachorro");
	printf("\nLápiz\t\t\tLápis");
	printf("\nCuaderno\t\tCaderno\n\n");
	system("pause");
	
}

//-----------------------------------------------------------------------------------------------------------------------//
