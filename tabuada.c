#include <stdio.h>

int main()
{
    printf("Tabuada\n");
    printf("Digite o multiplicando: ");
    int multiplicando;
    scanf("%d", &multiplicando);

    for(int multiplicador=0; multiplicador <= 10; multiplicador++)
    {
        int produto = multiplicando * multiplicador;
        printf("%d x %d = %d\n", multiplicando, multiplicador, produto);
    }
}