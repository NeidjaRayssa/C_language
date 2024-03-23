#include <stdio.h>
#include <stdlib.h>
int main(void) {
 int num;
 printf("digite um numero de 1 a 7;\n");
 scanf("%d", &num);
 if (num == 1){printf("Você pertence ao curso de Direito");}
 if(num == 2){printf("Você pertence ao curso de Desing Gráfico");}
 if (num == 3){printf("Você pertence ao curso de Animação");}
 if (num == 4){printf("Você pertence ao curso de Cinema");}
 if (num == 5){printf("Você pertence ao curso de Psicologia");}
 if (num == 6){printf("Você pertence ao curso de Marketing");}
 if (num == 7){printf("Você pertence ao curso de Análise e Desenvolvimento de Sistemas");}
 if(num > 7){printf("Você não pertence a curso algum da UNIAESO");}
 return 0;
}