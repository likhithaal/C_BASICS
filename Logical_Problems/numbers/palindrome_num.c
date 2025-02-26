#include <stdio.h>

int isPalindrome(int num);
int main()
{
    int number = 0;
    printf("Enter the number\n");
    scanf("%d",&number);
    if(isPalindrome(number))
        printf("Palindrome\n");
    else
        printf("Not palindrome\n");
    return 0;
}

int isPalindrome(int num)
{
    int original_num = num,reverse_num = 0,remaind = 0;
    while(num > 0)
    {
        remaind = num % 10;
        reverse_num = reverse_num * 10 + remaind;
        num = num/10;
    }
    return original_num == reverse_num;
}