#include <stdio.h>

int main(){
  
  int vetor[10], i, soma=0;

  for(i = 0; i < 10; i++){
    printf("Digite o elemento [%d]: ", i+1);
    scanf("%d", &vetor[i]);
  }

  for(i = 0; i < 10; i++){  
    soma += vetor[i];
  }

  printf("soma = %d", soma);
  
  return 0;
}
