#include <stdio.h>
//Grupo: Roger Vinicius, Caio Matias, Eduardo Godoy - 3Ainfo

//O programa começa declarando uma matriz 3x3 de floats. 
//Depois o programa preenche a matriz com valores com a soma dos índices de linha e coluna. 
//Em seguida, percorre cada posição da matriz e imprime o endereço de memória usando for e o operador &. 
//E por fim, o programa termina de executar.

int main() {
    float matriz[3][3];  // Declaração da matriz 3x3

    // Loop para preencher a matriz com valores
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            matriz[i][j] = i + j;
        }
    }

    // Loop para imprimir o endereço de cada posição da matriz
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("Endereço da posição [%d][%d]: %p\n", i, j, &matriz[i][j]);
        }
    }

    return 0;
}