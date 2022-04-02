#include "project.h"

void matrixAddition(int mat1[N][N], int mat2[N][N], int mat3[N][N],int row1,int col1,int row2,int col2) {
        int i, j;
        if(row1==row2||col1==col2)
        {
        for (i = 0; i < row1; i++) {
                for (j = 0; j < col1; j++) {
                        mat3[i][j] = mat1[i][j] + mat2[i][j];
                }
        }
         dispmtx(mat3,row1,col1);
        }
        else
         printf("\n\tDimension mis-match\n");
         
  }

void matrixSub(int mat1[N][N], int mat2[N][N], int mat3[N][N],int row1,int col1,int row2,int col2) {
        int i, j;
        if(row1==row2||col1==col2)
        {
        for (i = 0; i < row1; i++) {
                for (j = 0; j < col1; j++) {
                        mat3[i][j] = mat1[i][j] - mat2[i][j];
                }
        }
         dispmtx(mat3,row1,col1);
        }
        else
         printf("\n\tDimension mis-match\n");
         
  }