#include <stdio.h>
#include <math.h>
int main(){
    int  n,integrate;
    printf("Integration of x to the power n w.r.t dx , without limits:\n");
    printf("Please enter n:\n");
    scanf("%d",&n);
    integrate = n+1;
    printf("Integration = x^%d/%d + C\n",integrate,integrate);

    return 0 ;
}