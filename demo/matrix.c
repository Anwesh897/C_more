#include <stdio.h>
int main(){
    int i,j,m,n,matrix_1[3][3];
    int a,b,p,q,matrix_2[3][3];
    int k,multiply[3][3],sum=0;
    printf("Please enter size of the first matrix\n");
    scanf("%d %d",&m,&n);
    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            printf("Please enter the elements of matrix_1[%d][%d]=",i,j);
            scanf("%d",&matrix_1[i][j]);
        }
    }
    printf("Your matrix elements are\n");
    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            printf("%d   ",matrix_1[i][j]);
            if(j==2){
                printf("\n");
            }
        }
    }

    printf("Please enter size of the second matrix\n");
    scanf("%d %d",&p,&q);
    if(n!=p){
        printf("Matrix multiplication is not possible..!\n");
    }
    else{
     for(a=0;a<p;a++){
         for(b=0;b<q;b++){
             printf("Please enter the elements of matrix_2[%d][%d]=",a,b);
             scanf("%d",&matrix_2[a][b]);
         }
     }
     printf("Your matrix elements are\n");
     for(a=0;a<p;a++){
         for(b=0;b<q;b++){
             printf("%d   ",matrix_2[a][b]);
             if(b==2){
                 printf("\n");
             }
         }
     }

      for(i=0;i<m;i++){
        for(j=0;j<q;j++){
            for(k=0;k<p;k++){
            sum += matrix_1[i][k]*matrix_2[k][j];
            }
            multiply[i][j]= sum;
            sum =0;
        }
    }
    printf("Product of the matrices are\n");
    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            printf("%d   ",multiply[i][j]);
            if(j==2){
                printf("\n");
            }
        }
    }

    }


    return 0;
}