#include <stdio.h>
int main() {
    int matrix[3][2];
    int transposeMatrix[2][3];
    int result[3][3] = {0};
    printf("Enter the elements of the 3x2 matrix:-\n");
    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 2; ++j)
		 {
		 	printf("Enter the elements of the [%d][%d]-",(i+1),(j+1));
            scanf("%d", &matrix[i][j]);
        }
    }
    printf("\nOriginal Matrix:-\n");
    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 2; ++j) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
    printf("\nTranspose Matrix:\n");
    for (int i = 0; i < 2; ++i) {
        for (int j = 0; j < 3; ++j) 
		{
            transposeMatrix[i][j] = matrix[j][i];
            printf("%d ", transposeMatrix[i][j]);
        }
        printf("\n");
    }
    printf("\nResult of multiplication:\n");
    for (int i = 0; i < 3; ++i) 
	{
        for (int j = 0; j < 3; ++j) 
		{
            for (int k = 0; k < 2; ++k) 
			{
                result[i][j] += matrix[i][k] * transposeMatrix[k][j];
            }
            printf("%d ", result[i][j]);
        }
        printf("\n");
    }

    return 0;
}
