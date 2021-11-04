/* Exercício 18: Faça um programa que leia uma temperatura em Celsius, calcule e mostre o correspondente em Fahrenheit.

   0º Celsius = 32º Fahrenheit */

//------------------------------------------------Bibliotecas------------------------------------------------------------//

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

//------------------------------------------------Funções----------------------------------------------------------------//

main()
{

	setlocale(LC_ALL, "Portuguese");
	printf("Digite a temperatura local (em Celsius): ");
	float celsius;
	scanf("%f", &celsius);
	float fahrenheit = (celsius * 9 / 5) + 32;
	printf("O valor informado, convertido em fahrenheit, é igual a: %.1f °F.\n\n", fahrenheit);
	system("pause");
			 
}

//-----------------------------------------------------------------------------------------------------------------------//			 
