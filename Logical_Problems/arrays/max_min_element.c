#include <stdio.h>

int max_element(int *buff,int size);
int min_element(int *buff,int size);

int main()
{
    int arr_size=0,max=0,min=0;
    printf("Enter the size of the array\n");
    scanf("%d",&arr_size);
    printf("Enter the array elements\n");
    int arr[] = {0};
    for(int i=0;i<arr_size;i++)
    {
        scanf("%d",&arr[i]);
    }
    
    max = max_element(arr,arr_size);
    min = min_element(arr,arr_size);
    printf("Max : %d\t Min : %d\n",max,min);
    
    return 0;
}

int max_element(int *buff,int size)
{
    int temp=0;
    temp = buff[0];
    for(int j=0;j<size;j++)
    {
        if(buff[j] > temp)
            temp = buff[j];
    }
    return temp;
}

int min_element(int *buff,int size)
{
    int temp=0;
    temp = buff[0];
    for(int j=0;j<size;j++)
    {
        if(buff[j] < temp)
            temp = buff[j];
    }
    return temp;
}