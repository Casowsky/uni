#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int i;

	int a[6] = {-2,-1,0,1,2,3};
	int b[5] = {0,5,10,15,20};

	int** s = NULL;
	int* t = NULL;
	int** y = NULL;

	s = (int**)malloc(2 * sizeof(int*));
	t = &a[a[b[1]]];
	y = (int**)malloc(sizeof(int*));

	s[0] = b + 1;
	*(s + 1) = *s + 1;
	*y = s[1] + 1;

	t[1] = s[0][1] + s[1][1];
	(*(*y + 1))++;

	printf("a = [");
	for(i=0;i<6;i++)
	{
		printf(" %d ", a[i]);
	}
	printf("]\n");

	printf("b = [");
	for(i=0;i<5;i++)
	{
		printf(" %d ", b[i]);
	}
	printf("]\n");
	
	return 0;
}
