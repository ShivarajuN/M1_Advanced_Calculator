#include "project.h"


int main()
{
    int mode,flag=1,flag1=1,flag2=1,flag3=1;
    int choice1,choice2,choice3;
    int a,b,row1,col1,row2,col2;
    complex_t c1,c2,result;
    int mat1[N][N],mat2[N][N],mat3[N][N];
    int res;

      menu :
        system("clear");//for  windows("cls")
        displayMenu();
        if(flag==1)
                printf("\tEnter your chioce for mode : ");
        else{
                printf("\tInvalid chioce Enter your choice correctly : ");
                flag=1;
                }
        scanf("%d",&mode);
        while(1){
            switch(mode)
                {
                case 1:
                      a:
                        //system("clear");
                        displaySimple();
                        if(flag1==1)
                                printf("\n\tEnter your chioce for operation: ");
                        else
                        {
                                printf("\n\tInvalid chioce Enter your choice correctly : ");
                                flag1=1;
                        }
                        scanf("%d",&choice1);

                        switch(choice1)
                        {
                                case 1:
                                        system("clear");
                                        printf("\n\tEnter your first number: ");
                                        scanf("%d",&a);
                                        printf("\n\tEnter your second number: ");
                                        scanf("%d",&b);
                                        printf("\n\tResult : %d\n",add(a,b)); 
                                
                                        break;
                                case 2:
                                        system("clear");
                                        printf("\n\tEnter your first number: ");
                                        scanf("%d",&a);
                                        printf("\n\tEnter your second number: ");
                                        scanf("%d",&b);
                                        printf("\n\tResult : %d\n",sub(a,b));
                                        break;
                                
                                case 3:
                                        system("clear");
                                        printf("\n\tEnter your first number: ");
                                        scanf("%d",&a);
                                        printf("\n\tEnter your second number: ");
                                        scanf("%d",&b);
                                        printf("\n\tResult : %d \n",mul(a,b));
                                        break;
                                
                                case 4:
                                        system("clear");
                                        printf("\n\tEnter your first number: ");
                                        scanf("%d",&a);
                                        printf("\n\tEnter your second number: ");
                                        scanf("%d",&b);
                                        if(divn(a,b)!=-1)
                                            printf("\n\tResult : %d\n",divn(a,b));
                                        else
                                            printf("\n\tINFINTE\n");
                                        
                                        break;
                                case 5:

                                       goto menu;

                                default:
                                        flag1=0;
                                        goto a;

                        }
                        break;
                        
                case 2:
                        b:
                        displayComplex();
                        if(flag2==1)
                                printf("\n\tEnter your chioce for operation: ");
                        else
                        {
                                printf("\n\tInvalid chioce Enter your choice correctly : ");
                                flag2=1;
                        }
                        scanf("%d",&choice2);

                        switch(choice2)
                        {
                                case 1:
                                        system("clear");
                                        printf("\n\tEnter your first number\n");
                                        printf("\n real and imginary part seperated with space : ");
                                        scanf("%f %f",&c1.real,&c1.img);
                                        printf("\n\tEnter your second number: \n");
                                        printf("\n real and imginary part seperated with space : ");
                                        scanf("%f %f",&c2.real,&c2.img);
                                        result=complex_sum(c1,c2);
                                        printf("\n\tResult : %f+i%f \n",result.real,result.img); 
                                
                                        break;
                                case 2:
                                        system("clear");
                                        printf("\n\tEnter your first number\n");
                                        printf("\n real and imginary part seperated with space : ");
                                        scanf("%f %f",&c1.real,&c1.img);
                                        printf("\n\tEnter your second number: \n");
                                        printf("\n real and imginary part seperated with space : ");
                                        scanf("%f %f",&c2.real,&c2.img);
                                        result=complex_difference(c1,c2);
                                        printf("\n\tResult : %f+i%f \n",result.real,result.img); 
                                        break;
                                
                                case 3:
                                        system("clear");
                                        printf("\n\tEnter your first number\n");
                                        printf("\n real and imginary part seperated with space : ");
                                        scanf("%f %f",&c1.real,&c1.img);
                                        printf("\n\tEnter your second number: \n");
                                        printf("\n real and imginary part seperated with space : ");
                                        scanf("%f %f",&c2.real,&c2.img);
                                        result=complex_multiply(c1,c2);
                                        printf("\n\tResult : %f+i%f \n",result.real,result.img);

                                        break;
                                
                                case 4:
                                        system("clear");
                                        printf("\n\tEnter your first number\n");
                                        printf("\n real and imginary part seperated with space : ");
                                        scanf("%f %f",&c1.real,&c1.img);
                                        printf("\n\tEnter your second number: \n");
                                        printf("\n real and imginary part seperated with space : ");
                                        scanf("%f %f",&c2.real,&c2.img);
                                        result=complex_difference(c1,c2);
                                        printf("\n\tResult : %f+i%f \n",result.real,result.img); 
                                        
                                        
                                        break;
                                case 5:

                                       goto menu;

                                default:
                                        flag2=0;
                                        goto b;
                        }
                        break;
                
                case 3:
                        c:
                        displayMatrix();
                        if(flag3==1)
                                printf("\n\tEnter your chioce for operation: ");
                        else
                        {
                                printf("\n\tInvalid chioce Enter your choice correctly : ");
                                flag3=1;
                        }
                        scanf("%d",&choice3);
                        
                        switch(choice3)
                        {
                                case 1:
                                        system("clear");
                                        printf("\n\tEnter your first square matrix \n");
                                        printf("\n Enter row and column seperated with space : ");
                                        scanf("%d %d",&row1,&col1);

                                        printf("\n Enter each row element seperated with space : \n");
                                        remtx(mat1,row1,col1);

                                        res=determinantOfMatrix(mat1, row1);
                                        printf("\n\tDeterminant of matrix : %d\n",res);
                                
                                        break;
                                case 2:
                                        system("clear");
                                        printf("\n\tEnter your first square matrix \n");
                                        printf("\n Enter row and column seperated with space : ");
                                        scanf("%d %d",&row1,&col1);

                                        printf("\n Enter each row element seperated with space : \n");
                                        remtx(mat1,row1,col1);
                                        
                                        printf("\n\tEnter your second  square matrix \n");
                                        printf("\n Enter row and column seperated with space : ");
                                        scanf("%d %d",&row2,&col2);

                                        printf("\n Enter each row element seperated with space : \n");
                                        remtx(mat2,row2,col2);

                                        printf("\n\tResultant matrix\n");
                                        matrixAddition(mat1,mat2,mat3,row1,col1,row2,col2);
                                        

                                        break;
                                
                                case 3:
                                        system("clear");
                                        printf("\n\tEnter your first square matrix \n");
                                        printf("\n Enter row and column seperated with space : ");
                                        scanf("%d %d",&row1,&col1);

                                        printf("\n Enter each row element seperated with space : \n");
                                        remtx(mat1,row1,col1);
                                        
                                        printf("\n\tEnter your second  square matrix \n");
                                        printf("\n Enter row and column seperated with space : ");
                                        scanf("%d %d",&row2,&col2);

                                        printf("\n Enter each row element seperated with space : \n");
                                        remtx(mat2,row2,col2);

                                        printf("\n\tResultant matrix\n");
                                        matrixSub(mat1,mat2,mat3,row1,col1,row2,col2);

                                        break;
                                
                                case 4:
                                        
                                        system("clear");
                                        printf("\n\tEnter your first square matrix \n");
                                        printf("\n Enter row and column seperated with space : ");
                                        scanf("%d %d",&row1,&col1);

                                        printf("\n Enter each row element seperated with space : \n");
                                        remtx(mat1,row1,col1);
                                        
                                        printf("\n\tEnter your second  square matrix \n");
                                        printf("\n Enter row and column seperated with space : ");
                                        scanf("%d %d",&row2,&col2);

                                        printf("\n Enter each row element seperated with space : \n");
                                        remtx(mat2,row2,col2);

                                        printf("\n\tResultant matrix\n");
                                        multiplyMatrices(mat1,mat2,mat3,row1,col1,row2,col2);
                                        
                                        
                                        
                                        break;
                                case 5:

                                       goto menu;

                                default:
                                        flag2=0;
                                        goto c;
                        }

                        break;
                
                case 0:
                        exit(0);

                default:
                    flag1=0;               
                    
                    goto menu;
                    
            }

        }



    return 0;
}