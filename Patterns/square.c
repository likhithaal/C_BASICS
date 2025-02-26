#include <stdio.h>

void print_pattern_square(int length);

int main()
{
    int len = 0;
    printf("enter the length\n");
    scanf("%d",&len);
    print_pattern_square(len);

    return 0;
}

void print_pattern_square(int length)
{
    for(int i=0;i<length;i++)
    {
        for(int j=0;j<length;j++)
        {
            printf("*");
        }
        printf("\n");
    }
}