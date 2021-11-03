/* Exerc�cio 23: Fa�a um programa para calcular o custo de uma viagem de autom�vel. Para isto receba o total de quil�metros percorridos e o valor
pago nos ped�gios. Admita que o carro utilize o combust�vel etanol, que custa R$ 2.79 e o consumo do ve�culo � de 8.5 km/l. 
Apresente o custo total da viagem com duas casas decimais e o s�mbolo R$.

   Litros = Qtdekm/8.5;
   Total combust�vel = Litros * 2.79;
   Total viagem = Total combust�vel + total ped�gios. */

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
	printf(" > Custo de uma viagem de autom�vel <");
	textcolor(7);
	printf("\n\nDigite o total de quil�metros percorridos: ");
	float km;
	textcolor(15);
	scanf("%f", &km);
	textcolor(7);
	printf("Digite o valor pago nos ped�gios: ");
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
