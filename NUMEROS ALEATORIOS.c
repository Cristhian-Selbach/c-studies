#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
  int x;

  srand(time(NULL));

  //de 1 a 9
  for(int i = 0; i < 20; i++){
    x = (rand() % 10) + 1;
    printf("%d ", x);
  }

  printf("\n");

  //de 50 a 100
  for(int i = 0; i < 20; i++){
    x = (rand() % 51) + 50;
    printf("%d ", x);
  }

  printf("\n");

  //de -20 a 20
  for(int i = 0; i < 20; i++){
    x = (rand() % 41) - 20;
    printf("%d ", x);
  }

  printf("\n");

  //de -12 a 9
  for(int i = 0; i < 20; i++){
    x = (rand() % 22) - 12;
    printf("%d ", x);
  }





  return 0;
}