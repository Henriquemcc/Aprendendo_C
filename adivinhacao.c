#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    // Imprime o cabeçalho do nosso jogo
    printf("**************************************\n");
    printf("Bem vindo ao nosso jogo de adivinhação\n");
    printf("**************************************\n");

    // Definido o número secreto
    int segundos = time(0);
    srand(segundos);
    int numeroGrande = rand();
    int numeroSecreto = numeroGrande % 100;

    // Definindo a pontuação
    double pontos = 1000;

    // Recebendo os chutes do usuário
    int tentativa = 0;
    while (1) {
        // Imprimindo a tentativa
        printf("Tentativa %d.\n", tentativa + 1);

        // Obtendo o chute do usuário
        printf("Qual é o seu chute? ");
        int chute;
        scanf("%d", &chute);

        // Mostrando ao usuário o seu chute
        printf("Seu chute foi %d.\n", chute);

        if (chute < 0) {
            printf("Você não pode chutar números negativos.\n");
            continue;
        }

        // Mostrando se o usuário acertou
        int acertou = (chute == numeroSecreto);
        int maior = (chute > numeroSecreto);

        if (acertou) {
            printf("Parabéns! Você acertou!\n");
            break;
        } else if (maior) {
            printf("Seu chute foi maior que o número secreto.\n");
        } else {
            printf("Seu chute foi menor que o número secreto.\n");
        }

        tentativa++;

        double pontosPerdidos = abs(chute - numeroSecreto) / (double) 2;
        pontos -= pontosPerdidos;
    }

    // Fim de jogo
    printf("Fim de jogo.\n");
    printf("Foram feitas %d tentativas.\n", tentativa + 1);
    printf("Total de pontos: %.1f\n", pontos);
}
