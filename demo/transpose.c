#include <stdio.h>
int main(){
    int i,j,m,n,k,matrix[10][10];
    printf("Please enter the size of the matrix\n");
    scanf("%d %d",&m,&n);
    printf("Please enter the matrix elements\n");
    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            scanf("%d",&matrix[i][j]);
        }
    }
    printf("Transpose of the matrix is:\n");
    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            printf("%d ",matrix[j][i]);
            if(j==2){
            printf("\n");
            }
        }
    }
    

    return 0;
}