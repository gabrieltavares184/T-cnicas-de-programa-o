/* Exerc�cio 9: Fa�a um programa que leia um valor inteiro. Calcule e mostre o quadrado e o cubo deste n�mero. */

//------------------------------------------------Bibliotecas------------------------------------------------------------//

#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

//------------------------------------------------Fun��es----------------------------------------------------------------//

main()
{
	
	setlocale(LC_ALL, "Portuguese");
	printf("Digite um valor inteiro: ");
	int num;
	scanf("%d", &num);
	int num_quadrado = num * num; // Para obtermos o quadrado do valor digitado pelo usu�rio, basta criarmos uma nova vari�vel atribuindo seu valor � multiplica��o de num por num.
	int num_cubo = num * num * num; // Para obtermos o cubo do valor digitado pelo usu�rio, basta criarmos uma nova vari�vel atribuindo seu valor � multiplica��o de num * num * num.
	printf("O quadrado do valor digitado �: %d", num_quadrado);
	printf("\nO cubo do valor digitado �: %d\n\n", num_cubo);
	system("pause");
	
}

//-----------------------------------------------------------------------------------------------------------------------//
