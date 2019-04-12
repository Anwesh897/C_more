#include <stdio.h>
int main(){
    int i,j,m,n,k,p,q,a,b,matrix_2[10][10],sum=0,subtraction[10][10],matrix_1[10][10];
    printf("Please enter the size of first matrix\n");
    scanf("%d %d",&m,&n);
    printf("Please enter the matrix_1 elements\n");
    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            scanf("%d",&matrix_1[i][j]);
        }
    }
    printf("Please enter the size of second matrix\n");
    scanf("%d %d",&p,&q);
    printf("Please enter the matrix_2 elements\n");
    if(n!=p){
        printf("Matrix subtraction is not possible\n");
    }
    else{
    for(a=0;a<p;a++){
        for(b=0;b<q;b++){
            scanf("%d",&matrix_2[a][b]);
        }
    }
    for(i=0;i<m;i++){
        for(j=0;j<q;j++){
            for(k=0;k<p;k++){
            sum =matrix_1[i][k]-matrix_2[j][k];
            }
            subtraction[i][j]=sum;
            sum=0;
        }
    }
    printf("Matrix Subtraction is\n");
    for(i=0;i<m;i++){
        for(j=0;j<q;j++){
            printf("%d ",subtraction[i][j]);
            if(j==2){
                printf("\n");
            }
        }
    }

    }
    return 0;
}