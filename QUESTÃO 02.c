#include <stdio.h>
#include <stdlib.h>

int* criarPA(int quantidade, int valorInicial, int razao) {
    int* array = (int*) malloc(quantidade * sizeof(int));

    for (int i = 0; i < quantidade; i++) {
        array[i] = valorInicial + i * razao;
    }

    return array;
}

void imprimirArray(int* array, int quantidade) {
    for (int i = 0; i < quantidade; i++) {
        printf("%d ", array[i]);
    }
    printf("\n");
}

int main() {
    int quantidade, valorInicial, razao;

    printf("Digite a quantidade de elementos: ");
    scanf("%d", &quantidade);

    printf("Digite o valor inicial da PA: ");
    scanf("%d", &valorInicial);

    printf("Digite a razão da PA: ");
    scanf("%d", &razao);

    int* paArray = criarPA(quantidade, valorInicial, razao);
    printf("Progressão Aritmética: ");
    imprimirArray(paArray, quantidade);

    free(paArray);
    return 0;
}