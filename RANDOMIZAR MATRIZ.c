// Escreva um algoritmo que construa uma matriz de 10 linhas e 15
// colunas contendo números inteiros. Em seguida escreva a soma dos
// elementos de cada linha e se a soma dos elementos é par ou ímpar. Por fim,
// escreva a soma dos elementos de cada coluna e se a soma dos elementos é
// par ou ímpar

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
  int mat[10][15];

  srand(time(NULL));

  for(int i = 0; i < 10; i++){
    for(int j = 0; j < 15; j++){
      mat[i][j] = (rand() % 100);
      printf("%.2d ", mat[i][j]);
    }
    printf("\n");
  }

  printf("\n");

  int sumLinhas = 0, sumColuna = 0;

  for(int i = 0; i < 10; i++){
    for (int j = 0; j < 15; j++)
    {
      sumLinhas = mat[i][j] + sumLinhas;
    }
    printf("A soma dos elementos na linha %d eh %d \n", i, sumLinhas);
    sumLinhas = 0;
  }

  printf("\n");

  for(int i = 0; i < 15; i++){
    for (int j = 0; j < 10; j++)
    {
      sumColuna = mat[j][i] + sumColuna;
    }
    printf("A soma dos elementos na coluna %d eh %d \n", i, sumColuna);
    sumColuna = 0;
  }


  return 0;
}
