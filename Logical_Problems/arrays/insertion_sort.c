#include <stdio.h>

void printArr(int *array,int n);
int insertion_sort(int *buff,int m);

int main()
{
    int arr[21] = {0};
    int size=0;
    
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
    
    if(insertion_sort(arr,size)){
        printf("Sorted array is: ");
        printArr(arr,size);
    }else{
        printf("Array is already sorted\n");
    }
    
    return 0;
}

int insertion_sort(int *buff,int m){
    int sort_check=0,key=0,j=0;
    for(int i=1;i<m;i++){  //consider 1st element is already sorted
        key = buff[i];
        j=i-1;
        while(j >= 0 && buff[j] > key){
            buff[j+1] = buff[j];
            j=j-1;
            sort_check = 1;
        }
        buff[j+1] = key;     //if that index is already sorted no need to shift, add key to next index so j+1
    }
 
    return sort_check;
}

void printArr(int *array,int n){
    for(int i=0;i<n;i++){
        printf("%d\t",array[i]);
    }
}


