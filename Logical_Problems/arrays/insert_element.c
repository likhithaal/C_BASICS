#include <stdio.h>

void printArr(int *array,int n);
int insert_element(int *array,int n,int pos,int data);

int main()
{
    int arr[21] = {0};
    int size=0,position=0,val=0;
    
    printf("Enter the size of the array: [limit is 20]: ");
    scanf("%d",&size);
    if(size > 20)
    {
        printf("Give the size within the limit (20)\n");
        return -1;
    }
    
    printf("Enter the array elements: ");
    for(int i=0;i<size;i++){
        scanf("%d",&arr[i]);
    }
    printf("Enter the element to be inserted: ");
    scanf("%d",&val);
    
    printf("Enter the position: ");
    scanf("%d",&position);
    
    if(insert_element(arr,size,position,val)){
        printf("\nArray after insertion: ");
        size = size+1;
        printArr(arr,size);
    }
    else
        printf("\nInvalid position");
    
    return 0;
}

int insert_element(int *array,int n,int pos,int data)
{
    //insert element in the given position
    if(pos < 0 || pos > n)
        return 0;
        
    //shift the elements to right
    for(int i=n ;i>pos;i--){
        array[i] = array[i-1];
    }
    array[pos] = data;
    return 1;
}

void printArr(int *array,int n){
    for(int i=0;i<n;i++){
        printf("%d\t",array[i]);
    }
}


