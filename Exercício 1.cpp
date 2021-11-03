/* Exerc�cio 1: Fa�a o programa correspondente � execu��o acima utilizando v�rios printf�s. */

//------------------------------------------------Bibliotecas------------------------------------------------------------//

#include <stdio.h> // As bibliotecas s�o fundamentais para o desenvolvimento de programas em C. Caracterizadas como um conjunto de rotinas padronizadas da linguagem, as bibliotecas cont�m fun��es de entrada/sa�da e processamento de informa��es. Stdio.h � um cabe�alho da biblioteca padr�o do C. Seu nome vem da express�o inglesa standard input-output header, que significa "cabe�alho padr�o de entrada/sa�da". 
#include <locale.h> // A linguagem C utiliza o arquivo de cabe�alho locale.h para implementar a localiza��o de programas. Chamamos de �localizar� um programa quando fazemos a adapta��o deste �s caracter�sticas de um determinado idioma ou de uma regi�o.
#include <conio.c> // A biblioteca conio.c � a modifica��o da biblioteca conio.h para poder disponibilizar algumas funcionalidades no programa Dev C/C++.
#include <stdlib.h> // Stdlib.h � um arquivo cabe�alho da biblioteca de prop�sito geral padr�o da linguagem de programa��o C. Ela possui fun��es envolvendo aloca��o de mem�ria, controle de processos e convers�es.

//------------------------------------------------Fun��es----------------------------------------------------------------//

main() // Nome ou local de in�cio do programa. O in�cio l�gico � identificado por essa fun��o, independentemente de sua posi��o f�sica.
{
	
	setlocale(LC_ALL, "Portuguese"); // A fun��o setlocale � utilizada para alterar a linguagem utilizada, consequentemente seus caracteres.
	textcolor(7); // A fun��o textcolor � utilizada para alterar a cor dos textos. As cores s�o representadas por n�meros que devem ser indicados nos par�nteses.
	printf("If\t\tSe"); // A fun��o printf � usada para apresentar informa��es no v�deo.
	printf("\nWhile\t\tEnquanto"); // \t � uma sequ�ncia de escape que representa o caractere de tab horizontal.
	printf("\nFor\t\tPara"); // \n � uma sequ�ncia de escape que representa o caractere de mudan�a de linha.
	printf("\nBefore\t\tAntes\n\n");
	system("pause"); // Essa fun��o � respons�vel por parar a execu��o do programa at� que o usu�rio pressione uma tecla.
	
}

//-----------------------------------------------------------------------------------------------------------------------//
