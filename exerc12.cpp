/* Exercício 12: Faça um programa que tenha como entrada (função scanf) a largura e a altura de um cômodo em variáveis do tipo int. 
Calcule e mostre a área deste cômodo sabendo que o cálculo a ser realizado é largura multiplicado pela altura. */

//------------------------------------------------Bibliotecas------------------------------------------------------------//

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <conio.c>

//------------------------------------------------Funções----------------------------------------------------------------//

main()
{
	
	setlocale(LC_ALL, "Portuguese");
	textcolor(15);
	printf("Digite a largura de um determinado cômodo (em metros): ");
	int largura;
	textcolor(10);
	scanf("%d", &largura);
	textcolor(15);
	printf("Digite a altura de um determinado cômodo (em metros): ");
	int altura;
	textcolor(10);
	scanf("%d", &altura);
	int area = largura * altura; // Para calcularmos a área, foi declarada uma nova variável, que foi atribuída ao resultado entre a multiplicação da largura e altura.
	textcolor(15);
	printf("\nA área do cômodo é de: %d metros^2\n\n", area);
	system("pause");
	
}

//-----------------------------------------------------------------------------------------------------------------------//
