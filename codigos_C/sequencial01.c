#include <stdio.h>
#include <stdlib.h>
int main() {
 int nasc;
 float ano;
 ano = 2024;
 printf("digite seu ano de nascimento: \n");
 scanf("%i", &nasc);
 printf("você tem %2.0f anos", ano - nasc);
 return 0;
}
