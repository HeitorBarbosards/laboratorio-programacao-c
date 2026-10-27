#include <stdio.h>

int main() {
    int matriz[2][2];
    int i, j;

    printf("Digite 4 valores inteiros para preencher a matriz 2x2:\n");

    
    for (i = 0; i < 2; i++) {
        for (j = 0; j < 2; j++) {
            printf("Elemento [%d][%d]: ", i, j);
            scanf("%d", &matriz[i][j]);
        }
    }

    printf("\nMatriz 2x2 digitada:\n");

    
    for (i = 0; i < 2; i++) {
        for (j = 0; j < 2; j++) {
            printf("%d\t", matriz[i][j]);
        }
        printf("\n");
    }

    return 0;
}
