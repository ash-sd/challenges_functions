#include <stdio.h>

int main(){
    
        //__________storing the values___________//

    
    int num[1000],i,max;
    printf("Enter the max elements of the array:\n");
    scanf("%d",&max);
    printf("Insert a values to be stored in the array:\n");
        for(i=0;i<max;i++){
        scanf("%d",&num[i]);
        }
    printf("The values you inserted are:");
        for(i=0;i<max;i++){
        printf("%d ",num[i]);
        }

        //__________sorting them___________//

    for(i=0;i < max -1; i++){
        int min = i;
        for (int j = i+1;j<max;j++)
        if(num[j] < num[min]) min = j;
        if(min != i){
            int temp = num[i];
            num[i] = num[min];
            num[min] = temp;
        }
    }
	printf("\nThe values sorted are:");
	for (i = 0; i<max; i++)
	    printf("\n[%d] = %d\n", i,num[i]);


    return 0;
}

      



