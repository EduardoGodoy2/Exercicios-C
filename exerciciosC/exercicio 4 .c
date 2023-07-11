/******************************************************************************

Grupo:Eduardo Godoy e Maria Beatriz

Explicação: As variáveis globais "global1" e "global2" são inicializadas com v10 e 5.5. As funções "funcao_1" e "funcao_2" alteram o valor 
dessas variáveis globais. Na função main, as variáveis globais são impressas antes e depois da chamada das funções "funcao_1" e "funcao_2".

*******************************************************************************/

#include <stdio.h>

int global1 = 10;        /*inicializando funções*/
float global2 = 5.5;

void funcao_1() { /*inicializando função*/
    global1 += 5;   /*adicionando valores a varial global*/
    global2 += 2.5;
}

void funcao_2() { /*inicializando função*/
    global1 -= 3;
    global2 -= 1.5;
}

int main() {
    printf("Variáveis globais antes das funções:\n");
    printf("global1 = %d\n", global1);
    printf("global2 = %.2f\n", global2);

    funcao_1();

    printf("\nVariáveis globais após a função 1:\n");
    printf("global1 = %d\n", global1);
    printf("global2 = %.2f\n", global2);

    funcao_2();

    printf("\nVariáveis globais após a função 2:\n");
    printf("global1 = %d\n", global1);
    printf("global2 = %.2f\n", global2);

    return 0;
}
