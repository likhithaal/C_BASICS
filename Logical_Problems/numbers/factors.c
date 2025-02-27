#include <stdio.h>

void factors(int n);

int main()
{
    int num;
    printf("Enter the number: \n");
    scanf("%d",&num);

    factors(num);
    
    return 0;
}

void factors(int n){
    printf("factors of %d : \t",n);
    for (int i=1;i < n;i++){
        if(n % i == 0)
            printf("%d\t",i);
    }
}