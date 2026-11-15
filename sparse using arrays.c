#include <stdio.h>

int main() {
    int matrix[4][5] = {
        {0, 0, 3, 0, 4},
        {0, 0, 0, 0, 0},
        {0, 2, 0, 0, 0},
        {7, 0, 0, 0, 0}
    };
    
    int nonZeroCount = 0;
    for (int i = 0; i < 4; i++)
        for (int j = 0; j < 5; j++)
            if (matrix[i][j] != 0) nonZeroCount++;
            
    int sparse[nonZeroCount + 1][3];
    sparse[0][0] = 4; sparse[0][1] = 5; sparse[0][2] = nonZeroCount;
    
    int k = 1;
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 5; j++) {
            if (matrix[i][j] != 0) {
                sparse[k][0] = i;
                sparse[k][1] = j;
                sparse[k][2] = matrix[i][j];
                k++;
            }
        }
    }

    printf("Sparse Triplet Representation:\nRow\tCol\tValue\n");
    for (int i = 0; i <= nonZeroCount; i++)
        printf("%d\t%d\t%d\n", sparse[i][0], sparse[i][1], sparse[i][2]);
    return 0;
}