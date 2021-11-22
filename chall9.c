#include <stdio.h>
int main(){
    int array[1000], i, max, ele, found=0;
    printf("Enter how many values you want to store on the array: ");
    scanf("%d",&max);
    printf("Insert values to be stored:\n");
        for(i=0; i<max;i++){
            scanf("%d",&array[i]);
        }
    printf("The elements you've entered are:\n");
        for(i=0;i<max;i++){
            printf("%d ",array[i]);
        }
    printf("\nInsert a value to search for the index position for it: ");
    scanf("%d",&ele);
        for(i=0;i<max;i++){
            if (array[i] == ele){
                printf("The index is: %d", i);
                found = 1;
                break;
            }
        }
        if(!found) printf("The index was not found.");

    return 0;
}






