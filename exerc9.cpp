/* Exercício 9: Faça um programa que leia um valor inteiro. Calcule e mostre o quadrado e o cubo deste número. */

//------------------------------------------------Bibliotecas------------------------------------------------------------//

#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

//------------------------------------------------Funções----------------------------------------------------------------//

main()
{
	
	setlocale(LC_ALL, "Portuguese");
	printf("Digite um valor inteiro: ");
	int num;
	scanf("%d", &num);
	int num_quadrado = num * num; // Para obtermos o quadrado do valor digitado pelo usuário, basta criarmos uma nova variável atribuindo seu valor à multiplicação de num por num.
	int num_cubo = num * num * num; // Para obtermos o cubo do valor digitado pelo usuário, basta criarmos uma nova variável atribuindo seu valor à multiplicação de num * num * num.
	printf("O quadrado do valor digitado é: %d", num_quadrado);
	printf("\nO cubo do valor digitado é: %d\n\n", num_cubo);
	system("pause");
	
}

//-----------------------------------------------------------------------------------------------------------------------//
