/* Exerc�cio 20: Fa�a um programa que leia o n�mero total de eleitores de um munic�pio, o n�mero de votos brancos, nulos e v�lidos (vari�veis do tipo int).
Calcular e escrever o percentual que cada um representa em rela��o ao total de eleitores. */

//------------------------------------------------Bibliotecas------------------------------------------------------------//

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

//------------------------------------------------Fun��es----------------------------------------------------------------//

main()
{
	
	setlocale(LC_ALL, "Portuguese");
	int eleitores, votos_brancos, votos_validos, votos_nulos;
	printf("Digite o n�mero de eleitores, de um determinado munic�pio: ");
	scanf("%d", &eleitores);
	printf("Digite o n�mero de votos brancos: ");
	scanf("%d", &votos_brancos);
	printf("Digite o n�mero de votos nulos: ");
	scanf("%d", &votos_nulos);
	printf("Digite o n�mero de votos v�lidos: ");
	scanf("%d", &votos_validos);
	float porcentagem_brancos = float (votos_brancos) / float (eleitores) * 100; // O operador cast executa uma convers�o for�ada de tipo, convertendo uma express�o de um tipo para outro especificado dentro dos par�nteses.
	float porcentagem_nulos = float (votos_nulos) / float (eleitores) * 100;
	float porcentagem_validos = float (votos_validos) / float (eleitores) * 100;
	printf("\n\nVotos brancos: %.1f %%.", porcentagem_brancos);
	printf("\nVotos nulos: %.1f %%.", porcentagem_nulos);
	printf("\nVotos v�lidos: %.1f %%.\n\n", porcentagem_validos);
	system("pause");
	
}

//-----------------------------------------------------------------------------------------------------------------------//

