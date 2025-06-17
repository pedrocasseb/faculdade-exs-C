#include <stdio.h>

int main(){
  
  int num[5], maior, menor, menor_pos, maior_pos, i;

  printf("Digite os números:\n");
  for(i = 0; i < 5; i++){
    printf("\nDigite o elemento %d: ", i+1);
    scanf("%d", &num[i]);
  }
  
  maior = menor = menor_pos = maior_pos = 0;

  for(i = 0; i < 5; i++){
    if (num[i] < num[i-1]){
      menor_pos = i; 
      menor = num[i];
    }
    if (num[i] > num[i-1]) {  
      maior = num[i];
      maior_pos = i;
    }
  }

  printf("\n\nO menor número é: %d", menor);
  printf("\nA posição do menor númeor é: %d", menor_pos+1);

  printf("\n\nO maior número é: %d, e seu elemento é: %d", maior, maior_pos+1);  

  return 0;
}
