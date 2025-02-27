#include <stdio.h>

int get_hcf(int n1,int n2);
int main()
{
    int num1=0,num2=0,hcf=0,lcm=0;
    printf("Enter 2 numbers:\n");
    scanf("%d %d",&num1,&num2);
    
    hcf=get_hcf(num1,num2);

    lcm = (num1 * num2) / hcf;
    
    printf("LCM: %d\t HCF: %d\n",lcm,hcf);
    
    return 0;
}

int get_hcf(int n1,int n2)
{
    int max=0,res=0;
    max=n2>n1 ? n2 : n1;
    for(int i=max;i>=1;i--)
    {
        if((n1 % i == 0) && (n2 % i == 0))
        {
            res = i;
            break;
        }
    }
    return res;
}