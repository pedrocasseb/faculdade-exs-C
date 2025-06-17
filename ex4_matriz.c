#include <stdio.h>

int main(){

  int matriz[5][5], linha[5] = {0}, i, j;

  printf("Digite os elementos pedidos: \n");

  for(i = 0; i < 5; i++){
    for(j = 0; j < 5; j++){
      printf("Elemento [%d][%d]", i, j);
      scanf("%d", &matriz[i][j]);
    }
  }

  for(i = 0; i < 5; i++){
    for(j = 0; j < 5; j++){
      linha[i] += matriz[i][j];
    }
  }

  for(i = 0; i < 5; i++){
    printf("\n%d", linha[i]);
  }

  return 0;
}
