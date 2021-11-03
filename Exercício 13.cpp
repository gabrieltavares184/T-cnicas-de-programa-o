/* Exercício 13: Faça um programa que leia três valores inteiros, calcule e apresente a média destes valores lidos.

MD = (num1+num2+num3)/3 */

//------------------------------------------------Bibliotecas------------------------------------------------------------//

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <conio.c>

//------------------------------------------------Funções----------------------------------------------------------------//

main()
{
	
	setlocale(LC_ALL, "Portuguese");
    textcolor(10);
    printf("MÉDIA\n\n");
    textcolor(7);
	int valor1, valor2, valor3;
	printf("Digite o primeiro valor: ");
	scanf("%d", &valor1);
	printf("Digite o segundo valor: ");
	scanf("%d", &valor2);
	printf("Digite o terceiro valor: ");
	scanf("%d", &valor3);
	int media = (valor1 + valor2 + valor3) / 3; // Para calcularmos a média dos valores digitados, foi necessário somar os três valores, colocando o parênteses para que tenha a prioridade da expressão e deposi dividir pelo número de elementos.
	printf("\nA média dos valores digitados é igual a: %d\n\n", media);
	system("pause");
		
}

//-----------------------------------------------------------------------------------------------------------------------//
