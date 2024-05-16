#include <stdio.h>

int main(){
  printf("Digite uma string com espaços: " );
  char word[100];

  //Ler a string sem quebrar
  gets(word);

  puts(word);
  return 0;
}