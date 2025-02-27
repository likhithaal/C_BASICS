#include <stdio.h>

void printArr(int *array,int n);
void copy_arr(int *buff,int m);

int main()
{
    int src_arr[7] = {1,2,3,4,5,6,7};
    int size = sizeof(src_arr)/sizeof(src_arr[0]);

    printf("Source array: ");
    printArr(src_arr,size);
    
    printf("\ndestination array: ");
    copy_arr(src_arr,size);
    
    return 0;
}


void printArr(int *array,int n){
    for(int i=0;i<n;i++){
        printf("%d\t",array[i]);
    }
}

void copy_arr(int *buff,int m){
    int dest_arr[m] ;
    for(int k=0;k<m;k++){
        dest_arr[k] = buff[k];
    }
    printArr(dest_arr,m);
}
