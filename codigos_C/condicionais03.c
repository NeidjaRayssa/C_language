#include <stdio.h>
#include <stdlib.h>
int main(void) {
 int n1, n2, n3;
 printf("Digite 3 numeros:\n");
 scanf("%d %d %d", &n1, &n2, &n3);
 if (n1 > n3) {
 int tmp = n3;
 n3 = n1;
 n1 = tmp; }
 if (n1 > n2) {
 int tmp = n2;
 n2 = n1;
 n1 = tmp; }
 if (n2 > n3) {
 int tmp = n3;
 n3 = n2;
 n2 = tmp; }
 printf("Os números digitados, na ordem crescente são: %d %d %d", n1, n2, n3);
 return 0;
}
