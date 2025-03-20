#include <stdio.h>

int check_bit_set(int n,int p);

int main(){
    int num = 0,pos = 0;
    printf("Enter the number: \n");
    scanf("%d",&num);
    printf("Enter the position to check\n");
    scanf("%d",&pos);
    if(check_bit_set(num,pos))
        printf("%dth bit is set\n",pos);
    else
        printf("%dth bit is not set\n",pos);
    return 0;
}

int check_bit_set(int n,int p){
    return (n >> p & 1);    
}