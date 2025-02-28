#include <stdio.h>

void printArr(int *array,int n);
int linear_search(int *array,int n,int key);

int main()
{
    int arr[21] = {0};
    int size=0,val=0,pos=0;
    
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
    printf("Enter the key element to search: ");
    scanf("%d",&val);
    
    pos = linear_search(arr,size,val);
    if(pos)
        printf("Key %d found at index %d\n",val,pos);
    else
        printf("key %d not found\n",val);
    
    return 0;
}

int linear_search(int *array,int n,int key){
    for(int i=0;i<n;i++){
        if(array[i] == key){
           return i;
        }
    }
    return 0;
}
void printArr(int *array,int n){
    for(int i=0;i<n;i++){
        printf("%d\t",array[i]);
    }
}


