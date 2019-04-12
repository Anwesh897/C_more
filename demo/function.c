#include <stdio.h>
int addNumbers(int a,int b);
int main(){
    int n1,n2,sum=0;
    printf("Enter a number:\n");
    scanf("%d %d",&n1,&n2);
    sum = addNumbers(n1,n2);
    printf("Sum = %d\n",sum);
    return 0;
}
int addNumbers(int a,int b){
    int result;
    result = a+b;
    return result;
}