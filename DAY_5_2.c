#include <stdio.h>
#include <conio.h>

int main(){
    int num1,num2;
    char operators;
    clrscr();

    printf("Enter First Number: ");
    scanf("%d",&num1);
    printf("Enter Secound Number: ");
    scanf("%d",&num2);
    printf("Enter Operator: ");
    scanf("%c",&operators);

    if(operators=='+'){
        printf("%d + %d = %d",num1,num2,num1+num2);
    }
    else if(operators=='-'){
        printf("%d + %d = %d",num1,num2,num1-num2);
    }
    else if(operators=='/'){
        printf("%d + %d = %d",num1,num2,num1/num2);
    }
    else if(operators=='*'){
        printf("%d + %d = %d",num1,num2,num1*num2);
    }else{
        printf("Please Enter a valid Operator!");
    }
    getch();
    return 0;
}
