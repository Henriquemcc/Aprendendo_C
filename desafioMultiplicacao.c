// Escreva um programa que peça para o usuário digitar duas variáveis inteiras (x e y) e imprima o resultado da multiplicação entre essas duas variáveis.

#include <stdio.h>

int main()
{
	printf("Usuário, digite duas variáveis inteiras que deseja multiplicar:\n");

	// Lendo variável X
	printf("Variável X: ");
	int x;
	scanf("%d", &x);

	// Lendo variável Y
	printf("Variável Y: ");
	int y;
	scanf("%d", &y);

	// Multiplicando as variáveis
	int resultadoMultiplicacao = x * y;
	printf("O resultado da multiplicação é %d.\n", resultadoMultiplicacao);
}