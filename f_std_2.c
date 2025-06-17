#include <stdio.h>

int main(){

  int matriz[3][3], i, j, maior_valor, pos_maior_i = 0, pos_maior_j = 0 ;

  for(i = 0; i < 3; i++){
    for(j = 0; j < 3; j++){
      printf("Digite o elemento [%d][%d]: \n", i+1, j+1);
      scanf("%d", &matriz[i][j]);
    }
  }

  for(i = 0; i < 3; i++){
    for(j = 0; j < 3; j++){
      if(matriz[i][j] > maior_valor){
        maior_valor = matriz[i][j];
        pos_maior_i = i;
        pos_maior_j = j;
      }
    }
  }

  printf("O maior valor é: %d e sua posição é [%d][%d]", maior_valor, pos_maior_i + 1, pos_maior_j + 1);

  return 0;
}
