/*
Grupo:
Caio Matias Souto
Eduardo Godoy Ferreira
Roger Vinícius Pereira Augusto

Turma: 3AINFO 

Código que Declara variáveis e modifica o valor de cada uma delas utilizando ponteiros
*/

#include <stdio.h>
#include <stdbool.h>
int main() {
    
    // Declaração inicial das variáveis
    int inteiro = 1;
    float floating = 4.75;
    char charactere = 'R';
    bool booleano = false;

    // Associação das variáveis aos ponteiros
    int *ptr_integer = &inteiro;
    float *ptr_float = &floating;
    char *ptr_char = &charactere;
    bool *ptr_bool = &booleano;

    printf("Valores antes da modificação:\n");
    printf("Integer: %d\n", inteiro);
    printf("Float: %.2f\n", floating);
    printf("Char: %c\n", charactere);
    printf("Bool: %d\n", booleano);
    
    // Mudança dos valores através dos endereços
    *ptr_integer = 5;
    *ptr_float = 7.82;
    *ptr_char = 'E';
    *ptr_bool = true;

    printf("\nValores após a modificação:\n");
    printf("Integer: %d\n", inteiro);
    printf("Float: %.2f\n", floating);
    printf("Char: %c\n", charactere);
    printf("Bool: %d\n", booleano);

    return 0;
}