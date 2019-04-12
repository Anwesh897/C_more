#include <stdio.h>
int main(){
    char operator;
    int firstNumber, secondNumber;
    printf("Please enter an operator (+,-,*,/): \n");
    scanf("%c",&operator);
    printf("Please enter firstNumber & secondNumber:\n");
    scanf("%d %d",&firstNumber,&secondNumber);
    switch(operator){
        case '+':
        printf("%d+%d = %d\n",firstNumber,secondNumber,firstNumber+secondNumber);
        break;
        case '-':
        printf("%d-%d = %d\n",firstNumber,secondNumber,firstNumber-secondNumber);
        break;
        case '*':
        printf("%d*%d = %d\n",firstNumber,secondNumber,firstNumber*secondNumber);
        break;
        case '/':
        printf("%d/%d = %d\n",firstNumber,secondNumber,firstNumber/secondNumber);
        break;
        default:
        printf("Error! operator is not correct \n");
    }
    return 0;
}