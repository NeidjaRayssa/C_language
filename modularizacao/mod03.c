 //Escreva um algoritmo, em linguagem algorítmica, que apresente um menu com quatro opções: 
//1 – Soma 
//2 – Subtração 
//3 – Multiplicação 
//4 – Sair 

#include <stdio.h>  

#include <stdlib.h>  

calcularSoma(int n1, int n2){  

  int resultado;  

  resultado = n1 + n2;  

  return resultado;  

}  

calcularSubtracao(int n1, int n2){  

  int resultado;  

  resultado = n1 - n2;  

  return resultado;  

} 

calcularMultiplicacao(int n1, int n2){  

  int resultado;  

  resultado = n1 * n2;  

  return resultado;  

} 

main(){  

   int escolha;  

  while(escolha !=4){  

  printf("1- soma  \n 2-subtracao \n 3-multiplicacao \n 4-sair \n Escolha um numero:");  

  scanf("%d", &escolha);  

  if(escolha == 1){  

    int num1, num2, r1;  

    printf("Digite o primeiro numero:");  

    scanf("%d", &num1);  

    printf("Digite o segundo numero:");  

    scanf("%d", &num2);  

    r1 = calcularSoma (num1, num2);  

    printf("Resultado: %d \n \n", r1);  

  }  

  if(escolha == 2){  

    int num1, num2, r2;  

    printf("Digite o primeiro numero:");  

    scanf("%d", &num1);  

    printf("Digite o segundo numero:");  

    scanf("%d", &num2);  

    r2 = calcularSubtracao (num1, num2);  

    printf("Resultado: %d \n \n", r2); 

  }  

  if(escolha == 3){  

    int num1, num2, r3;  

    printf("Digite o primeiro numero:");  

    scanf("%d", &num1);  

    printf("Digite o segundo numero:");  

    scanf("%d", &num2);  

    r3 = calcularMultiplicacao (num1, num2);  

    printf("Resultado: %d \n \n", r3);  

  }} 

return 0;  

} 