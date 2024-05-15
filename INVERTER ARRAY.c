#include <stdio.h>
#include <string.h>

int main(){

    char word[100], reverseWord[100];
    int i, size;

    // Pedir ao usuário para digitar uma palavra
    printf("Digite uma palavra: ");
    scanf("%s", word);

    // Calculando o tamanho da palavra
    size = strlen(word);

    // Invertendo a palavra
    for (i = 0; i < size; i++) {
        //Usa-se -1 pois a ultimo caractere do array word é nulo (\0)
        reverseWord[i] = word[size - 1 - i];
    }
    reverseWord[size] = '\0'; // Adicionando o caractere nulo no final da string invertida

    // Mostrando a palavra invertida
    printf("Palavra invertida: %s\n", reverseWord);

    return 0;
}

