#include <stdio.h>
#include <stdbool.h>

bool verificaDivisor(int N, int D) {
    if (D == 0) {
        return false;
    }
    
    if (N % D == 0) {
        return true;
    } else {
        return false;
    }
}

int contarDivisores(int M) {
    int contador = 0;

    for (int i = 1; i <= M; i++) {
        if (verificaDivisor(M, i)) {
            contador++;
        }
    }

    return contador;
}

int main() {
    int M;
    printf("Digite um número inteiro M: ");
    scanf("%d", &M);

    int quantidadeDivisores = contarDivisores(M);

    printf("%d possui %d divisores.\n", M, quantidadeDivisores);

    return 0;
}
