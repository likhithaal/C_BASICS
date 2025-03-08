#include <stdio.h>
#include <string.h>

#define MAX_CHAR    256  //total 256 charecters in ASCII

char count_non_repeat_ch(char *str);

int main(){
    
    char arr[100] = {0};
    char charecter;

    printf("Enter the string: ");
    scanf("%[^\n]",arr);   //read until new line (escape \n)
    
    charecter = count_non_repeat_ch(arr);
    if(charecter != '\0'){
        printf("First non repeating ch is %c\n",charecter);
    }else{
        printf("Non repeating ch not found\n");
    }
    
    return 0;
}

char count_non_repeat_ch(char *str){
    char freq[MAX_CHAR] = {0};
    
    for(int i=0; str[i] != '\0';i++){
        freq[(unsigned char)str[i]]++;   //increment freq of each charecter
    }
    
    for(int j=0; str[j] != '\0';j++){
        if(freq[(unsigned char)str[j]] == 1)  //find the first ch with freq 1
            return str[j];
    }
    return '\0';
    
}
