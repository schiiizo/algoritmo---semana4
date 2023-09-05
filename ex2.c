#include <stdio.h>

float c2f(float celsius) {
  return (celsius * 1.8) + 32;
}

float f2c(float fahrenheit) {
  return (fahrenheit - 32) / 1.8;
}


int main() {
  float temperatura;
  int opcao;

  printf("(1) Converter de Celsius para Fahrenheit\n");
  printf("(2) Converter de Fahrenheit para Celsius\n");
  printf("Escolha uma opção: ");
  scanf("%d", &opcao);

  printf("Digite o valor da temperatura: ");
  scanf("%f", &temperatura);

  // Chama a função apropriada para realizar a conversão
  if (opcao == 1) {
    temperatura = c2f(temperatura);
  } else if (opcao == 2) {
    temperatura = f2c(temperatura);
  } else {
    // Opção inválida
    printf("Opção inválida.\n");
    return 1;
  }

  printf("A temperatura convertida é: %f\n", temperatura);

  return 0;
}
