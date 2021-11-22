#include <stdio.h>

int binary(int a[],int ele,int l, int r);

int main(){

    int array[] = {1,2,3,4,5,6,7,8};
    int index = binary(array, 5, 0, 7);
    printf("Index of 5 is: %d", index);
    return 0;
}

int binary(int a[],int ele,int l, int r){

    int mid = l + (r - l) / 2; // finding the mid point
    if (l > r) return -1;
    if(a[mid] == ele)
        return mid; // we found the mid point
    else if (a[mid] > ele)
        return binary(a, ele, l, mid - 1);
    else
        return binary(a, ele, mid + 1, r);
}

      






