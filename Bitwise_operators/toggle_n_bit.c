#include <stdio.h>

int toggle_bit(int n,int p);

int main(){
    int num = 0,pos = 0;
    printf("Enter the number: \n");
    scanf("%d",&num);
    printf("Enter the position to toggle: \n");
    scanf("%d",&pos);
    num = toggle_bit(num,pos);
    printf("Number after toggle: %d\n",num);
    return 0;
}

int toggle_bit(int n,int p){
    return n ^ (1 << p);      //XOR (^) operator to toggle the bit
}