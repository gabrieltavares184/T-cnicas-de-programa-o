/* Exerc�cio 8: Fa�a um programa que leia seu n�mero de chamada. Apresente o dobro deste valor. */

//------------------------------------------------Bibliotecas------------------------------------------------------------//

#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

//------------------------------------------------Fun��es----------------------------------------------------------------//

main()
{

	setlocale(LC_ALL, "Portuguese");
	int num_chamada; //  Uma vari�vel � definida como um espa�o de mem�ria reservado para armazenar um tipo de dado que � identificado atrav�s de um nome. Esta vari�vel � do tipo int ---> Inteiros de -32768 a + 32767.
	printf("Digite o seu n�mero de chamada: ");
	scanf("%d", &num_chamada); // Esta fun��o permite ler dados (entrada-input) formatados atrav�s do teclado. A posi��o da mem�ria onde o valor acessado ser� armazenado � indicado pelo endere�o da vari�vel (operador &). %d = c�digo de formata��o, seu resultado de leitura �: n�mero inteiro na base decimal.
	int num_dobro = num_chamada * 2; // Como queremos obter e exibir o dobro de um determinado valor, criamos uma vari�vel e atribu�mos esta opera��o nela, usando a vari�vel que representa este determindado valor.
	printf("O dobro do valor do seu n�mero de chamada �: %d\n\n", num_dobro);
	system("pause");
	
}

//-----------------------------------------------------------------------------------------------------------------------//
