#include <stdio.h>

int factorial(int n);
int is_strong(int m);

int main()
{
    //strong num: sum of factorial of digit is same as the number [eg: 145]
    int num=0,res=0;
    printf("Enter the number: ");
    scanf("%d",&num);

    if(is_strong(num))
        printf("strong number\n");
    else 
        printf("Not a strong number\n");
    
    return 0;
}


int is_strong(int m)
{
    int origin_num=0,rem=0,res=0;
    origin_num = m;
    while(m > 0)
    {
        rem = m % 10;
        res += factorial(rem);
        m = m /10;
    }
    return res == origin_num;
    
}

int factorial(int n){
    int fact = 1;
    if (n == 0){
        fact = 1;
        return fact;
    }
    for(int j=n; j>1;j--)
    {
        fact = fact * j;
    }
    return fact;
}