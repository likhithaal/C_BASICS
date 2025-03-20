#include <stdio.h>

int count_set_bits(int n);

int main(){
    int num = 0,count = 0;
    printf("Enter thr number: \n");
    scanf("%d",&num);
    count = count_set_bits(num);
    printf("The number of set bits in %d is %d\n",num,count);
    return 0;
}

int count_set_bits(int n){
    int c = 0;
    while(n){
        c += n & 1;
        n >>= 1;
    }
    return c;
}
