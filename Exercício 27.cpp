/* Exerc�cio 27: Fa�a um programa no qual sejam declaradas duas vari�veis do tipo int, uma vari�vel do tipo float e sejam lidos valores para elas. 
A seguir, mostre um resultado em cada linha para as opera��es:

  � A soma dos dois valores inteiros;
  � O dobro do primeiro valor inteiro somado com o
    dobro do segundo valor inteiro;
  � O valor float multiplicado por 6.5;
  � A soma dos tr�s valores. */

//------------------------------------------------Bibliotecas------------------------------------------------------------//

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

//------------------------------------------------Fun��es----------------------------------------------------------------//

main()
{
	
	setlocale(LC_ALL, "Portuguese");
	int var_int1, var_int2;
	float var_float;
	printf("Digite um valor (vari�vel int): ");
	scanf("%d", &var_int1);
	printf("Digite um valor (vari�vel int): ");
	scanf("%d", &var_int2);
	printf("Digite um valor (vari�vel float): ");
	scanf("%f", &var_float);
	printf("\nA soma dos dois valores inteiros: %d.", var_int1 + var_int2);
	printf("\nO dobro do primeiro valor inteiro somado com o dobro do segundo valor inteiro: %d.", (var_int1 * 2) + (var_int2 * 2));
	printf("\nO valor float multiplicado por 6.5: %.2f.", var_float * 6.5);
	printf("\nA soma dos tr�s valores: %.2f.\n\n", var_float + var_int1 + var_int2);
	system("pause");
	
}

//-----------------------------------------------------------------------------------------------------------------------//
