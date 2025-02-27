#include <stdio.h>

int calculate(int n1,int n2,char op);

int main()
{
    int num1=0,num2=0,res=0;
    char oper=0;
    printf("Enter two numbers: \n");
    scanf("%d %d",&num1,&num2);
    
    printf("Enter any one of the operator ( + , - , * , / )\n");
    scanf(" %c",&oper);   //added space to skip newline charecter
    
    res = calculate(num1,num2,oper);
    printf("Result : %d\n",res);
    
    return 0;
}

int calculate(int n1,int n2,char op){
    int ans=0;
    switch(op){
        case '+':
            ans = n1 + n2;
            break;
        case '-':
            ans = n1 - n2;
            break;
        case '*':
            ans = n1 * n2;
            break;
        case '/':
            ans = n1 / n2;
            break;
        default: 
            ans = 0;
            printf("Error! choose the right operator\n");
            break;
    }
    return ans;
}