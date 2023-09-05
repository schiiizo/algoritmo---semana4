#include <stdio.h>

int primo(int num) {
    if (num <= 1) {
        return 0;
    }

    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) {
            return 0;
        }
    }

    return 1;
}

int main() {
    int N1, N2;

    printf("Digite o primeiro número inteiro (N1): ");
    scanf("%d", &N1);

    printf("Digite o segundo número inteiro (N2): ");
    scanf("%d", &N2);

    printf("Números primos entre %d e %d:\n", N1, N2);

    for (int i = N1; i <= N2; i++) {
        if (primo(i)) {
            printf("%d\n", i);
        }
    }

    return 0;
}
