#include <stdio.h>
#include <string.h>

void reverse_word(char *str,int l);
void printArr(char *array,int n);

int main(){
    
    char arr[100] = {0};
    char charecter;

    printf("Enter the string: ");
    scanf("%[^\n]",arr);   //read until new line (escape \n)
    int len = strlen(arr);

    reverse_word(arr,len);
    printArr(arr,len);
    
    return 0;
}

void reverse_word(char *str,int l){
    int start=0,end=0,temp=0;
    for(int i=0;i<=l;i++){
        if(str[i] == ' ' || str[i] == '\0'){
            end = i-1;
            while(start < end){
                temp = str[start];
                str[start] = str[end];
                str[end] = temp;
                start++;
                end--;
            }
            start = i+1;
        }
    }
}

void printArr(char *array,int n){
    for(int i=0;i<n;i++){
        printf("%c",array[i]);
    }
}
