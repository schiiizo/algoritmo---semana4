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

int main() {
    int N, D;
    printf("Digite o valor de N: ");
    scanf("%d", &N);
    printf("Digite o valor de D: ");
    scanf("%d", &D);

    if (verificaDivisor(N, D)) {
        printf("%d é divisor de %d\n", D, N);
    } else {
        printf("%d não é divisor de %d\n", D, N);
    }

    return 0;
}
