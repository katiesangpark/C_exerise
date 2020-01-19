#include <stdio.h>

int main()
{
	int array[5];
	int i;
	for(i=0; i<5; i++) {
		array[i] = i;
	}
	printf("array[0]=%d \n", array[0]);
    printf("array[1]=%d \n", array[1]);
	printf("array[2]=%d \n", array[2]);
    printf("array[3]=%d \n", array[3]);
    printf("array[4]=%d \n", array[4]);
    // printf("array[5]=%d \n", array[5]);
}	
