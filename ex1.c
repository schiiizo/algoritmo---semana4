#include <stdio.h>


//cria função
float soma(float a, float b, float c) {
  return a + b + c;
}

int main() {
  float a, b, c;

  printf("Digite três valores numéricos: ");
  scanf("%f %f %f", &a, &b, &c);

  float soma_resultado = soma(a, b, c);

  printf("A soma dos valores é: %f\n", soma_resultado);

  return 0;
}
