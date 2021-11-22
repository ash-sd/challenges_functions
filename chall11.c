#include <stdio.h>

int main(){
	
	int x, y, temp;
	printf("Insert two values to be swapped:\n");
	scanf("%d %d",&x, &y);
	temp = x;
	x = y;
	y = temp;
	printf("The values swapped are: %d and %d.",x, y);
		
	return 0;
}
