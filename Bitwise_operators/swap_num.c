#include <stdio.h>

int main(){
    int a=0,b=0;
    printf("Enter 2 numbers: \n");
    scanf("%d %d",&a,&b);

    a = a ^ b;
    b = a ^ b;
    a = a ^ b;

    printf("After swap the numbers are a = %d b = %d\n",a,b);
    return 0;
}
