/* Exerc�cio 16: Fa�a um programa que leia uma medida em cent�metros e converta e mostre o correspondente em polegadas.

1 polegada = 2,54 cent�metros */

//------------------------------------------------Bibliotecas------------------------------------------------------------//

#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

//------------------------------------------------Fun��es----------------------------------------------------------------//

main()
{
	
	setlocale(LC_ALL, "Portuguese"); // Como foi utilizado o comando setlocale, com a finalidade de alterar a linguagem para portugu�s, devemos inserir os valores em ponto flutuante usando somente v�rgula.
	printf("Digite uma medida em cent�metros: ");
	float cm; // Esta vari�vel � do tipo float ---> ponto flutuante com 6 ou 7 d�gitos de precis�o.
	scanf("%f", &cm); // %f = C�digo de formata��o que possui como resultado de leitura, n�mero em ponto flutuante.
	float polegadas = cm / 2.54;
	printf("A medida informada, convertida em polegadas � igual a: %.2f.\n\n", polegadas);
	system("pause");
	
}

//-----------------------------------------------------------------------------------------------------------------------//
