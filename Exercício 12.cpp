/* Exerc�cio 12: Fa�a um programa que tenha como entrada (fun��o scanf) a largura e a altura de um c�modo em vari�veis do tipo int. 
Calcule e mostre a �rea deste c�modo sabendo que o c�lculo a ser realizado � largura multiplicado pela altura. */

//------------------------------------------------Bibliotecas------------------------------------------------------------//

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <conio.c>

//------------------------------------------------Fun��es----------------------------------------------------------------//

main()
{
	
	setlocale(LC_ALL, "Portuguese");
	textcolor(15);
	printf("Digite a largura de um determinado c�modo (em metros): ");
	int largura;
	textcolor(10);
	scanf("%d", &largura);
	textcolor(15);
	printf("Digite a altura de um determinado c�modo (em metros): ");
	int altura;
	textcolor(10);
	scanf("%d", &altura);
	int area = largura * altura; // Para calcularmos a �rea, foi declarada uma nova vari�vel, que foi atribu�da ao resultado entre a multiplica��o da largura e altura.
	textcolor(15);
	printf("\nA �rea do c�modo � de: %d metros^2\n\n", area);
	system("pause");
	
}

//-----------------------------------------------------------------------------------------------------------------------//
