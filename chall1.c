#include <stdio.h>

int main(){

    int x, y, sum;

    printf("Insert a value for x and y.\n");
    scanf("%d %d",&x, &y);

    sum = add(x,y);

    printf("The sum is: %d", sum);


    return 0;
}

int add(int a, int b){



    return (a+b);



}
