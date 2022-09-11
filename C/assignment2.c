// 1. MATRIX ADDITION
// #include <stdio.h>
// int main()
// {
//     int m, n;
//     printf("Enter row and column number for matrices.\n");
//     scanf("%d %d",&m,&n);
//     int i, j;
//     int mat1[m][n], mat2[m][n], mat3[m][n];
//     printf("Matrix 1\n");
//     for(i = 0; i < m; i++)
//     {   
//         printf("Enter %d elements for row %d:\t",n,i+1);
//         for(j = 0; j < n; j++)
//         scanf("%d",&mat1[i][j]);
//     }
//     printf("\nMatrix 2\n");
//     for(i = 0; i < n; i++)
//     {   printf("Enter %d elements for row %d:\t",n,i+1);
//         for(j = 0; j < n; j++)
//         scanf("%d",&mat2[i][j]);
//     }

//     for(i = 0; i < m; i++)
//     {
//         for(j = 0; j < n; j++)
//         {
//         mat3[i][j] = mat1[i][j] + mat2[i][j];
//         }
//     }

//     printf("\nSum of the two matrices is:\n");
//     for(i = 0; i < m; i++)
//     {
//         for(j = 0; j < n; j++)
//         printf("%d ", mat3[i][j]);
//         printf("\n");
//     }

//     return 0;
// }

// 2. MATRIX MULTIPLICATION
// #include <stdio.h>
// int main()
// {
//     int m, n;
//     scanf("%d %d",&m,&n);
//     int i, j;
//     int mat1[m][n], mat2[m][n], mat3[m][n];
//     for(i = 0; i < m; i++)
//     {
//         for(j = 0; j < n; j++)
//         scanf("%d",&mat1[i][j]);
//     }
//     for(i = 0; i < n; i++)
//     {
//         for(j = 0; j < n; j++)
//         scanf("%d",&mat2[i][j]);
//     }
//     if(m==n){
//            for(i = 0; i < m; i++)
//         {
//             for(j = 0; j < n; j++)
//             {
//             mat3[i][j] = mat1[i][j] * mat2[i][j];
//             }
//         }
//     }
//     else{
//         printf("Not able to do perform Multiplication");
//     }
//     for(i = 0; i < m; i++)
//     {
//         for(j = 0; j < n; j++)
//         printf("%d ", mat3[i][j]);
//         printf("\n");
//     }

//     return 0;
// }

// 2. MATRIX MULTIPLICATION.
#include<stdio.h>
int main(){
    int r1,c1,r2,c2,i,j,k,sum=0;
    printf("Enter dimensions of Matrix 1: ");
    scanf("%d%d",&r1,&c1);
    printf("Enter dimensions of Matrix 2: ");
    scanf("%d%d",&r2,&c2);
    int m1[10][10], m2[10][10], m3[10][10];

    if(r2!=c1){         //Rule for matrix multipllication.
        printf("Matrices not compatible for multiplication.");


    }
    else{
        printf("\nMatrix 1\n");
        for(i=0;i<r1;i++){
            printf("Enter %d elements for row %d:\t",c1,i+1);
            for(j=0;j<c1;j++)
            scanf("%d",&m1[i][j]);
        }
        printf("\nMatrix 2\n");
        for(i=0;i<r2;i++){
            printf("Enter %d elements for row %d:\t",c2,i+1);
            for(j=0;j<c2;j++)
            scanf("%d",&m1[i][j]);
        }
        for(i=0;i<r1;i++){
            for(j=0;j<c2;j++){
                for(k=0;k<r2;k++){
                    sum= sum + (m1[i][k]*m2[k][j]); 
                }
                m3[i][j] = sum;
                sum=0;
            
            }
            
        }
        printf("\nMultiplication of two matrices is:\n");
        for(i=0;i<r1;i++)    
        {    
            for(j=0;j<c2;j++){
                printf("%d",m3[i][j]); 
            } 
            printf("\n");   
               
               
        } 

    }
    return 0;

} 
