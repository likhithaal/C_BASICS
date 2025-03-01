#include <stdio.h>

void printArr(int *array,int n);
int bubble_sort(int *buff,int m);
int binary_search(int *b_arr,int low,int high,int key);

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
    
    if(bubble_sort(arr,size)){
        printf("Sorted array is: ");
        printArr(arr,size);
    }else{
        printf("Array is already sorted\n");
    }
    
    pos = binary_search(arr,0,size-1,val);
    if(pos != -1)
        printf("\nKey %d found at index %d\n",val,pos);
    else
        printf("key %d not found\n",val);
    
    return 0;
}

int bubble_sort(int *buff,int m){
    int temp=0,sort_check=0;
    for(int i=0;i<m-1;i++){
        for(int j=0;j<m-i-1;j++){
            if(buff[j] > buff[j+1]){
                temp = buff[j];
                buff[j] = buff[j+1];
                buff[j+1]=temp;
                sort_check=1;
            }

        }
    }  
    return sort_check;
}

int binary_search(int *b_arr,int low,int high,int key){
    int mid = 0;
    while(low <= high){
        mid = low + (high - low)/2;
        
        if(b_arr[mid] == key) 
            return mid;    //return the index of that key
        
        if(b_arr[mid] < key)
            low = mid + 1;
        else
            high = mid - 1;
            
    }
    return -1;  //key not found
}

void printArr(int *array,int n){
    for(int i=0;i<n;i++){
        printf("%d\t",array[i]);
    }
}


