# TEST PLAN:

## Table no: High level test plan

| **Test ID** | **Description**                                              | **Exp I/P** | **Exp O/P** | **Actual Out** |**Type Of Test**  |    
|-------------|--------------------------------------------------------------|------------|-------------|----------------|------------------|
|  H_01       |tested addition of two normal numbers|  number1,number2| 50|50|Technical |
|  H_02       |tested subtraction of two normal numbers|   number1,number2    |-1|-1|Technical   |
|  H_03       |tested multiplication of two normal numbers|   number1,number2 |44|44 |Technical |
|  H_04       |tested divsion of two normal numbers|   number1,number2        |5|5|Technical |
|  H_05       |tested addition of two complex numbers|  number1,number2  |2.000 2.000|2.000 2.000|Technical |
|  H_06       |tested subtraction of two complex numbers|  number1,number2|1.000 3.000|1.000 3.000|Technical   |
|  H_07      |tested multiplication of two complex numbers|  number1,number2|-5.000 10.000|-5.000 10.000|Technical |
|  H_08       |tested division of two complex numbers|  number1,number2|0.440 0.080|0.440 0.080|Technical |
|  H_09      |tested determinant of a matrix|  matrix1, n|0|0|Technical 


## Table no: Low level test plan

| **Test ID** | **HLT ID** |**Description**                                              | **Exp IN** | **Exp OUT** | **Actual Out** |**Type Of Test**  |    
|-------------|------------|--------------------------------------------------------------|------------|-------------|----------------|------------------|
|  L_01       | H_09|Tested on functions which accept input matrix|  matrix1,row,col|SUCCESS|SUCCESS |Technical |
|  L_02       | H_09|Tested on functions which displays matrix |  matrix1, row ,col|SUCCESS|SUCCESS |Technical |
|  L_03       | H_09 |Tested on function which returns an integer value|  matrix1,n  |-2|-2|Technical |

