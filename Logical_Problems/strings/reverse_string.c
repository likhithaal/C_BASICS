#include <stdio.h>
#include <string.h>

void reverse_str(char *str,int l);
void printArr(char *array,int n);

int main(){
    
    char arr[] = "HELLO WORLD..!";
    int len = strlen(arr);
    
    reverse_str(arr,len);
    printArr(arr,len);
    
    return 0;
}

void reverse_str(char *str,int l){
    int start=0,end=l-1;
    char temp=0;
    while(start < end){
        temp = str[start];
        str[start] = str[end];
        str[end] = temp;
        
        start++;
        end--;
    }
    
}

void printArr(char *array,int n){
    for(int i=0;i<n;i++){
        printf("%c",array[i]);
    }
}