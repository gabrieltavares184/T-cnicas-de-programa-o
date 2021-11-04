/* Exercício 29: Elabore um programa que declare uma variável do tipo float que indique uma temperatura em graus Celsius. Transforme-a em
Farenheit e Kelvin e apresente os três valores, como no exemplo:
	
	- Temperatura em Celsius: 100
	- Temperatura em Fahrenheit: 212
	- Temperatura em Kelvin: 373.15 */

//------------------------------------------------Bibliotecas------------------------------------------------------------//

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

//------------------------------------------------Funções----------------------------------------------------------------//

main()
{
	
	setlocale(LC_ALL, "Portuguese");
	float celsius = 100;
	printf("Temperatura em Celsius: %.2f °C.", celsius);
	float fahrenheit = (celsius * 9 / 5) + 32;
	printf("\nTemperatura em Fahrenheit: %.2f °F.", fahrenheit);
	float kelvin = celsius + 273.15;
	printf("\nTemperatura em Kelvin: %.2f K.\n\n", kelvin);
	system("pause");
	
}

//-----------------------------------------------------------------------------------------------------------------------//
