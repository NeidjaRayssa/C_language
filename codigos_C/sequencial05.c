#include <stdio.h>
#include <stdlib.h>
int main() {
 int vb,vn,vv;
 printf("quantidade de votos brancos:\n");
 scanf("%i", &vb);
 printf("quantidade de votos nulos:\n");
 scanf("%i", &vn);
 printf("quantidade de votos válidos:\n\n");
 scanf("%i", &vv);
 printf("total de eleitores: %i\n\n", vb+vn+vv);
 printf("o percentual de votos brancos é de %i%\n", vb*100/(vb+vn+vv));
 printf("o percentual de votos nulos é de %i%\n", vn*100/(vb+vn+vv));
 printf("o percentual de votos válidos é de %i%\n", vv*100/(vb+vn+vv));
return 0;
}
