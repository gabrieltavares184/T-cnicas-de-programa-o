/* Exerc�cio 17: Fa�a um programa que leia um valor em reais, calcule e mostre a quantidade em d�lares que esta quantia em reais representa. */

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
	printf("-> Conversor de reais para d�lar <-");
	textcolor(7);
	printf("\n\nReal brasileiro: ");
	float reais;
	scanf("%f", &reais);
	float dolar = reais / 4.36;
	printf("D�lar americano: %.2f $\n\n", dolar);
	system("pause");
	
}

//-----------------------------------------------------------------------------------------------------------------------//
