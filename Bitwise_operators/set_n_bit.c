#include <stdio.h>

int set_n_bit(int n,int p);

int main(){
    int num = 0,pos = 0;
    printf("Enter the number: \n");
    scanf("%d",&num);
    printf("Enter the position to set: \n");
    scanf("%d",&pos);
    num = set_n_bit(num,pos);
    printf("Number after set %d bit is %d\n",pos,num);
    return 0;
}

int set_n_bit(int n,int p){
    return n | (1 << p);       // OR (|) operator to set the bit
}