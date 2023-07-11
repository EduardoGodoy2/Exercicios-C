/*
Grupo:
Caio Matias Souto
Eduardo Godoy Ferreira
Roger Vinícius Pereira Augusto

Turma: 3AINFO 

Código que comapara os endereços de duas variáveis e exibe o maior
*/

#include <stdio.h>

int main() {
    char char1;
    char char2;

    printf("Digite o valor do primeiro caractere: ");
    scanf(" %c", &char1);  // Lê o valor do primeiro caractere digitado pelo usuário e armazena em char1

    printf("Digite o valor do segundo caractere: ");
    scanf(" %c", &char2);  // Lê o valor do segundo caractere digitado pelo usuário e armazena em char2

    printf("\nEndereço de char1: %p\n", (void*)&char1);  // Imprime o endereço de memória de char1
    printf("Endereço de char2: %p\n", (void*)&char2);  // Imprime o endereço de memória de char2

    // Faz a comparação do tamanho dos endereços
    if (&char1 > &char2) {
        printf("O endereço de char1 é maior.\n");
    } else if (&char2 > &char1) {
        printf("O endereço de char2 é maior.\n");
    } else {
        printf("Os endereços são iguais.\n");
    }

    return 0;
}
