/* Exerc�cio 13: Fa�a um programa que leia tr�s valores inteiros, calcule e apresente a m�dia destes valores lidos.

MD = (num1+num2+num3)/3 */

//------------------------------------------------Bibliotecas------------------------------------------------------------//

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <conio.c>

//------------------------------------------------Fun��es----------------------------------------------------------------//

main()
{
	
	setlocale(LC_ALL, "Portuguese");
    textcolor(10);
    printf("M�DIA\n\n");
    textcolor(7);
	int valor1, valor2, valor3;
	printf("Digite o primeiro valor: ");
	scanf("%d", &valor1);
	printf("Digite o segundo valor: ");
	scanf("%d", &valor2);
	printf("Digite o terceiro valor: ");
	scanf("%d", &valor3);
	int media = (valor1 + valor2 + valor3) / 3; // Para calcularmos a m�dia dos valores digitados, foi necess�rio somar os tr�s valores, colocando o par�nteses para que tenha a prioridade da express�o e deposi dividir pelo n�mero de elementos.
	printf("\nA m�dia dos valores digitados � igual a: %d\n\n", media);
	system("pause");
		
}

//-----------------------------------------------------------------------------------------------------------------------//
