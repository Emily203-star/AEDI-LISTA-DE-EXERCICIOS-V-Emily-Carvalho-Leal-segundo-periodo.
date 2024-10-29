#include <stdio.h>

int somaRecursiva(int n) {
    if (n == 1) {
        return 1;
    }
    return n + somaRecursiva(n - 1);
}

int main() {
    int n;
    printf("Digite um número inteiro positivo: ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("Por favor, insira um número inteiro positivo.\n");
    } else {
        int resultado = somaRecursiva(n);
        printf("A soma de todos os números de 1 até %d é: %d\n", n, resultado);
    }

    return 0;
}