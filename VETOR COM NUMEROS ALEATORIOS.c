/* Crie uma função que preencha um vetor de mil posições com
valores aleatórios de 1 até 6. Conte quantas vezes cada número foi sorteado.
Em seguida, exiba a porcentagem de vezes em que cada número foi sorteado. */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void lancamento(int *jogadados, int tamanho) {
	
	int i;
	
	// preenche vetor com valores de 1 a 6
	for (i = 0; i < tamanho; i++) {
		jogadados[i] = rand() % 6 + 1;
		printf("%d: %d\n", i, jogadados[i]);
	}
}

void contabiliza(int *jogadados, int tamanho, int valorprocurado) {
	
	int i, cont = 0;
	float porc;
	
	// percorre vetor procurando valor
	for (i = 0; i < tamanho; i++) {
		// caso encontre, incrementa contador
		if (jogadados[i] == valorprocurado) {
			cont++;
		}
	}
	
	// calcula a porcentagem de ocorrências
	porc = (cont * 100.0) / tamanho;
	printf("Ocorrencias de %d: %.4f\n", valorprocurado, porc);
}

int main () {
	
	srand(time(NULL));
	
	int tamanho = 10000, i;
	int jogadados[tamanho];
	
	lancamento(jogadados, tamanho);
	
	for (i = 1; i <= 6; i++) {	
		contabiliza(jogadados, tamanho, i);
	}
	
	return 0;
}