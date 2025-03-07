#include <stdio.h>
#include <string.h>
#include <ctype.h>   //isalnum() and tolower()

int is_palindrome(char *str);

int main(){
    
    char arr[100] = {0};

    printf("Enter the string: ");
    scanf("%[^\n]",arr);   //read until new line (escape \n)
    
    if(is_palindrome)
        printf("String is a palindrome\n");
    else
        printf("String is not a palindrome\n");
    
    return 0;
}


/*
examples sentences for palindrome[Ignore spaces,punctuation,case,non-alphanumeric]
A man a plan a canal Panama
Madam, I'm Adam!
Racecar
No 'x' in Nixon!
*/

int is_palindrome(char *str){
    int len = strlen(str); 
    char start=0,end=len-1;
    while(start < end){
        // skip all non-alphanumeric charecters and ignore case
        if(!isalnum(str[start]))
            start++;
        else if(!isalnum(str[end]))
            end--;
        else{
            //convert to lowercase
            if(tolower(str[start]) != tolower(str[end]))
                return 0;
            start++;
            end--;
        }
        
    }
    return 1;
}