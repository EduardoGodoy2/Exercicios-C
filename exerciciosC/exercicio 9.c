/*
Alunos:
Caio Matias Souto
Eduardo Godoy Ferreira de Oliveira
Roger Vinícius Pereira Augusto

Turma: 3AINFO

Programa que verifica se um número inteiro é primo, se é divisível por 2, se é divisível por 3, se é divisível por 5, se é par ou se é impar.
*/

#include <stdio.h>

int main()
{
    int i, opcao; // declaração de variáveis, em que i é o número digitado e opcao é a opção escolhida para a verificação do número
    printf("Digite um número:\n\n");
    scanf("%d", &i);
    printf("\nEscolha uma opção: \n(1)Verificar se o número é par \n(2)Verificar se o número é divisível por 2 \n(3)Verificar se o número é divisível por 3 \n(4)Verificar se o número é divisível por 5 \n(5)Verificar se o número é ímpar \n(6)Verificar se o número é primo\n\n");
    scanf("%d", &opcao);
    switch(opcao){ // switch para saber qual verificação o programa irá fazer
        case 1:
            if (i%2==0){ // analisando se o resto da divisão do número por 2 é 0
                printf("\nO número é par");
            }
            else{
                printf("\nO número não é par");
            }
            break;
            
        case 2 :
            if (i%2==0){ // analisando se o resto da divisão do número por 2 é 0
                printf("\nO número é divisível por 2");
            }
            else{
                printf("\nO número não é divisível por 2");
            }
            break;
            
        case 3 :
            if (i%3==0){ // analisando se o resto da divisão do número por 3 é 0
                printf("\nO número é divisível por 3");
            }
            else{
                printf("\nO número não é divisível por 3");
            }
            break;
            
        case 4:
            if (i%5==0){ // analisando se o resto da divisão do número por 5 é 0
                printf("\nO número é divisível por 5");
            }
            else{
                printf("\nO número não é divisível por 5");
            }
            break;
        
        case 5 :
            if (i%2==1){ // analisando se o resto da divisão do número por 2 é 1
                printf("\nO número é ímpar");
            }
            else{
                printf("\nO número não é ímpar");
            }
            break;
        
        default:
            int qtd=0; // variável que armazena a quantidade de divisores
            for (int k=1; k<=i;k++){
                if (i%k==0){ // analisando quais dos números de 1 até o número digitado são divisíveis pelo número digitado
                    qtd++; // se o número for divisível, adiciona-se 1 à quantidade de divisores
                }
            }
            if (qtd==2){
                printf("\nO número é primo");
            }
            else{
                printf("\nO número não é primo");
            }
            break;
        
    }
    return(0);
}