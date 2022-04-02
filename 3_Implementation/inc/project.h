/**
 * @file project.h
 * @author ShivrajuN
 * @brief Complex structure definition
 * @version 0.1
 * @date 
 * 
 * @copyright Copyright (c) 2021
 * 
 * 
 */

#ifndef __PROJECT_H__
#define __PROJECT_H__

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "math.h"
#include <time.h>
#include "complex.h"

#define N 4



//function related to displaying content
void displayMenu();
void displaySimple();
void displayComplex();
void displayMatrix();

//function related to simple calculator
int add(int a,int b);
int sub(int a,int b);
int mul(int a,int b);
int divn(int a,int b);

//function related to complex calculator
complex_t  complex_sum(complex_t c1,complex_t c2);
complex_t  complex_difference(complex_t c1,complex_t c2);
complex_t  complex_multiply(complex_t c1,complex_t c2);
complex_t  complex_divide(complex_t c1,complex_t c2);

//functon related to matrix calulator
void remtx(int mat[N][N],int row ,int col);
void getCofactor(int mat[N][N], int temp[N][N], int p,int q, int n);
int determinantOfMatrix(int mat[N][N], int n);
void dispmtx(int mat[N][N], int row, int col);
void matrixAddition(int mat1[N][N], int mat2[N][N], int mat3[N][N],int row1,int col1,int row2,int col2);
void matrixSub(int mat1[N][N], int mat2[N][N], int mat3[N][N],int row1,int col1,int row2,int col2);
void multiplyMatrices(int firstMatrix[N][N], int secondMatrix[N][N], int mult[N][N], int rowFirst, int columnFirst, int rowSecond, int columnSecond);










#endif 
