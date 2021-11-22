#include <stdio.h>
#include <stdbool.h>
bool dividedby(int x, int y);

int main(){
    int a =22, b= 2;
    printf("Insert two digits:");
    scanf("%d%d", &a, &b);
    if (dividedby(a,b)){
        printf("%d is a prime number",(a/b));
    }
    else{
        printf("%d is not a prime number",(a/b));
    }
    return 0;
}
bool dividedby(int x,int y){
    int sum, i;
    sum = x/y;
    bool prime;
    int count=0;
    for(i=1;i<=sum;i++){
        if (sum % i == 0){
            count++;
        }
    }
    if (count == 2){
        return true;
    }
    else{
        return false;
    }
}