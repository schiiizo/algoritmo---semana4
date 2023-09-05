#include <stdio.h>

void imprime_tabuada(int n) {
  int i;

  for (i = 1; i <= 10; i++) {
    printf("%d x %d = %d\n", n, i, n * i);
  }
}

int main() {
  int n;

  printf("Digite um número inteiro: ");
  scanf("%d", &n);

  imprime_tabuada(n);

  return 0;
}
