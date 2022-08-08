#include <stdio.h>
//9.Crie um programa que contenha uma matriz de float contendo 3 linhas e 3 colunas.
// Imprima o enderec ̧o de cada posicao dessa matriz.


int main() {
	float matriz[3][3] = {1.1,  2.2, 3.3, 4.4, 5.5 ,6.6 ,7.7 ,8.8 ,9.9};
	int i, j;

	for (i=0; i<3; i++) {
		for (j=0; j<3; j++)
			printf("%f\n", matriz[i][j]);
	}

	return 0;
}
