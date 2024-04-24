#include <stdio.h>

int main(void) {
  int numeroelevado;
  int numero;
  
  printf("Digite um número inteiro e não negativo: ");
  scanf("%d",&numero);
  numeroelevado= pow(numero,2);
 

  printf(" Número %d elebado a 2 é %d", numero, numeroelevado);
  return 0;
}