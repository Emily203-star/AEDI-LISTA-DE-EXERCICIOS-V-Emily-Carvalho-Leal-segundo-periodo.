#include <stdio.h>

int mdc(int a, int b) {
    if (b == 0) {
        return a;
    }
    return mdc(b, a % b);
}

int main() {
    int num1, num2;

    printf("Digite dois números inteiros positivos: ");
    scanf("%d %d", &num1, &num2);

    int resultado = mdc(num1, num2);
    printf("O Mínimo Comum Divisor de %d e %d é: %d\n", num1, num2, resultado);

    return 0;
}