#include <stdio.h>

void imprime_tabuada(int n) {
  int i;

  for (i = 1; i <= 10; i++) {
    printf("%d x %d = %d\n", n, i, n * i);
  }
}

int main() {
  int i;

  // Imprime as tabuadas de 1 a 9
  for (i = 1; i <= 9; i++) {
    imprime_tabuada(i);
  }

  return 0;
}
