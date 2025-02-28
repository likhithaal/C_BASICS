#include <stdio.h>

void printArr(int *array,int n);
int delete_element(int *array,int n,int pos);

int main()
{
    int arr[21] = {0};
    int size=0,position=0;
    
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
    
    printf("Enter the position to delete: ");
    scanf("%d",&position);
    
    printf("Array before deletion: ");
    printArr(arr,size);
    
    if(delete_element(arr,size,position)){
        printf("\nArray after deletion: ");
        size = size-1;
        printArr(arr,size);
    }
    else
        printf("\nInvalid position");
    
    return 0;
}

int delete_element(int *array,int n,int pos)
{
    if(pos < 0 || pos > n)
        return 0;
        
    //shift the elements to left
    for(int i=pos ;i<n;i++){
        array[i] = array[i+1];
    }
    return 1;
}

void printArr(int *array,int n){
    for(int i=0;i<n;i++){
        printf("%d\t",array[i]);
    }
}


