#include <stdio.h>

int main() {
    int matriz[3][3];
    int i, j;
    int soma = 0;
    
    printf("Digite os elementos da matriz 3x3:");
    for (i=0; i < 3; i++){
        for (j=0; j < 3; j++){
            printf("Elemento [%d][%d]: ", i,j);
            scanf("%d", &matriz [i][j]);
            soma += matriz [i][j];
            
        }
    }
      printf("\nMatriz 3x3 digitada:\n");
      for (i=0; i < 3; i++) {
          for (j=0; j < 3; j++){
              printf("%d\t", matriz[i][j]);
          }
          printf("\n");
      }
      printf("\nA soma de todos os elementos e: %d\n", soma);
      
      return 0;
}
 
