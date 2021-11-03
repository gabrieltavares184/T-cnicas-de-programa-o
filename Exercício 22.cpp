/* Exercício 22: Elabore um programa que receba (leia com scanf) o valor do raio de uma esfera (tipo float). Calcule e apresente o volume e a área da
esfera, baseando-se nas fórmulas dadas. Utilize para pi o valor constante de 3.14. Apresente o resultado com 1 casa decimal (%.1f). */

//------------------------------------------------Bibliotecas------------------------------------------------------------//

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

//------------------------------------------------Funções----------------------------------------------------------------//

main()
{
	
	setlocale(LC_ALL, "Portuguese");
	printf("Digite o valor do raio de uma esfera: ");
	float raio;
	scanf("%f", &raio);
	float volume =  (4 / 3) * 3.14 * (raio * raio * raio);
	float area = 4 * 3.14 * (raio * raio);
	printf("\nVolume: %.1f.", volume);
	printf("\nÁrea: %.1f.\n\n", area);
	system("pause");
		
}

//-----------------------------------------------------------------------------------------------------------------------//
