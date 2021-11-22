#include <stdio.h>


int main(){

    int a, b;
    printf("Insert a variable for a and b:\n");
    scanf("%d %d",&a,&b);

    printf("The initial state of a and b is: %d and %d.\n",a,b);

    exchanger(a,b);

    return 0;
}

int exchanger(int,int){

    a = a+b;
    b = a-b;
    a = a-b;
    printf("The value of a and b is: %d and %d",a,b);

}
