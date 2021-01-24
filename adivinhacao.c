#include <stdio.h>

#define NUMERO_MAXIMO_TENTATIVAS 5

int main()
{
	// Imprime o cabeçalho do nosso jogo
	printf("**************************************\n");
	printf("Bem vindo ao nosso jogo de adivinhação\n");
	printf("**************************************\n");

	// Definido o número secreto
	int numeroSecreto = 42;

	// Recebendo os chutes do usuário
	for (int i = 0; i < NUMERO_MAXIMO_TENTATIVAS; i++)
	{
		// Imprimindo a tentativa
		printf("Tentativa %d de %d\n", i + 1, NUMERO_MAXIMO_TENTATIVAS);

		// Obtendo o chute do usuário
		printf("Qual é o seu chute? ");
		int chute;
		scanf("%d", &chute);

		// Mostrando ao usuário o seu chute
		printf("Seu chute foi %d\n", chute);

		if (chute < 0)
		{
			printf("Você não pode chutar números negativos.\n");
			i--;
			continue;
		}

		// Mostrando se o usuário acertou
		int acertou = (chute == numeroSecreto);
		int maior = (chute > numeroSecreto);

		if (acertou)
		{
			printf("Parabéns! Você acertou!\n");
			break;
		}
		else if (maior)
		{
			printf("Seu chute foi maior que o número secreto\n");
		}
		else
		{	
			printf("Seu chute foi menor que o número secreto\n");
		}
	}

	// Fim de jogo
	printf("Fim de jogo\n");
}
