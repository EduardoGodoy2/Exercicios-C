/******************************************************************************

Grupo:Eduardo Godoy e Maria Beatriz   Turma: 3AINFO

Explicação: O programa diz se o número é positivo ou não

*******************************************************************************/

#include <stdio.h>

int main() {
    int num; /* declaraçao variavel*/

    printf("Digite um número inteiro: "); /*  Imprime uma mensagem na tela pedindo ao usuário que digite um número inteiro*/
    scanf("%d", &num); /*  Imprime uma mensagem na tela pedindo ao usuário que digite um número inteiro */

    if(num > 0) { /*verifica se as condições são verdadeiras*/
        printf("%d é positivo.\n", num); /* imprime na tela uma mensagem informando que o número digitado é positivo. */
    } else {
        printf("%d é não-positivo.\n", num); /*  Imprime na tela uma mensagem informando que o número digitado não é positivo */
    }

    return 0; /* Encerra a função main() e retorna 0 para indicar que o programa foi executado com sucesso. */
}