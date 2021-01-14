#include <stdio.h>

int main()
{
	// Imprime o cabeçalho do nosso jogo
	printf("**************************************\n");
	printf("Bem vindo ao nosso jogo de adivinhação\n");
	printf("**************************************\n");

	int numeroSecreto = 42;

	int chute;

	printf("Qual é o seu chute? ");
	scanf("%d", &chute);
	printf("Seu chute foi %d\n", chute);

	int acertou = (chute == numeroSecreto);
	printf("acertou = %d\n", acertou);

	if (acertou)
	{
		printf("Parabéns! Você acertou!\n");
	}
	else
	{
		int maior = (chute > numeroSecreto);
		if (maior)
		{
			printf("Seu chute foi maior que o número secreto\n");
		}
		else
		{
			printf("Seu chute foi menor que o número secreto\n");
		}
	}
}
