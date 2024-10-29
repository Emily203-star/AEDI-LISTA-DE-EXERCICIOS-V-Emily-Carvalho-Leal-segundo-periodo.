#include <stdio.h>

int buscaBinariaRecursiva(int array[], int inicio, int fim, int elemento) {
    if (inicio > fim) {
        return -1;
    }

    int meio = inicio + (fim - inicio) / 2;

    if (array[meio] == elemento) {
        return meio;
    } else if (array[meio] > elemento) {
        return buscaBinariaRecursiva(array, inicio, meio - 1, elemento);
    } else {
        return buscaBinariaRecursiva(array, meio + 1, fim, elemento);
    }
}

int main() {
    int array[] = {1, 3, 5, 7, 9, 11, 13, 15};
    int tamanho = sizeof(array) / sizeof(array[0]);
    int elemento;

    printf("Digite o elemento que deseja buscar: ");
    scanf("%d", &elemento);

    int resultado = buscaBinariaRecursiva(array, 0, tamanho - 1, elemento);

    if (resultado != -1) {
        printf("Elemento encontrado no índice %d\n", resultado);
    } else {
        printf("Elemento não encontrado\n");
    }

    return 0;
}