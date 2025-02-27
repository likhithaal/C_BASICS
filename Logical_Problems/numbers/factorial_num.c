#include <stdio.h>

#define USE_RECURSSION  0

int factorial(int n);
int main()
{
    int num=0,res=0;
    printf("Enter the number: ");
    scanf("%d",&num);

    res = factorial(num);
    printf("Factorial of %d is %d\n",num,res);
    
    return 0;
}

int factorial(int n){
    int fact = 1;
    if (n == 0){
        fact = 1;
        return fact;
    }
    #if USE_RECURSSION
    fact = n * factorial(n - 1);
    #else
    for(int j=n;j>1;j--){
        fact = fact * j;
    }
    #endif
    return fact;
}
