/* Exerc�cio 28: Fa�a um programa que calcule o troco em uma compra. Para isto, insira o valor da compra, o valor de entrada e calcule o troco que o
usu�rio deve receber. */

//------------------------------------------------Bibliotecas------------------------------------------------------------//

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

//------------------------------------------------Fun��es----------------------------------------------------------------//

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
