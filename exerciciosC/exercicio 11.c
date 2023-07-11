/*
Alunos:
Caio Matias Souto
Eduardo Godoy Ferreira de Oliveira
Roger Vinícius Pereira Augusto

Turma: 3AINFO

Programa para calcular a média aritmética, média ponderada, a mediana, a moda, a progressão aritmética ou a progressão geométrica de N números
*/
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

float calcularMediaAritmetica(int numeros[], int tamanho) {
    int soma = 0;
    for (int i = 0; i < tamanho; i++) {
        soma += numeros[i];
    }
    return soma / (float)tamanho;
}

float calcularMediaPonderada(int numeros[], int pesos[], int tamanho) {
    int soma = 0;
    int somaPesos = 0;
    for (int i = 0; i < tamanho; i++) {
        soma += numeros[i] * pesos[i];
        somaPesos += pesos[i];
    }
    return soma / (float)somaPesos;
}

float calcularMediana(int numeros[], int tamanho) {
    // Ordenar os números em ordem crescente
    for (int i = 0; i < tamanho - 1; i++) {
        for (int j = i + 1; j < tamanho; j++) {
            if (numeros[i] > numeros[j]) {
                int temp = numeros[i];
                numeros[i] = numeros[j];
                numeros[j] = temp;
            }
        }
    }

    // Calcular a mediana
    if (tamanho % 2 == 0) {
        return (numeros[tamanho / 2 - 1] + numeros[tamanho / 2]) / 2.0;
    } else {
        return numeros[tamanho / 2];
    }
}

int calcularModa(int numeros[], int tamanho) {
    int frequencia[100] = {0}; // Frequência de cada número
    int moda = 0; // Moda do conjunto de números
    int maxFrequencia = 0; // Frequência máxima

    for (int i = 0; i < tamanho; i++) {
        frequencia[numeros[i]]++;
        if (frequencia[numeros[i]] > maxFrequencia) {
            maxFrequencia = frequencia[numeros[i]];
            moda = numeros[i];
        }
    }

    return moda;
}

void calcularProgressaoAritmetica(int primeiroTermo, int razao, int quantidade) {
    printf("Progressão Aritmética: ");
    for (int i = 0; i < quantidade; i++) {
        int termo = primeiroTermo + i * razao;
        printf("%d ", termo);
    }
    printf("\n");
}

void calcularProgressaoGeometrica(int primeiroTermo, int razao, int quantidade) {
    printf("Progressão Geométrica: ");
    for (int i = 0; i < quantidade; i++) {
        int termo = primeiroTermo * pow(razao, i);
        printf("%d ", termo);
    }
    printf("\n");
}

int main() {
    int opcao;
    int numeros[100];
    int pesos[100];
    int quantidade;
    int primeiroTermo, razao;

    printf("Digite a quantidade de números: ");
    scanf("%d", &quantidade);

    printf("Digite os números:\n");
    for (int i = 0; i < quantidade; i++) {
        scanf("%d", &numeros[i]);
    }

    printf("\nEscolha uma opção:\n");
    printf("1 - Média aritmética\n");
    printf("2 - Média ponderada\n");
    printf("3 - Mediana\n");
    printf("4 - Moda\n");
    printf("5 - Progressão aritmética\n");
    printf("6 - Progressão geométrica\n");
    scanf("%d", &opcao);

    switch (opcao) {
        case 1:
            printf("Média aritmética: %.2f\n", calcularMediaAritmetica(numeros, quantidade));
            break;
        case 2:
            printf("Digite os pesos:\n");
            for (int i = 0; i < quantidade; i++) {
                scanf("%d", &pesos[i]);
            }
            printf("Média ponderada: %.2f\n", calcularMediaPonderada(numeros, pesos, quantidade));
            break;
        case 3:
            printf("Mediana: %.2f\n", calcularMediana(numeros, quantidade));
            break;
        case 4:
            printf("Moda: %d\n", calcularModa(numeros, quantidade));
            break;
        case 5:
            printf("Digite o primeiro termo: ");
            scanf("%d", &primeiroTermo);
            printf("Digite a razão: ");
            scanf("%d", &razao);
            calcularProgressaoAritmetica(primeiroTermo, razao, quantidade);
            break;
        case 6:
            printf("Digite o primeiro termo: ");
            scanf("%d", &primeiroTermo);
            printf("Digite a razão: ");
            scanf("%d", &razao);
            calcularProgressaoGeometrica(primeiroTermo, razao, quantidade);
            break;
        default:
            printf("Opção inválida!\n");
            break;
    }

    return 0;
}
