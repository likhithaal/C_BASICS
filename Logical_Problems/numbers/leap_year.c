#include <stdio.h>

int main()
{
    int year=0;
    printf("Enter the year:");
    scanf("%d",&year);
    //div by 4 but not by 100     or     div by 400
    
    if(((year % 4 == 0) && (year % 100 != 0)) || year % 400 == 0)
        printf("Leap year\n");
    else
        printf("Not a leap year\n");
    
    return 0;
}