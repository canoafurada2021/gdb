#include <stdio.h>

void preencheMatriz(int MAT[3][3]){
    int i, j;
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            printf("Digite valor para a posição %d, %d: ", i, j);
            scanf("%d", &MAT[i][j]);
        }
    }
}

void diagonalPrincipal(int MAT[3][3]){
  int i;
  for(i=0; i<3; i++){
            scanf("%d", &MAT[i][i]);

    }
}

int main(void) {
    int A[3][3];
    preencheMatriz(A);
    int i, j;
    printf("\nImprimindo matriz formatada");
    for(i=0;i<3;i++){
        printf("\n");
        for(j=0;j<3;j++){
            printf("%d ", A[i][j]);
        }
      printf("\n Diagonal principal: \n");
for(i=0; i<3; i++){
        printf("\n");
for(j=0;j<3;j++){
  diagonalPrincipal(A);

  printf("%d ", A[i][j]);
        }

}


    }
    return 0;
}