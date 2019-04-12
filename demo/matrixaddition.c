#include <stdio.h>
int main(){
    int i,j,m,n,matrix_1[10][10];
    int a,b,p,q,matrix_2[10][10];
    int sum=0,addition[10][10],k;
    printf("Please enter the size of matrix_1\n");
    scanf("%d %d",&m,&n);
    printf("Please enter the elements of matrix_1\n");
    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
        scanf("%d",&matrix_1[i][j]);
        }
    }
    

    printf("Please enter the size of matrix_2\n");
    scanf("%d %d",&p,&q);
    if(n!=p){
        printf("Matrix addition is not possible..!\n");
    }
    else{
    printf("Please enter the elements of matrix_2\n");    
    for(a=0;a<p;a++){
        for(b=0;b<q;b++){
        scanf("%d",&matrix_2[a][b]);
        }
    }
    
    for (i=0;i<m;i++){
        for(j=0;j<q;j++){
            for(k=0;k<p;k++){
            sum = matrix_1[i][k]+matrix_2[j][k];
            }
            addition[i][j]=sum;
            sum=0;
        }
    } 
    
    printf("Addition of the matrix is\n");
    for(i=0;i<m;i++){
        for(j=0;j<q;j++){
            printf("%d ",addition[i][j]);
            if(j==2){
                printf("\n");
            }
        }
    }
    }




    return 0;
}