#include <stdio.h>

void printArr(int *array,int n);
void swapArr(int *buff,int m);

int main()
{
    int arr[7] = {1,2,3,4,5,6,7};
    int size = sizeof(arr)/sizeof(arr[0]);
    
    printf("Original array is: ");
    printArr(arr,size);
    
    printf("\nSwapped array is: ");
    swapArr(arr,size);
    printArr(arr,size);
    
    return 0;
}


void printArr(int *array,int n){
    for(int i=0;i<n;i++){
        printf("%d\t",array[i]);
    }
}

void swapArr(int *buff,int m){
    int start=0,end=m-1,temp=0;
    //swap the elements
    while(start < end){
        temp = buff[start];
        buff[start]=buff[end];
        buff[end]=temp;
        
        start++;
        end--;
    }
}