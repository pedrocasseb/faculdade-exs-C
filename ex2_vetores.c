#include <stdio.h>

int main(){

  int num[10], i, j, k, soma = 0, valor; 

  printf("Digite os valores pedidos: \n");

  for(i = 0; i < 10; i++){
    printf("\nDigite o elemento %d: ", i+1);
    scanf("%d", &num[i]);
  }
  
  printf("\nDigite o valor: ");
  scanf("%d", &valor);

  for(i = 0; i < 8 && !soma; i++){
    for(j = i + 1; j < 9 && !soma; j++){
      for(k = j + 1; k < 10 && !soma; k++){
        if (num[i] + num[j] + num[k] == valor){
          printf("\nO conjunto foi encontrado: %d + %d + %d = %d",num[i], num[j], num[k], valor);
          break;
        }
      }
    }
  }

  printf("\nNenhum conjunto encontrado...");

  return 0;
}
