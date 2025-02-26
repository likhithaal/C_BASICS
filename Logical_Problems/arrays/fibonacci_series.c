#include <stdio.h>

void fibonacci_series(int n);
void printArr(int *arr,int n);

int arr[20] = {0};

int main(){
    int n=20;
    fibonacci_series(n);
    
    return 0;
}

void fibonacci_series(int n){

    arr[0]=0;
    arr[1]=1;
    
    for(int j=2;j<n;j++){
        arr[j] = arr[j-1] + arr[j-2];
    }
    
    printArr(arr,n);
}

void printArr(int *arr,int n){
    for(int i=0;i< n;i++){
        printf("%d\n",arr[i]);
    }
    
}
