/* Exercício 19: Escreva um programa que leia o total de horas que uma pessoa utiliza o whatsapp durante um dia. Calcule e mostre a porcentagem
de horas neste aplicativo.

   1dia ---> 24h ---> 100% */

//------------------------------------------------Bibliotecas------------------------------------------------------------//

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

//------------------------------------------------Funções----------------------------------------------------------------//

main()
{
	
	setlocale(LC_ALL, "Portuguese");
	printf("Digite o total de horas utilizadas por você no Whatsapp, durante um dia: ");
	float horas;
	scanf("%f", &horas);
	float porcentagem = horas / 24 * 100;
	printf("Você utilizou o Whatsapp em: %.1f %% do seu dia.\n\n", porcentagem); // %%: É um código de formatação que apresenta o caractere %.
	system("pause");
	
}

//-----------------------------------------------------------------------------------------------------------------------//   
