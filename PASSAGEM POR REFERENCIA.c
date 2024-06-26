#include <stdio.h>

//IDENTIFICADOR * NO ARGUMENTO SERVE PARA FALAR QUE ESTOU ESPERANDO UM ENDEREÇO DE MEMÓRIA
void mudarIdade(int *idade){
  //AGORA, O IDENTIFICADOR * SERVE PARA FALAR QUE QUERO ALTERAR O CONTEUDO APONTADO PELO ENDEREÇO DE MEMÓRIA
  //E NÃO O PROPRIO ENDEREÇO
  *idade = 90;
}

int main(){

  int idade = 35;
  printf("idade antes: %d \n", idade);

  //IDENTIFICADOR & SERVE PARA FALAR QUE ESTOU MANDANDO O ENDEREÇO DA MEMÓRIA E NÃO O VALOR DA VARIAVÉL
  mudarIdade(&idade);
  printf("idade depois: %d", idade);

  return 0;
}