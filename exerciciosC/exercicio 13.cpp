#include <stdio.h>
/*faça um programa utilizando while e do*/
/*O programa é um tipo de jogo que consiste em o usuário acertar o número secreto. 
Este número é predefino em "35", caso o número digitado seja abaixo,
o programa irá printar "Número muito baixo", caso contrário "número muito alto". 
Se o usuário acertar o número ele recebe seu parabéns e o programa acaba*/
/*GRUPO: Eduardo Godoy e Maria Beatriz - 3AINFO*/

int main() {
	int numeroSecreto = 35;
	int palpite;
	printf("Adivinhe o numero secreto!\n");
	
	do {
		printf("Digite o seu palpite: ");
		scanf("%d", &palpite);
		if (palpite < numeroSecreto) {
			printf("Número muito baixo! Tente novamente!\n");
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
