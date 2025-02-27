#include <stdio.h>
#include <math.h>

int is_armstrong(int n);

int main()
{
    //Armstrong number: Digit power sum [eg: 153]
    //(sum of digit raised to the power of number of digits)
    
    int num=0;
    
    printf("Enter the number: \n");
    scanf("%d",&num);
    
    if(is_armstrong(num))
        printf("Armstrong number\n");
    else
        printf("Not Armstrong number\n");
    
    return 0;
}

int is_armstrong(int n)
{
    int count=0,originalNum=0,rem=0,result=0;
    
    originalNum = n;
    while(n>0)
    {
        n = n/10;
        ++count;
    }
    n = originalNum;
    
    while(n>0)
    {
        rem = n % 10;
        result += pow(rem,count);
        n = n/10;
    } 
    
    return originalNum == result;
    
}