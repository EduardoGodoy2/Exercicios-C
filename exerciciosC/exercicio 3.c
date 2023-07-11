/*
Grupo:
Caio Matias Souto
Eduardo Godoy Ferreira
Roger Vinícius Pereira Augusto

Turma: 3AINFO 

Código que troca os valores de 2 variáveis, entre elas, usando ponteiros
*/

#include <stdio.h>

void trocarValores(int *ptrA, int *ptrB) {
    int temp = *ptrA;  // Armazena o valor apontado por ptrA na variável temp
    *ptrA = *ptrB;  // Atribui o valor apontado por ptrB ao valor apontado por ptrA
    *ptrB = temp;  // Atribui o valor de temp ao valor apontado por ptrB
}

int main() {
    int A, B;  // Declara duas variáveis inteiras A e B

    printf("Digite o valor de A: ");
    scanf("%d", &A);  // Lê o valor digitado pelo usuário e armazena em A

    printf("Digite o valor de B: ");
    scanf("%d", &B);  // Lê o valor digitado pelo usuário e armazena em B

    printf("\nValores antes da troca:\n");
    printf("A: %d\n", A);  // Imprime o valor de A
    printf("B: %d\n", B);  // Imprime o valor de B

    trocarValores(&A, &B);  // Chama a função trocarValores passando os endereços de A e B

    printf("\nValores após a troca:\n");
    printf("A: %d\n", A);  // Imprime o valor de A após a troca
    printf("B: %d\n", B);  // Imprime o valor de B após a troca

    return 0;
}