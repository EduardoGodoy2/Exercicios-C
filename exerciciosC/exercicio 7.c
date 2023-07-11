#include <stdio.h>
//Grupo: Roger Vinicius, Caio Matias, Eduardo Godoy - 3Ainfo

/*O programa começa declarando duas matrizes, matrizA e matrizB (3x3). 
Depois preenche a matrizB com valores de exemplo. 
Em seguida, chama a função 'substituirMatriz', passando os endereços dos primeiros elementos das matrizes A e B, 
e tambem o tamanho total das matrizes (9 elementos). 
Dentro da função 'substituirMatriz', utiliza ponteiros para substituir o conteúdo de matrizA pelo conteúdo de matrizB. 
no fim, o programa imprime a matrizA para verificar o conteúdo substituído.*/

#include <stdio.h>

void substituirMatriz(float *matrizA, float *matrizB, int tamanho) //declaração que recebe dois ponteiros 
{
    for (int i = 0; i < tamanho; i++) {
        *(matrizA + i) = *(matrizB + i);
    }
}

int main() {
    float matrizA[3][3];  // Matriz A 3x3
    float matrizB[3][3];  // Matriz B 3x3

    // Preencher matrizB com valores de exemplo
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            matrizB[i][j] = i + j;
        }
    }

    // Utilizar ponteiros para substituir o conteúdo de matrizA pelo conteúdo de matrizB
    substituirMatriz(&matrizA[0][0], &matrizB[0][0], 9);

    // Imprimir matrizA para verificar o conteúdo
    printf("Matriz A:\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("%.2f ", matrizA[i][j]);
        }
        printf("\n");
    }

    return 0;
}