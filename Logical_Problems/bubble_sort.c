#include <stdio.h>
void sorting(int *arr,int n);
void printArr(int *arr,int n);

int main(){
    
    int arr[5] = {22, 154, 6587,0, 654};
    
    sorting(arr,5);
    printArr(arr,5);
    
    return 0;
}

void sorting(int *arr,int n){
    int temp = 0;
    for(int i=0;i< n-1;i++){
        for(int j=0;j<n-i-1;j++){
            if(arr[j] > arr[j+1]){
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
}


void printArr(int *arr,int n){
    for(int i=0; i<n;i++){
        printf("%d\t",arr[i]);
    }
}
