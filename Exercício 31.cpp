/* Exerc�cio 31: Elabore um programa em que sejam declaradas 2 vari�veis do tipo float e a elas atribu�dos as notas de 2 provas (os valores dever�o
estar no intervalo de 0 a 10). Calcule e mostre a m�dia com 1 casa decimal. */

//------------------------------------------------Bibliotecas------------------------------------------------------------//

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

//------------------------------------------------Fun��es----------------------------------------------------------------//

main()
{
	
	setlocale(LC_ALL, "Portuguese");
	float nota1 = 7.5;
	float nota2 = 8.7;
	printf("M�dia: %.1f.\n\n", (nota1 + nota2) / 2);
	system("pause");
	
}

//-----------------------------------------------------------------------------------------------------------------------//
