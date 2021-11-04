/* Exercício 1: Faça o programa correspondente à execução acima utilizando vários printf’s. */

//------------------------------------------------Bibliotecas------------------------------------------------------------//

#include <stdio.h> // As bibliotecas são fundamentais para o desenvolvimento de programas em C. Caracterizadas como um conjunto de rotinas padronizadas da linguagem, as bibliotecas contém funções de entrada/saída e processamento de informações. Stdio.h é um cabeçalho da biblioteca padrão do C. Seu nome vem da expressão inglesa standard input-output header, que significa "cabeçalho padrão de entrada/saída". 
#include <locale.h> // A linguagem C utiliza o arquivo de cabeçalho locale.h para implementar a localização de programas. Chamamos de “localizar” um programa quando fazemos a adaptação deste às características de um determinado idioma ou de uma região.
#include <conio.c> // A biblioteca conio.c é a modificação da biblioteca conio.h para poder disponibilizar algumas funcionalidades no programa Dev C/C++.
#include <stdlib.h> // Stdlib.h é um arquivo cabeçalho da biblioteca de propósito geral padrão da linguagem de programação C. Ela possui funções envolvendo alocação de memória, controle de processos e conversões.

//------------------------------------------------Funções----------------------------------------------------------------//

main() // Nome ou local de início do programa. O início lógico é identificado por essa função, independentemente de sua posição física.
{
	
	setlocale(LC_ALL, "Portuguese"); // A função setlocale é utilizada para alterar a linguagem utilizada, consequentemente seus caracteres.
	textcolor(7); // A função textcolor é utilizada para alterar a cor dos textos. As cores são representadas por números que devem ser indicados nos parênteses.
	printf("If\t\tSe"); // A função printf é usada para apresentar informações no vídeo.
	printf("\nWhile\t\tEnquanto"); // \t é uma sequência de escape que representa o caractere de tab horizontal.
	printf("\nFor\t\tPara"); // \n é uma sequência de escape que representa o caractere de mudança de linha.
	printf("\nBefore\t\tAntes\n\n");
	system("pause"); // Essa função é responsável por parar a execução do programa até que o usuário pressione uma tecla.
	
}

//-----------------------------------------------------------------------------------------------------------------------//
