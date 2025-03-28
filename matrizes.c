#include <stdio.h>

int main(){
    int a, b;
    printf("Insira as dimensoes da matriz A:");
    scanf("%d %d", &a, &b);

    int c, d;
    printf("Insira as dimensoes da matriz B:");
    scanf("\n%d %d", &c, &d);

    if (b != c){
        printf("***Nao eh possivel multiplicar essas matrizes, pois o numero de colunas da primeira matriz eh diferente do numero de linhas da segunda matriz***");
        return (1);
    }
    
    float C[a][d];

    int i, j;

    float A[a][b];
    float B[c][d];

    printf("Insira os elementos da matriz A:\n");
    for(i = 0; i < a; i++){
        for(j = 0; j < b; j++){
            printf("Elemento A[%d][%d]: ", i, j);
            scanf("%f", &A[i][j]);
        }
    }
    
    printf("Insira os elementos da matriz B:\n");
    for(i = 0; i < c; i++){
        for(j = 0; j < d; j++){
            printf("Elemento B[%d][%d]: ", i, j);
            scanf("%f", &B[i][j]);
        }
    }

    printf("\nMatriz A:\n");
    for(i = 0; i < a; i++){
        for(j = 0; j < b; j++){
            printf("%f ", A[i][j]);
        }
        printf("\n");
    }

    printf("\nMatriz B:\n");
    for(i = 0; i < c; i++){
        for(j = 0; j < d; j++){
            printf("%f ", B[i][j]);
        }
        printf("\n");
    }

    printf("----------------- \n");

    int r;

    for(i = 0; i < a; i++){
        for(j = 0; j < d; j++){
            C[i][j] = 0;
            for(r = 0; r < b; r++){
                C[i][j] += A[i][r] * B[r][j];
            }
        }
    }

    printf("Matriz resultante:\n");
    for(i = 0; i < a; i++){
        for(j = 0; j < d; j++){
            printf("%f ", C[i][j]);
        }
        printf("\n");
    }

    return 0;
}
