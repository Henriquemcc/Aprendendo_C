#include <stdio.h>
#include <stdbool.h>

int while1() {

    int numero = 0;

    while(numero <= 100) {
        printf("Digite um numero maior que 100: ");
        scanf("%d", &numero);
    }

    printf("Numero: %d\n", numero);

}

int doWhile1() {

    int numero;

    do {
        printf("Digite um numero maior que 100: ");
        scanf("%d", &numero);
    } while(numero <= 100);

    printf("Numero: %d\n", numero);

}

int while2() {

    int numero = 0;

    while(numero <= 100 || numero >= 500) {
        printf("Digite um numero maior que 100 e menor do que 500: ");
        scanf("%d", &numero);
    }

    printf("Numero: %d\n", numero);

}

int doWhile2() {

    int numero;

    do {
        printf("Digite um numero maior que 100 e menor do que 500: ");
        scanf("%d", &numero);
    } while(numero <= 100 || numero >= 500);

    printf("Numero: %d\n", numero);

}

int main() {

    while1();
    doWhile1();
    while2();
    doWhile2();
}