// A biblioteca string.h contém uma série de funções para manipular strings. Por exemplo:
// Copiar string origem para a string destino com strcpy(destino, origem)
// Concatenar string2 no fim da string1 com strcat(string1, string2)
// Descobrir o tamanho de uma string com strlen(stringX)
// Comparar strings alfabeticamente com strcmp(string1, string2)

#include <stdio.h>

int main(){
  printf("Digite uma string com espaços: " );
  char word[100];

  //Ler a string sem quebrar
  gets(word);

  puts(word);
  return 0;
}