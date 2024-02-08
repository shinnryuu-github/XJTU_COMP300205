#include <stdio.h>

int main(){
    int matrix[3][5], row_min[3], col_min[5], max = 0;
    for (int i = 0; i < 3; i++){
        for (int j = 0; j < 5; j++)
            scanf("%d", &matrix[i][j]);
    }
    for (int i = 0; i < 3; i++){
        int min = matrix[i][0];
        for (int j = 0; j < 5; j++){
            if (matrix[i][j] < min)
                min = matrix[i][j];
        }
        row_min[i] = min;
    }
    for (int i = 0; i < 5; i++){
        int min = matrix[0][i];
        for (int j = 0; j < 3; j++){
            if (matrix[j][i] < min)
                min = matrix[j][i];
        }
        col_min[i] = min;
    }
    for (int i = 0; i < 3; i++){
        if (row_min[i] > max)
            max = row_min[i];
    }
    for (int j = 0; j < 5; j++){
        if (col_min[j] > max)
            max = col_min[j];
    }
    printf("%d", max);
}