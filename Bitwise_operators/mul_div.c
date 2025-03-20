#include <stdio.h>

int mul_num_2(int n);
int div_num_2(int n);

int main(){
    int num = 0,op = 0;
    printf("Enter the number: \n");
    scanf("%d",&num);
    printf("Enter the choice (1: mul and 2: div)\n");
    scanf("%d",&op);
    switch(op){
        case 1:
            num = mul_num_2(num);
            break;
        case 2:
            num = div_num_2(num);
            break;
        default:
            printf("Invalid option\n");
            return -1;
    }
    printf("Number after operation is %d\n",num);
    return 0;
}

int mul_num_2(int n){
    return n << 1;     // Left shift by 1 to mul by 2
}

int div_num_2(int n){
    return n >> 1;    // Right shift by 1 to div by 2
}