#include <stdio.h>
/*fa�a um programa utilizando while e do*/
/*O programa � um tipo de jogo que consiste em o usu�rio acertar o n�mero secreto. 
Este n�mero � predefino em "35", caso o n�mero digitado seja abaixo,
o programa ir� printar "N�mero muito baixo", caso contr�rio "n�mero muito alto". 
Se o usu�rio acertar o n�mero ele recebe seu parab�ns e o programa acaba*/
/*GRUPO: Eduardo Godoy e Maria Beatriz - 3AINFO*/

int main() {
	int numeroSecreto = 35;
	int palpite;
	printf("Adivinhe o numero secreto!\n");
	
	do {
		printf("Digite o seu palpite: ");
		scanf("%d", &palpite);
		if (palpite < numeroSecreto) {
			printf("N�mero muito baixo! Tente novamente!\n");
		}
		else if (palpite > numeroSecreto) {
			printf("Numero muito alto! Tente novamente!\n");
		}
		else {
			printf("Parabens! Voce acertou o numero secreto!\n ");
		}
	}
	while (palpite != numeroSecreto);
	return 0;

}
