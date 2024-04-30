// Criar uma função que receba um número inteiro como parâmetro e retorne o seu fatorial. 

#include <stdio.h> 

int fatorial(int n){ 

  int fat=1; 

  int i; 

  for(i=1; i<=n; i++){ 

    fat=fat*i; 

  } 

  return fat; 

} 

main(){ 

  int num, fat; 

  printf("Digite um número:"); 

  scanf("%d", &num); 

  fat = fatorial(num); 

  printf("O fatorial de %d e %d", num, fat); 

 return 0; 

} 