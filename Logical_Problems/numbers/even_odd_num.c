#include <stdio.h>

int even_odd(int n);

int main()
{
    int num;
    printf("Enter the number: \n");
    scanf("%d",&num);

    if(even_odd(num))
        printf("Even number\n");
    else
        printf("Odd number\n");
    
    return 0;
}

int even_odd(int n){
    int res=0;
    if(n % 2 == 0)
        res = 1;
    else 
        res = 0;
    return res;
    
}