// Desenvolva uma função que recebe as três notas do aluno como parâmetro e retorne a sua média. 

#include <stdio.h> 

calcularmed(float n1, float n2, float n3){ 

  float med; 

  med = (n1 + n2 + n3)/3; 

  return med; 

} 

main() { 

  float n1, n2, n3, media; 

  printf("Digite a N1:" ); 

  scanf("%f", &n1); 

  printf("Digite a N2:"); 

  scanf("%f", &n2); 

  printf("Digite a N3:"); 

  scanf("%f", &n3); 

  media = calcularmed(n1, n2, n3); 

  printf("A media é: %1.2f", media); 

  return 0; 

} 