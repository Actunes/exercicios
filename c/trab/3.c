#include <stdio.h>
#include <string.h>
#include <stdbool.h>

bool encaixa(int a, int b){
    char aS[10];
    char bS[10];
    int i,i2;

    sprintf(aS, "%d", a);
    sprintf(bS, "%d", b);

    int aL = strlen(aS);
    int bL = strlen(bS);

    for (i = aL - 1, i2 = bL - 1; i2 >= 0; i--, i2--) {
        if (aS[i] != bS[i2]) {
            return false;
        }
    }
    return true;
}

int main (){
    int a,b;
    printf("===================================\n");
    printf("Digite o valor de A:");
    scanf("%d", &a);
    printf("Digite o valor de B:");
    scanf("%d", &b);

    if(encaixa(a,b)){
        printf("B encaixa no A\n");
    }else {
        printf("B nao encaixa no A\n");
    }

    printf("============== ITEM2 =============\n");
    if(a < b && encaixa(b, a)) {
        printf("A encaixa em B");
    }else if(b < a && encaixa(a, b)) {
        printf("B encaixa em A");
    }else {
        printf("Nenhum valor encaixa.");
    }

    return 0;
}