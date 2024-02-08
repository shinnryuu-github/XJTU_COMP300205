#include <stdio.h>

int main(){
    int N, spe = 0;
    scanf("%d", &N);
    for (int i = 0; i < N - 1; i++){
        for (int k = 0; k < spe; k++)
            printf(" ");
        for (int j = 0; j < N; j++)
            printf("*");
        spe++;
        printf("\n");
    }
    for (int k = 0; k < spe; k++)
        printf(" ");
    for (int j = 0; j < N; j++)
        printf("*");
    return 0;
}