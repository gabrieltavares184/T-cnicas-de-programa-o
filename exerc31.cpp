/* Exercício 31: Elabore um programa em que sejam declaradas 2 variáveis do tipo float e a elas atribuídos as notas de 2 provas (os valores deverão
estar no intervalo de 0 a 10). Calcule e mostre a média com 1 casa decimal. */

//------------------------------------------------Bibliotecas------------------------------------------------------------//

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

//------------------------------------------------Funções----------------------------------------------------------------//

main()
{
	
	setlocale(LC_ALL, "Portuguese");
	float nota1 = 7.5;
	float nota2 = 8.7;
	printf("Média: %.1f.\n\n", (nota1 + nota2) / 2);
	system("pause");
	
}

//-----------------------------------------------------------------------------------------------------------------------//
