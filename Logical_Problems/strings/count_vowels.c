#include <stdio.h>
#include <string.h>
#include <ctype.h>   //isalpha()

void count_vowels(char *str);

int main(){
    
    char arr[100] = {0};

    printf("Enter the string: ");
    scanf("%[^\n]",arr);   //read until new line (escape \n)
    
    count_vowels(arr);
    
    return 0;
}


void count_vowels(char *str){
    int vowels=0,consonents=0;
    char ch;
    while(*str){
        ch = tolower(*str);
        if(isalpha(ch)){       //consider only alpahbets
            if(ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')
                vowels++;
            else
                consonents++;
        }
        str++;
    }
    printf("Vowels: %d and consonents: %d\n",vowels,consonents);
}