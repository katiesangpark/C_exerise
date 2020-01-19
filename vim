#include <unistd.h>

void main()
{
	int array[5];
	
	int i;
	for(i=0; i<5; i++) {
		array[i] = i;
	}
	printf("array[0]=%d \n", array[0]);
	return (0);
}

