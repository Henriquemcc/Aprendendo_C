#include <stdio.h>

int notas() {

    // Declarando um array de inteiros
    int notas[5];

    // Atribuindo na primeira posição do array
    notas[0] = 10;

    // Atribuindo na segunda posição do array
    notas[1] = 5;

    // Atribuindo na terceira posição do array
    notas[2] = 8;

    // Atribuindo na quarta posição do array
    notas[3] = 6;

    // Atribuindo na quinta posição do array
    notas[4] = 7;

    // Imprimindo as notas
    for (size_t i = 0; i < 5; i++)
    {
        printf("%dª nota: %d\n", i + 1, notas[i]);
    }   

}

int main() {

    notas();

}