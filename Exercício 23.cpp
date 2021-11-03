/* Exercício 23: Faça um programa para calcular o custo de uma viagem de automóvel. Para isto receba o total de quilômetros percorridos e o valor
pago nos pedágios. Admita que o carro utilize o combustível etanol, que custa R$ 2.79 e o consumo do veículo é de 8.5 km/l. 
Apresente o custo total da viagem com duas casas decimais e o símbolo R$.

   Litros = Qtdekm/8.5;
   Total combustível = Litros * 2.79;
   Total viagem = Total combustível + total pedágios. */

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
	printf(" > Custo de uma viagem de automóvel <");
	textcolor(7);
	printf("\n\nDigite o total de quilômetros percorridos: ");
	float km;
	textcolor(15);
	scanf("%f", &km);
	textcolor(7);
	printf("Digite o valor pago nos pedágios: ");
	float valor_pedagios;
	textcolor(15);
	scanf("%f", &valor_pedagios);
	textcolor(7);
	float combustivel = (km / 8.5) * 2.79;
	float custo_total = valor_pedagios + combustivel;
	textcolor(15);
	printf("\n\nO custo total da viagem, foi de: R$ %.2f.\n\n", custo_total);
	system("pause");
	
}

//-----------------------------------------------------------------------------------------------------------------------//  
