// Desenvolva uma função que recebe dois números inteiros como parâmetro, e retorna o resto da divisão do primeiro parâmetro pelo segundo. 

#include <stdio.h> 

divisao(int n1, int n2){ 

	int resto; 

	resto = n1%n2; 

	return resto; 

	} 

main(){ 

	int num1, num2, resultado; 

	printf("Digite o primeiro numero:"); 

	scanf("%d", &num1); 

	printf("Digite o segundo numero:"); 

	scanf("%d", &num2); 

	resultado = divisao(num1, num2);	 

	printf("O resto da divisao de %d e %d e: %d", num1, num2,resultado); 

	return 0; 

} 