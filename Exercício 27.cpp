/* Exercício 27: Faça um programa no qual sejam declaradas duas variáveis do tipo int, uma variável do tipo float e sejam lidos valores para elas. 
A seguir, mostre um resultado em cada linha para as operações:

  • A soma dos dois valores inteiros;
  • O dobro do primeiro valor inteiro somado com o
    dobro do segundo valor inteiro;
  • O valor float multiplicado por 6.5;
  • A soma dos três valores. */

//------------------------------------------------Bibliotecas------------------------------------------------------------//

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

//------------------------------------------------Funções----------------------------------------------------------------//

main()
{
	
	setlocale(LC_ALL, "Portuguese");
	int var_int1, var_int2;
	float var_float;
	printf("Digite um valor (variável int): ");
	scanf("%d", &var_int1);
	printf("Digite um valor (variável int): ");
	scanf("%d", &var_int2);
	printf("Digite um valor (variável float): ");
	scanf("%f", &var_float);
	printf("\nA soma dos dois valores inteiros: %d.", var_int1 + var_int2);
	printf("\nO dobro do primeiro valor inteiro somado com o dobro do segundo valor inteiro: %d.", (var_int1 * 2) + (var_int2 * 2));
	printf("\nO valor float multiplicado por 6.5: %.2f.", var_float * 6.5);
	printf("\nA soma dos três valores: %.2f.\n\n", var_float + var_int1 + var_int2);
	system("pause");
	
}

//-----------------------------------------------------------------------------------------------------------------------//
