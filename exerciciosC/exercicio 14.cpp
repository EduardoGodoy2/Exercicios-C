#include <stdio.h>
/*faça um programa utilizando while*/
/* O programa soma os números positivos de entrada, a partir de um número negativo, o programa é parado e é apresentado a soma*/
/*GRUPO: Eduardo Godoy e Maria Beatriz - 3AINFO*/
int main() {
	int soma = 0;
	int numero;
	
	printf("Digite um numero inteiro positivo ou digite um número negativo para sair: ");
	scanf("%d", &numero);
	while (numero >= 0) {
		soma += numero; 
		printf("Digite um numero inteiro positivo ou digite um número negativo para sair: ");
		scanf("%d", &numero);
	}
	
	printf("A soma dos numeros positivos é: %d/n", soma);
	return 0;
}
