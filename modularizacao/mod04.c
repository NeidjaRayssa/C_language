 // Criar uma função que receba um caractere como parâmetro e retorne 1, caso seja uma vogal, minúscula ou maiúscula, e 0 em caso contrário.  

#include <stdio.h> 

verificaVogal(char c) { 

    if(c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' || c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U') { 

        return 1;  

    } else { 

        return 0;  

    } 

} 

main(){ 

  char caractere; 

  printf("Digite uma letra:"); 

  scanf("%c", &caractere); 

  printf("%d", verificaVogal(caractere)); 

} 