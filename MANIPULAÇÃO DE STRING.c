#include <stdio.h>
#include <strings.h>

int main(){
  printf("Digite uma palavra com - ao inves dos espacos: ");

  char word[100];
  gets(word);
  // Outra forma: scanf("%[^\n]%*c", word);

  for(int i = 0; i < strlen(word); i++){
    if(word[i] == '-'){
      word[i] = ' ';
    }
  }

  puts(word);
  
}