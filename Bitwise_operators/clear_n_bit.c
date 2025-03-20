#include <stdio.h>

int clear_bit(int n,int p);

int main(){
    int num = 0,pos = 0;
    printf("Enter the number: \n");
    scanf("%d",&num);
    printf("Enter the position to clear \n");
    scanf("%d",&pos);
    num = clear_bit(num,pos);
    printf("Number after clearing %d bit: %d\n",pos,num);
    return 0;
}

int clear_bit(int n,int p){
    return n & ~(1 << p);      //AND (&) operator with ~1 to clear
}