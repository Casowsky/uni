#include <stdio.h>

int* shift_array(int adjustment)
{
	int* array;

	int myArr[6] = {1,2,3,4,5,6};
	int i;

	for(i=0;i<6;i++)
	{
		myArr[i] = myArr[i] * adjustment;
	}

	printf("array = [");
	for(i=0;i<6;i++)
	{
		printf(" %d ", myArr[i]);
	}
	printf("]\n");

	array = myArr;

	return array;
}

int main(void)
{
	int* returned_array;
	int i;

	returned_array = shift_array(3);

	printf("returned array = [");
	for(i=0;i<6;i++)
	{
		printf(" %d ", returned_array[i]);
	}
	printf("]\n");
	
	return 0;
}
