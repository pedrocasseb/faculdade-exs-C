#include <stdio.h>

int main(){

  int matriz[3][3], i, j, soma = 0;

  printf("Forneça os elementos necessários: \n");

  for(i = 0; i < 3; i++){
    for(j = 0; j < 3; j++){
      printf("Digite o elemento [%d][%d]: ", i, j);
      scanf("%d", &matriz[i][j]);
    }
  }

  for(i = 0; i < 3; i++){
    printf("\n");
    for(j = 0; j < 3; j++){
      printf("%d ", matriz[i][j]);
    }
  }

  for(i = 0; i < 3; i++){
    for(j = 0; j < 3; j++){
      if(i == j){
        soma+= matriz[i][j];
      }
    }
  }

  printf("\nvalor da soma da diagonal principal é: %d", soma);

  return 0;
}
