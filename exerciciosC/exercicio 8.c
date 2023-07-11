#include <stdio.h>
// Maria Beatriz e Eduardo Godoy
int main() {
    // Declaração da variável para armazenar a palavra
    char palavra[100];

    // Solicita ao usuário que digite uma palavra e armazena na variável 'palavra'
    printf("Digite uma palavra: ");
    scanf("%s", palavra);

    // Laço 'for' para percorrer cada caractere da string 'palavra'
    for (int i = 0; palavra[i] != '\0'; i++) {
        // Imprime cada caractere da string em uma linha separada
        printf("%c\n", palavra[i]);
    }

    return 0;
}
