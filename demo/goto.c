#include <stdio.h>
int main(){
    const int maxInput = 5;
    int i;
    double average, sum=0,number;
    for(i=1;i<maxInput;i++){
    printf("%d.Enter a number:\n",i);
    scanf("%lf",&number);
    if(number<0.0)
        goto jump;
        sum+=number;
    }
    jump:
    average=sum/(i-1);
    printf("Sum = %.2f\n",sum);
    printf("Average = %.2f\n",average);
    
    return 0;
}