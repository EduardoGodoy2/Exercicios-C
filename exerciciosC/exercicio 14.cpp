#include <stdio.h>
/*fa�a um programa utilizando while*/
/* O programa soma os n�meros positivos de entrada, a partir de um n�mero negativo, o programa � parado e � apresentado a soma*/
/*GRUPO: Eduardo Godoy e Maria Beatriz - 3AINFO*/
int main() {
	int soma = 0;
	int numero;
	
	printf("Digite um numero inteiro positivo ou digite um n�mero negativo para sair: ");
	scanf("%d", &numero);
	while (numero >= 0) {
		soma += numero; 
		printf("Digite um numero inteiro positivo ou digite um n�mero negativo para sair: ");
		scanf("%d", &numero);
	}
	
	printf("A soma dos numeros positivos �: %d/n", soma);
	return 0;
}
