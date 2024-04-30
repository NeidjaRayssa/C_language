// Desenvolva uma função que receba três números inteiros como parâmetros e retorne o menor valor. 

#include <stdio.h> 

menorValor (int n1, int n2, int n3){ 
	int menor; 
	if(n1 < n2 && n1 < n3){ 
		menor = n1; 
	} 
	if(n2 < n1 && n2 <  n3){ 
		menor = n2; 
	}
	if(n3 < n1 && n3 < n2){ 
		menor = n3; 
	} 
	return menor; 
} 

main(){ 
	int num1, num2, num3, retorno; 

	printf("Digite o primeiro numero:"); 
	scanf("%d", &num1); 
	
    printf("Digite o segundo numero:"); 
	scanf("%d", &num2); 
	
    printf("Digite o terceiro numero:"); 
	scanf("%d", &num3); 
	
    retorno = menorValor(num1, num2, num3);	 

	printf("O menor valor digitado foi %d", retorno); 
	return 0; 

} 