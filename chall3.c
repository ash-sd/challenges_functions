#include <stdio.h>
#include <stdbool.h>

bool isPrime(int num);

int main(){
    
    int num = 13;
    printf("Insert a digit:");
    scanf("%d",&num);
    
    if (isPrime(num)){
        printf("%d is a prime number",num);
    }
    else
        printf("%d is not a prime number",num);
    
    return 0;
}

bool isPrime(int num){
    int i, count=0;
    bool prime;
    for(i=1;i<=num;i++){
        if (num % i ==0){
            count++;
        }
    }
    if (count == 2) {
        return true;

    }
    else{
        return false;
    }
    
}