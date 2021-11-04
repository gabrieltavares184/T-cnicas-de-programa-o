/* Exercício 28: Faça um programa que calcule o troco em uma compra. Para isto, insira o valor da compra, o valor de entrada e calcule o troco que o
usuário deve receber. */

//------------------------------------------------Bibliotecas------------------------------------------------------------//

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

//------------------------------------------------Funções----------------------------------------------------------------//

main()
{
	
	setlocale(LC_ALL, "Portuguese");
	printf("Digite o valor da compra: ");
	float valor_compra;
	scanf("%f", &valor_compra);
	printf("Digite o valor de entrada: ");
	float valor_entrada;
	scanf("%f", &valor_entrada);
	float troco = valor_entrada - valor_compra;
	printf("\nTroco: R$ %.2f.\n\n", troco);
	system("pause");
	
}

//-----------------------------------------------------------------------------------------------------------------------//
