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

int melancia1() {

    char palavra[9];

    palavra[0] = 'M';
    palavra[1] = 'E';
    palavra[2] = 'L';
    palavra[3] = 'A';
    palavra[4] = 'N';
    palavra[5] = 'C';
    palavra[6] = 'I';
    palavra[7] = 'A';

    printf("%c%c%c%c%c%c%c%c\n", palavra[0], palavra[1], palavra[2], palavra[3], palavra[4], palavra[5], palavra[6], palavra[7]);

}

int melancia2() {

    char palavra[9];

    sprintf(palavra, "MELANCIA");

    printf("%s\n", palavra);

}

int melancia3() {

    char palavra[9];

    palavra[0] = 'M';
    palavra[1] = 'E';
    palavra[2] = 'L';
    palavra[3] = 'A';
    palavra[4] = 'N';
    palavra[5] = 'C';
    palavra[6] = 'I';
    palavra[7] = 'A';
    palavra[8] = '\0';

    printf("%s\n", palavra);

}

int paralelepipedo() {

    char palavra[15];

    sprintf(palavra, "PARALELEPIPEDO");

    printf("%s\n", palavra);
}

int pneumoultramicroscopicossilicovulcanoconiotico() {
    
    char palavra[47];

    sprintf(palavra, "pneumoultramicroscopicossilicovulcanoconiotico");

    printf("%s\n", palavra);
}

int main() {

    notas();
    melancia1();
    melancia2();
    melancia3();
    paralelepipedo();
    pneumoultramicroscopicossilicovulcanoconiotico();

}