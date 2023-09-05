#include <stdio.h>
#include <stdbool.h>

// Função para verificar se D é divisor de N
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

// Função para contar a quantidade de divisores de um número M
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
    int numero;
    printf("Digite um número inteiro: ");
    scanf("%d", &numero);

    int quantidadeDivisores = contarDivisores(numero);

    printf("%d possui %d divisores.\n", numero, quantidadeDivisores);

    return 0;
}
