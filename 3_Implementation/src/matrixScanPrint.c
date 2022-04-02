#include "project.h"

void dispmtx(int mat[N][N], int row, int col)
{
    for (int i = 0; i < row; i++)
    {
        printf("\n\t[");
        for (int j = 0; j < col; j++)
            printf(" %d ", mat[i][j]);
        printf("]\n");
    }
}
void remtx(int mat[N][N],int row ,int col)
{
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
            scanf("%d", &mat[i][j]);
    }
}