/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    int i,j=0,k,m,n;
    printf("enter the no. of row of matrix:");
    scanf("%d",&m);
    printf("enter the no. of column of matrix:");
    scanf("%d",&n);
    int  A[m][n],B[m],C[n];
    printf("enter elements in matrix %dX%d:",m,n);
    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            scanf("%d",&A[i][j]);
        }
    }

    printf("the matrix:->");
for(i=0;i<m;i++){printf("\n");
        for(j=0;j<n;j++){
            printf("%d\t",A[i][j]);
        }
    }
    int max, min;
for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            
            max=min=A[i][j];
            
            for(k=0;k<m;k++){
                if(A[i][k]<min){
                    min=A[i][k];
                    B[i]=min;
                }
            
            }
            
            for(k=0;k<n;k++){
                if(A[k][j]>max){
                    max=A[k][j];
                    C[j]=max;
                }
            
            }
       
        }
    
    
}
  int count=0;
   printf("\n");
for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            if(B[i]==C[j]){
                printf("the saddal point of matrix is %d",B[i]);
            
    count=1;
        }}}

    if(count==0){
        
    printf("NO saddal point exit in matrix!!!!\n");}
}