/* Exercício 8: Faça um programa que leia seu número de chamada. Apresente o dobro deste valor. */

//------------------------------------------------Bibliotecas------------------------------------------------------------//

#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

//------------------------------------------------Funções----------------------------------------------------------------//

main()
{

	setlocale(LC_ALL, "Portuguese");
	int num_chamada; //  Uma variável é definida como um espaço de memória reservado para armazenar um tipo de dado que é identificado através de um nome. Esta variável é do tipo int ---> Inteiros de -32768 a + 32767.
	printf("Digite o seu número de chamada: ");
	scanf("%d", &num_chamada); // Esta função permite ler dados (entrada-input) formatados através do teclado. A posição da memória onde o valor acessado será armazenado é indicado pelo endereço da variável (operador &). %d = código de formatação, seu resultado de leitura é: número inteiro na base decimal.
	int num_dobro = num_chamada * 2; // Como queremos obter e exibir o dobro de um determinado valor, criamos uma variável e atribuímos esta operação nela, usando a variável que representa este determindado valor.
	printf("O dobro do valor do seu número de chamada é: %d\n\n", num_dobro);
	system("pause");
	
}

//-----------------------------------------------------------------------------------------------------------------------//
