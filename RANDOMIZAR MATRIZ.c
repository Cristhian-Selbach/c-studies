// Escreva um algoritmo que construa uma matriz de 10 linhas e 15
// colunas contendo números inteiros. Em seguida escreva a soma dos
// elementos de cada linha e se a soma dos elementos é par ou ímpar. Por fim,
// escreva a soma dos elementos de cada coluna e se a soma dos elementos é
// par ou ímpar

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
  int numero_aleatorio;

  srand(time(NULL));

  for(int i = 0; i < 10; i++){
    numero_aleatorio = (rand() % 51) + 50;
    printf("Valor: %d", numero_aleatorio);
  }

  return 0;
}
