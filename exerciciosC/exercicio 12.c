#include <stdio.h>

int main() {
    int opcao, quantidade;
    float numeros[100], soma = 0, media = 0;
    int i, j, contador = 0, frequencia = 0, maxFrequencia = 0;
    float moda = 0, mediana = 0;
    float primeiroTermo, razao;

    printf("Digite a quantidade de números: ");
    scanf("%d", &quantidade);

    printf("Digite os números:\n");
    for (i = 0; i < quantidade; i++) {
        scanf("%f", &numeros[i]);
        soma += numeros[i];
    }

    printf("\nEscolha a opção:\n");
    printf("1. Média aritmética\n");
    printf("2. Média ponderada\n");
    printf("3. Mediana\n");
    printf("4. Moda\n");
    printf("5. Progressão aritmética\n");
    printf("6. Progressão geométrica\n");
    scanf("%d", &opcao);

    switch (opcao) {
        case 1:
            media = soma / quantidade;
            printf("A média aritmética é: %.2f\n", media);
            break;
        case 2:
            // Implementar cálculo da média ponderada
            break;
        case 3:
            // Implementar cálculo da mediana
            break;
        case 4:
            // Calcular a moda
            for (i = 0; i < quantidade; i++) {
                frequencia = 0;
                for (j = i; j < quantidade; j++) {
                    if (numeros[j] == numeros[i]) {
                        frequencia++;
                    }
                }
                if (frequencia > maxFrequencia) {
                    maxFrequencia = frequencia;
                    moda = numeros[i];
                }
            }
            printf("A moda é: %.2f\n", moda);
            break;
        case 5:
            // Implementar cálculo da progressão aritmética
            break;
        case 6:
            // Implementar cálculo da progressão geométrica
            break;
        default:
            printf("Opção inválida!\n");
    }

    return 0;
}