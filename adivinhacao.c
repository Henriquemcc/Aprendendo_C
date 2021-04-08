#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    // Imprime o cabeçalho do nosso jogo
    printf("""\n          P  /_\\  P                              \n"
           "         /_\\_|_|_/_\\                             \n"
           "     n_n | ||. .|| | n_n         Bem vindo ao    \n"
           "     |_|_|nnnn nnnn|_|_|     Jogo de Adivinhação!\n"
           "    |\" \"  |  |_|  |\"  \" |                       \n"
           "    |_____| ' _ ' |_____|                        \n"
           "          \\__|_|__/\n\n""");

    // Definido o número secreto
    int segundos = time(0);
    srand(segundos);
    int numeroGrande = rand();
    int numeroSecreto = numeroGrande % 100;

    // Definindo a pontuação
    double pontos = 1000;

    // Definindo a tentativa
    int tentativas = 1;
    int numeroMaximoDeTentativas;
    int acertou = 0;

    // Definindo o nível de dificuldade
    int nivelDeDificuldade;
    printf("Qual o nível de dificuldade?\n");
    printf("(1) Fácil\n");
    printf("(2) Médio\n");
    printf("(3) Difícil\n");
    printf("Escolha: ");
    scanf("%d", &nivelDeDificuldade);

    // Definindo o número máximo de tentativas
    switch (nivelDeDificuldade) {
        case 1:
            numeroMaximoDeTentativas = 20;
            break;
        case 2:
            numeroMaximoDeTentativas = 15;
            break;
        default:
            numeroMaximoDeTentativas = 6;
            break;
    }

    // Recebendo os chutes do usuário
    for (int i = 1; i <= numeroMaximoDeTentativas; i++) {

        // Imprimindo o numero da tentativas
        printf("Tentativa %d de %d.\n", tentativas, numeroMaximoDeTentativas);

        // Obtendo o chute do usuário
        printf("Qual é o seu chute? ");
        int chute;
        scanf("%d", &chute);

        // Mostrando ao usuário o seu chute
        printf("Seu chute foi %d.\n", chute);

        // Imprimindo mensagem de erro caso o chute seja negativo
        if (chute < 0) {
            printf("Você não pode chutar números negativos.\n");
            continue;
        }

        // Verificando se o usuário acertou
        acertou = (chute == numeroSecreto);

        // Verificando se o chute é maior que o número secreto
        int maior = (chute > numeroSecreto);

        // Caso o usuário tenha acertado saindo do looping
        if (acertou)
            break;

            // Exibindo uma das mensagens de erro caso o usuário não tenha acertado.
        else if (maior)
            printf("Seu chute foi maior que o número secreto.\n");
        else
            printf("Seu chute foi menor que o número secreto.\n");


        // Acrescentando o valor das tentativas
        tentativas++;

        // Calculando a pontuação
        double pontosPerdidos = abs(chute - numeroSecreto) / (double) 2;
        pontos -= pontosPerdidos;
    }

    // Fim de jogo
    printf("Fim de jogo.\n");

    // Imprimindo mensagem de acerto
    if (acertou) {
        printf("""\n             OOOOOOOOOOO               \n"
               "         OOOOOOOOOOOOOOOOOOO           \n"
               "      OOOOOO  OOOOOOOOO  OOOOOO        \n"
               "    OOOOOO      OOOOO      OOOOOO     \n"
               "  OOOOOOOO  #   OOOOO  #   OOOOOOOO    \n"
               " OOOOOOOOOO    OOOOOOO    OOOOOOOOOO   \n"
               "OOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOO  \n"
               "OOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOO  \n"
               "OOOO  OOOOOOOOOOOOOOOOOOOOOOOOO  OOOO  \n"
               " OOOO  OOOOOOOOOOOOOOOOOOOOOOO  OOOO   \n"
               "  OOOO   OOOOOOOOOOOOOOOOOOOO  OOOO    \n"
               "    OOOOO   OOOOOOOOOOOOOOO   OOOO     \n"
               "      OOOOOO   OOOOOOOOO   OOOOOO      \n"
               "         OOOOOO         OOOOOO         \n"
               "             OOOOOOOOOOOO\n\n""");
        printf("Você acertou em %d tentativas!\n", tentativas);
        printf("Total de pontos: %.1f\n", pontos);
    } else
        printf("""\n       \\|/ ____ \\|/       \n"
               "        @~/ ,. \\~@         \n"
               "       /_( \\__/ )_\\       \n"
               "          \\__U_/\n\n""");

    // Imprimindo o número secreto
    printf("O número secreto era: %d\n", numeroSecreto);
}
