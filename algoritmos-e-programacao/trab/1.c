#include<stdio.h>

int main (){
    int matriz[3][3];
    int l,c,i;
    int vetorResultado[3] = {0,0,0};

    printf("===================================\n");
    for (l = 0; l < 3; l++){
        for (c = 0; c < 3; c++){
            printf("Digite o valor para L[%d] C[%d]", l,c);
            scanf("%d",&matriz[l][c]);
            vetorResultado[c] += matriz[l][c];
        }
    }

    printf("========== MATRIZ CRIADA ==========\n");
    for (l = 0; l < 3; l++){
        for (c = 0; c < 3; c++){
            printf("%d ",matriz[l][c]);
        }
        printf("\n");
    }
    printf("============ RESULTADO ============\n");
    for (i = 0; i < 3; i++){
        printf("%d ",vetorResultado[i]);
    }

    return 0;
}