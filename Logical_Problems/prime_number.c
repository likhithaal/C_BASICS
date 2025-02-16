#include <stdio.h>
#include <stdbool.h>

bool isPrime(int num);

int main(){

    for(int i=0;i < 100 ; i++){
        if(isPrime(i))
            printf(i);
    }

return 0;
}

bool isPrime(int num){
    if(num <= 1)
        return false;

    for(int index=2; index * index <= num; index++){
        if(num % index == 0)
            return false;
    }
    return true;

}