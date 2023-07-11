/*
Alunos:
Caio Matias Souto
Eduardo Godoy Ferreira de Oliveira
Roger Vinícius Pereira Augusto

Turma: 3AINFO

Programa que faz a conversão de um número decimal para binário, ou um número binário para decimal, ou hexadecimal para binário, ou hexadecimal para decimal, ou decimal para hexadecimal. 
*/
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int num, opcao; // declaração do número decimal e da opção do switch
    long binario; // declaração do número binário
    char hexadecimal[100]; // declaração do hexadecimal
    printf("\nEscolha uma opção: \n(1)Converter um número decimal para binário \n(2)Converter um número binário para decimal \n(3)Converter um número hexadecimal para binário \n(4)Converter um número decimal para hexadecimal \n(5)Converter um número hexadecimal para decimal\n\n");
    scanf("%d", &opcao);
    
    // Função para converter um número decimal para binário
    void decimalParaBinario(int decimal) {
        int binario[32];
        int i = 0;

        while (decimal > 0) {
            binario[i] = decimal % 2;
            decimal /= 2;
            i++;
        }

        printf("Binário: ");
        for (int j = i - 1; j >= 0; j--) {
            printf("%d", binario[j]);
        }
        printf("\n");
    }
    
    // Função para converter um número binário para decimal
    void binarioParaDecimal(long binario) {
        int decimal = 0, i = 0, resto;

        while (binario > 0) {
            resto = binario % 10;
            binario /= 10;
            decimal += resto * pow(2, i);
            i++;
        }

        printf("Decimal: %d\n", decimal);
    }
    
    // Função para converter um número hexadecimal para binário
    void hexadecimalParaBinario(char* hexadecimal) {
        printf("Binário: ");
        for (int i = 0; hexadecimal[i] != '\0'; i++) {
            switch (hexadecimal[i]) {
                case '0':
                    printf("0000");
                    break;
                case '1':
                    printf("0001");
                    break;
                case '2':
                    printf("0010");
                    break;
                case '3':
                    printf("0011");
                    break;
                case '4':
                    printf("0100");
                    break;
                case '5':
                    printf("0101");
                    break;
                case '6':
                    printf("0110");
                    break;
                case '7':
                    printf("0111");
                    break;
                case '8':
                    printf("1000");
                    break;
                case '9':
                    printf("1001");
                    break;
                case 'A':
                case 'a':
                    printf("1010");
                    break;
                case 'B':
                case 'b':
                    printf("1011");
                    break;
                case 'C':
                case 'c':
                    printf("1100");
                    break;
                case 'D':
                case 'd':
                    printf("1101");
                    break;
                case 'E':
                case 'e':
                    printf("1110");
                    break;
                case 'F':
                case 'f':
                    printf("1111");
                    break;
                default:
                    printf("Erro: Caractere inválido!");
                    break;
            }
        }
        printf("\n");
    }
    
    // Função para converter um número decimal para hexadecimal
    void decimalParaHexadecimal(int decimal) {
        printf("Hexadecimal: %X\n", decimal);
    }
    
    // Função para converter um número hexadecimal para decimal
    void hexadecimalParaDecimal(char* hexadecimal) {
        int decimal = 0;
        for (int i = 0; hexadecimal[i] != '\0'; i++) {
            if (hexadecimal[i] >= '0' && hexadecimal[i] <= '9')
                decimal = decimal * 16 + (hexadecimal[i] - '0');
            else if (hexadecimal[i] >= 'A' && hexadecimal[i] <= 'F')
                decimal = decimal * 16 + (hexadecimal[i] - 'A' + 10);
            else if (hexadecimal[i] >= 'a' && hexadecimal[i] <= 'f')
                decimal = decimal * 16 + (hexadecimal[i] - 'a' + 10);
        }
        printf("Decimal: %d\n", decimal);
    }
    switch (opcao){ // switch para fazer a conversão
         case 1:
            printf("Digite um número decimal: ");
            scanf("%d", &num);
            decimalParaBinario(num); // chamando a função para fazer a conversão
            break;
        case 2:
            printf("Digite um número binário: ");
            scanf("%ld", &binario);
            binarioParaDecimal(binario); // chamando a função para fazer a conversão
            break;
        case 3:
            printf("Digite um número hexadecimal: ");
            scanf("%s", hexadecimal);
            hexadecimalParaBinario(hexadecimal); // chamando a função para fazer a conversão
            break;
        case 4:
            printf("Digite um número decimal: ");
            scanf("%d", &num);
            decimalParaHexadecimal(num); // chamando a função para fazer a conversão
            break;
        case 5:
            printf("Digite um número hexadecimal: ");
            scanf("%s", hexadecimal);
            hexadecimalParaDecimal(hexadecimal); // chamando a função para fazer a conversão
            break;
        default:
            printf("Opção inválida!\n");
            break;
    }
    return(0);
}