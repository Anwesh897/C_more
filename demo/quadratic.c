#include <stdio.h>
#include <math.h>
int main(){
    double a,b,c,discriminant,root1,root2,realPart,imaginaryPart;
    printf("Please enter the coefficinets of a,b,c :\n");
    scanf("%lf %lf %lf",&a,&b,&c);
    discriminant = b*b-4*a*c;
    if(discriminant>0){
        root1 = (-b+sqrt(discriminant))/(2*a);
        root2 = (-b-sqrt(discriminant))/(2*a);
        printf("root1 = %lf , root2 = %lf\n",root1,root2);
    }
    if(discriminant == 0){
        root1 = root2  = (-b)/(2*a);
        printf("root1 = root2 = %lf",root1);
    }
    if(discriminant < 0 ){
    realPart = (-b)/(2*a);
    imaginaryPart = sqrt(-discriminant)/(2*a);
    printf("root1 = %lf+%lfi, root2=%lf-%lfi",realPart,imaginaryPart,realPart,imaginaryPart);
    }
    return 0;
}