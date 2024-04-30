//Faça uma função, que eleve um número inteiro qualquer a uma potência. O número e a potência devem ser fornecidos pelo usuário. 

#include <stdio.h> 

#include <math.h> 

int potencia(int num, int pot){ 

  int resultado = pow(num, pot); 

  return resultado; 

} 

main(){ 

  int num, pt, Res; 

  printf("Digite a base:"); 

  scanf("%d", &num); 

  printf("Digite a potencia:"); 

  scanf("%d", &pt); 

  Res = potencia(num, pt); 

  printf("O resultado é: %d", Res); 

  return 0; 

} 