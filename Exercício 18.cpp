/* Exerc�cio 18: Fa�a um programa que leia uma temperatura em Celsius, calcule e mostre o correspondente em Fahrenheit.

   0� Celsius = 32� Fahrenheit */

//------------------------------------------------Bibliotecas------------------------------------------------------------//

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

//------------------------------------------------Fun��es----------------------------------------------------------------//

main()
{

	setlocale(LC_ALL, "Portuguese");
	printf("Digite a temperatura local (em Celsius): ");
	float celsius;
	scanf("%f", &celsius);
	float fahrenheit = (celsius * 9 / 5) + 32;
	printf("O valor informado, convertido em fahrenheit, � igual a: %.1f �F.\n\n", fahrenheit);
	system("pause");
			 
}

//-----------------------------------------------------------------------------------------------------------------------//			 
