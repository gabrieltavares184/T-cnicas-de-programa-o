/* Exercício 20: Faça um programa que leia o número total de eleitores de um município, o número de votos brancos, nulos e válidos (variáveis do tipo int).
Calcular e escrever o percentual que cada um representa em relação ao total de eleitores. */

//------------------------------------------------Bibliotecas------------------------------------------------------------//

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

//------------------------------------------------Funções----------------------------------------------------------------//

main()
{
	
	setlocale(LC_ALL, "Portuguese");
	int eleitores, votos_brancos, votos_validos, votos_nulos;
	printf("Digite o número de eleitores, de um determinado município: ");
	scanf("%d", &eleitores);
	printf("Digite o número de votos brancos: ");
	scanf("%d", &votos_brancos);
	printf("Digite o número de votos nulos: ");
	scanf("%d", &votos_nulos);
	printf("Digite o número de votos válidos: ");
	scanf("%d", &votos_validos);
	float porcentagem_brancos = float (votos_brancos) / float (eleitores) * 100; // O operador cast executa uma conversão forçada de tipo, convertendo uma expressão de um tipo para outro especificado dentro dos parênteses.
	float porcentagem_nulos = float (votos_nulos) / float (eleitores) * 100;
	float porcentagem_validos = float (votos_validos) / float (eleitores) * 100;
	printf("\n\nVotos brancos: %.1f %%.", porcentagem_brancos);
	printf("\nVotos nulos: %.1f %%.", porcentagem_nulos);
	printf("\nVotos válidos: %.1f %%.\n\n", porcentagem_validos);
	system("pause");
	
}

//-----------------------------------------------------------------------------------------------------------------------//

