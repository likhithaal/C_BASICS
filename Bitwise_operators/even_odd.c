#include <stdio.h>

int main(){
    int num=0;
    printf("Enter a number: \n");
    scanf("%d",&num);
    if(num & 1)
        printf("Num %d is an odd number\n",num);   //LSB is 1 for odd
    else
        printf("Num %d is an even number\n",num);
    return 0;
}
