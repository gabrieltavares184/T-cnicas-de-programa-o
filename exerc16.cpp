/* Exercício 16: Faça um programa que leia uma medida em centímetros e converta e mostre o correspondente em polegadas.

1 polegada = 2,54 centímetros */

//------------------------------------------------Bibliotecas------------------------------------------------------------//

#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

//------------------------------------------------Funções----------------------------------------------------------------//

main()
{
	
	setlocale(LC_ALL, "Portuguese"); // Como foi utilizado o comando setlocale, com a finalidade de alterar a linguagem para português, devemos inserir os valores em ponto flutuante usando somente vírgula.
	printf("Digite uma medida em centímetros: ");
	float cm; // Esta variável é do tipo float ---> ponto flutuante com 6 ou 7 dígitos de precisão.
	scanf("%f", &cm); // %f = Código de formatação que possui como resultado de leitura, número em ponto flutuante.
	float polegadas = cm / 2.54;
	printf("A medida informada, convertida em polegadas é igual a: %.2f.\n\n", polegadas);
	system("pause");
	
}

//-----------------------------------------------------------------------------------------------------------------------//
